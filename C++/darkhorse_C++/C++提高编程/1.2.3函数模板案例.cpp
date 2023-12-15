#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}


template<typename T>
void sort(T arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int min=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            mySwap(arr[min],arr[i]);
        }
    }
}

template<typename T>
void print(T arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void test01()
{
    char charArr[]="fedcba";
    int num=sizeof(charArr)/sizeof(charArr[0]);
    sort(charArr,num);
    print(charArr,num);
}

void test02()
{
    int intArr[]={5,7,8,5,6,4,1,3,2};
    int num=sizeof(intArr)/sizeof(intArr[0]);
    sort(intArr,num);
    print(intArr,num);
}

int main()
{
    test01();
    test02();
}