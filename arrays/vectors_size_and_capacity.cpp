#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vec;
    vec.push_back(10);
    vec.push_back(65);
    vec.push_back(176);
    vec.push_back(45);
    vec.push_back(45);

       cout<<vec.size()<<endl;
       cout<<vec.capacity()<<endl;

}