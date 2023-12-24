#include <iostream>
using namespace std;
//(Ascending) Sorting is must in binary Search !
void BubbleSort(int a[])
{
    int i,j, temp;
    for(i = 0;i < 4;i++)
    {
        for(j = 0; j < i; j++)
        {
            cout<<"a["<<i<<']'<<" = "<<a[i]<<" ,a["<<j<<']'<<" = "<<a[j]<<endl;
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<endl;
    for(i = 0;i< 4;i++)
    {
        cout<<a[i]<<" ";
    }
}

int BinarySearch(int array[], int size, int element){
    int i,low,mid ,high;
    low = 0,high = size-1;

    while(low <= high){
    mid = (high+low)/2;
    if(array[mid] == element){
        return mid;
    }
    if(array[mid] < element){
        low = mid+1;
    }
    else
    {
        high = mid -1;
    }
    }
    return 0;

}
int main()
{
  int arr[] = {10,1,20,3};
  BubbleSort(arr);
  cout<<endl<<endl;
  int index = BinarySearch(arr,4,10);
  cout<<"Element found at poisition "<<index+1;
  return 0;
}