#include<iostream>
using namespace std;
void reverse_array(int arr[],int size)
{
int start=0;
int end=size-1;
while(start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int main()
{
    int arr[]={43,36,86,93,29};
    int size=5;
    reverse_array(arr, size);
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
