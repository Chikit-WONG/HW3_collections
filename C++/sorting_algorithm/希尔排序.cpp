#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &v, const int &i, const int &j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void print(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void shell_sort1(vector<int> &v) // 升序
{
    for (int inc = v.size() / 2; inc > 0; inc /= 2)
    {
        for (size_t i = inc; i < v.size(); i += inc)
        {
            int key = v[i];
            int j = i - inc;
            while (j >= 0 && v[j] > key)
            {
                v[j + inc] = v[j];
                j-=inc;
            }
            v[j + inc] = key;
        }
        print(v);
        
    }
}

void shell_sort2(vector<int> &v) // 降序
{
    for (int inc = v.size() / 2; inc > 0; inc /= 2)
    {
        for (size_t i = inc; i < v.size(); i += inc)
        {
            int key = v[i];
            int j = i - inc;
            while (j >= 0 && v[j] < key)
            {
                v[j + inc] = v[j];
                j-=inc;
            }
            v[j + inc] = key;
        }
        // print(v);
    }
}

void shell_sort3(vector<int> &v) //升序（另一种写方法/真正的写法）
{
    size_t i,inc,n=v.size();
    int j,key;
    for(inc=n/2;inc>0;inc/=2)
    {
        for(i=inc;i<n;i++)
        {
            key=v[i];
            for(j=i-inc;j>=0&&v[j]>key;j-=inc)
            {
                v[j+inc]=v[j];
            }
            v[j+inc]=key;
            print(v);
        }
    }
}
void shell_sort4(vector<int> &v) //降序
{
    size_t i,inc,n=v.size();
    int j,key;
    for(inc=n/2;inc>0;inc/=2)
    {
        for(i=inc;i<n;i++)
        {
            key=v[i];
            for(j=i-inc;j>=0&&v[j]<key;j-=inc)
            {
                v[j+inc]=v[j];
            }
            v[j+inc]=key;
            print(v);
        }
    }
}
int main()
{
    vector<int> v = {1, 4, 5, 9, 7, 8, 3, 5, 6, 3};
    print(v);
    // cout<<"method1:"<<endl;
    // shell_sort1(v);
    // print(v);
    cout<<"method3:"<<endl;
    shell_sort3(v);
    print(v);
    cout<<"method4:"<<endl;
    shell_sort4(v);
    print(v);
    return 0;
}