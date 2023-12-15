#include<iostream>
#include<vector>

using namespace std;

int binary_search_right_close(int nums[],int size,int target)
{
    int left=0,right=size-1;
    while(left<=right)
    {
        int mid=(left+(right-left)/2);
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(target < nums[mid])
        {
            right = mid-1;
        }
        else if(target > nums[mid])
        {
            left = mid+1;
        }
    }
    return -1;
}

int binary_search_right_open(int nums[],int size,int target)
{
    int left=0,right=size;
    while(left<right)
    {
        int mid=left+((right-left)/2);
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            right=mid;
        }
        else if(nums[mid]<target)
        {
            left=mid+1;
        }
    }
    return -1;
}

bool binary_search(vector<int> &v,vector<int>::iterator beginIt,vector<int>::iterator endIt,int value)
{
    while(beginIt<endIt)
    {
        vector<int>::iterator mid=(beginIt+(endIt-beginIt)/2);
        int mid_v=*mid;
        if(mid_v==value)
        {
            return true;
        }
        else if(mid_v>value)
        {
            endIt=mid;
        }
        else if(mid_v<value)
        {
            beginIt=mid+1;
        }
    }
    return false;
}

bool binary_search_recusive(vector<int> &v,int low,int high,int value)
{
    if(low<high)
    {
        int mid=low+(high-low)/2;
        if(v[mid]==value)
        {
            return true;
        }
        else if(v[mid]>value)
        {
            return binary_search_recusive(v,low,mid,value);
        }
        else if(v[mid]<value)
        {
            return binary_search_recusive(v,mid+1,high,value);
        }
    }
    return false;
}

bool binary_search2(vector<int> &v,int value)
{
    return binary_search_recusive(v,0,v.size(),value);
}



int main()
{
    int nums[10]={1,5,9,11,23,29,31,50};
    int size=sizeof(nums)/sizeof(nums[0]);
    std::cout<<binary_search_right_close(nums,size,29)<<std::endl;
    std::cout<<binary_search_right_open(nums,size,29)<<std::endl;

    vector<int> v{1,5,9,11,23,29,31,50};
    std::cout<<binary_search(v,v.begin(),v.end(),29)<<std::endl;

std::cout<<binary_search2(v,29)<<std::endl;
    return 0;
}