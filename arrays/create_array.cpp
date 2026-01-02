#include<iostream>
using namespace std;
 int main(){
    int a[50]={40,50,60,70,80};
     int size=5;
    double price[]={50.76, 70.89, 80.36};
    //cout<<a[0]<<endl;
    //cout<<a[1]<<endl;
    //cout<<a[2]<<endl;
    //cout<<price[3]<<endl;
    //cout<<price[2]<<endl;
    //loops running on arrays
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    //take input
    for(int i=0; i<size;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<endl;
    }

 }

