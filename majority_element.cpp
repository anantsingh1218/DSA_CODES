//done this question on leetcode 169
//brute force approach
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int val:nums)
        {
            int c=0;
            for(int el:nums)
            {
                if(el==val)
                {
                    c++;
                }
            }
            if(c>n/2){
            return val;
            }
        }
        return -1;
    }

};
//more optimised approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //sort
        sort(nums.begin(),nums.end());

        int c=0;
        int ans=nums[0];
        for(int i=1; i<n;i++)
        {
           if(nums[i]==nums[i-1]){
            c++;
           }else{
            c=1;
            ans=nums[i];
           }
           if(c>n/2)
           {
            return ans;
           }
        }
        return ans;
    }

};