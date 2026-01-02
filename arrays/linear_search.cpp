#include<iostream>
using namespace std;
int linear_search(int arr[], int size, int target)
{
    for(int i=0; i<=size;i++)
    {
        if(arr[i]==target)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={464,487,483,389};
    int size=4;
    int target=448;
    cout<< linear_search(arr, size, target)<<endl;

}
