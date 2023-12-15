#include<iostream>
using namespace std;
int Compare_ints(const void *p,const void *q)
{
    int x=*(const int *)p;
    int y=*(const int *)q;
    if(x<y)
    {
        return -1;
    }
    else if(x>y)
    {
        return 1;
    }
    return 0;
    // int x;
    // cout<<"1:asending"<<endl;
    // cout<<"2:descending"<<endl;
    // cout<<"0:?"<<endl;
    // cin>>X;
    // return x;
}


int main()
{
    int arr[]={5,2,9,1,2,5};
    size_t num_elements=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,num_elements,sizeof(int),Compare_ints);
    cout<<"Sorted array:"<<endl;
    for(size_t i=0;i<num_elements;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}