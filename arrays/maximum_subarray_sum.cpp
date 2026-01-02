//brute force approach-> saare subarrays nikaal lo phir unka sum calculate karlo and maximum waala print kardo
//brute force approach time complexity is n^2
#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[]={-23, 45, -37, -28, 38,82};
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++)
    {
        int csum=0;
        for(int end=st;end<n;end++)
        {
            csum+=arr[end];
            maxsum=max(csum, maxsum);

        }
    }
    cout<<"Maximum subarray sum is="<<maxsum<<endl;

}