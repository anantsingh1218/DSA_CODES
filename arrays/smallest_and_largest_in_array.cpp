#include<iostream>
using namespace std;
int main()
{
    int n[5]={67,738,397,387,76};
    int size=5;
    int smallest=INT_MAX;//for largest keep it INT_MIN
    for(int i=0; i<size;i++)
    {
        //if(n[i]<smallest)
        //{
          //  smallest=n[i];
        //}
        //shorter version to write the above if statement
        smallest=min(n[i], smallest);

    }
    cout<<smallest<<endl;
    for(int j=0;j<size;j++)
    {
        if(n[j]==smallest)
        cout<<j<<endl;
    }
}