//vectors are array like , dynamic in nature
//STL(standard template library)->toolbox jisme kaafi saare DS(stack, hashtable, quene) ka implementation code likha hua hai
//STL ke andar tool hai vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector<int> vec ={1, 2, 3}; //syntax create
    vector<int> vec(3,0);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    vector<char> vec2={'a', 'b', 'c', 'd', 'e'};
    for(char val: vec2){//syntax for for each loop
      cout<<val<<endl;
    }
    //vector functions
    cout<<"size=" <<vec.size()<<endl;//size of vector function
    cout<<"size=" <<vec2.size()<<endl;
    vec.push_back(25);// push back function to add elements in the array
    cout<<"size after push back="<<vec.size()<<endl;
    for(int val: vec){//syntax for for each loop
      cout<<val<<endl;
    }
    vec.pop_back();//delete elements from the array
    cout<<"size after pop back="<<vec.size()<<endl;
    for(int val: vec){//syntax for for each loop
      cout<<val<<endl;
    }
    return 0;

}
//vec.front() returns front value or the first value
//vec.back() returns back value or the last value
//vec.at(0) prints the value at 0th index
//Static vs dynamic allocation-> static allocation compile time par ho jaata hai dynamic allocation runtieme par hota hai vectors ma dynamic allocation hota hai kyuki size kisi bhi time pe change kar sakte hain
//static stack memory ma hoti hai and dynamic allocation heap memory  ma hoti hai