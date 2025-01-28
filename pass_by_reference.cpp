#include<iostream>
using namespace std;
void changearr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i]=10*arr[i];
    }
}
int main()
{
    int arr[5]={73, 38, 27, 128, 837};
    changearr(arr, 5);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }

}