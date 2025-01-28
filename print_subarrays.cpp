//maximum subarray sum #subarr=n*(n+1)/2 n is the number of elements in the array
//subarray is making diff set of arrays from the given array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=6;
    int arr[]={23, 45, 37, 28, 38,82};
    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }

}