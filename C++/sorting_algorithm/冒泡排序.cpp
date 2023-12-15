/*时间复杂度
最好的情况是o(0)  已经排好的
最坏的轻快是o(n^2) 全都是反过来的
稳定性：稳定
*/
#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> &v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bobble_sort1(vector<int> &v) //升序的冒泡排序
{
    for(size_t i=0;i<v.size()-1;i++)
    {
        for(size_t j=0;j<v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

void bobble_sort2(vector<int> &v) //降序的冒泡排序
{
    for(size_t i=0;i<v.size()-1;i++)
    {
        for(size_t j=0;j<v.size()-i-1;j++)
        {
            if(v[j]<v[j+1])
            {
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

int main()
{
    vector<int> v={1,5,7,9,5,3,4,8,1,5,6};
    print(v);
    bobble_sort1(v);
    print(v);
    bobble_sort2(v);
    print(v);
    return 0;


}