#include <iostream>
#include <functional>
#include <algorithm>
#define MAX 7
using namespace std;

void Descend(int *Arr)
{
    sort(Arr,Arr+MAX,greater<int>());
    for (int i = 0; i < MAX; i++)
    {
        cout<<Arr[i]<<' ';
    }
}

void Ascend(int *Arr)
{
    sort(Arr,Arr+MAX);
    for (int i = 0; i < MAX; i++)
    {
        cout<<Arr[i]<<' ';
    }
}
int main()
{   
    int  Arr[MAX] = {98,34,121,53,11,8,76};
    cout<<"In Ascending order:"<<endl;
    Ascend(Arr);
    cout<<endl;
    cout<<endl<<"In Descending order:"<<endl;
    Descend(Arr);
    return 0;
}