#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        size_t n=nums.size();
        for(size_t i=0;i<n;i++)
        {
            for(size_t j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
};

int main()
{
    vector<int> nums={2,7,11,15};
    Solution solve;
    vector<int> result;
    result=solve.twoSum(nums,9);
    return 0;
}

