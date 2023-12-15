#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int> &v,vector<int> &left,vector<int> &right,int leftsize,int rightsize)
{
    int i=0,j=0,k=0;
    while(i<leftsize &&j< rightsize)
    {
        if(left[i]<=right[j])
        {
            v[k]=left[i];
            i++;
        }
        else
        {
            v[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<leftsize)
    {
        v[k]=left[i];
        i++;
        k++;
    }

    while(j<rightsize)
    {
        v[k]=right[j];
        j++;
        k++;
    }
}
void MergeSort(vector<int> &v,int size)
{
    if(size<=1)
    {
        return;
    }
    int mid=size/2;
    vector<int> left(mid);
    vector<int> right(size-mid);
    for(int i=0;i<mid;i++)
    {
        left[i]=v[i];

    }

    for(int i=0;i<size-mid;i++)
    {
        right[i]=v[mid+i];
    }

    MergeSort(left,mid);
    MergeSort(right,size-mid);
    Merge(v,left,right,mid,size-mid);
}

int main()
{
    int n;
    cout<<"Please enter how many numbers do you want to sort:";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    MergeSort(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;

}
