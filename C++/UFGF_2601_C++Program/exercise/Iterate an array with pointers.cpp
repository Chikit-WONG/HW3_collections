#include <iostream>
using namespace std;
double sum(double *values, int size)
{
    double total = 0;
    double *p = values;
    while (p < values + size) //数组的末尾位置可以通过将初始指针values与数组的大小size相加得到。这是因为指针的算术运算会根据指针所指向的数据类型来进行偏移。  
                                //假设values指针指向一个double类型的数组，size表示数组的元素个数。那么values + size的结果就是指针values向后移动了size个double大小的偏移量，指向了数组的末尾位置的下一个位置。
                                /*这样，循环条件p < values + size就可以确保指针p在遍历数组时不会越界，只会遍历到数组的末尾位置。
                                    需要注意的是，这里的values + size并不是数组的真正末尾地址，而是末尾位置的下一个地址。*/
    {
        total = total + *p;
        p++;
        cout<<"p="<<p<<endl;
        cout<<"values="<<values<<endl;
        cout<<"size"<<size<<endl;
        cout<<"values+size="<<values+size<<endl;
        cout<<"p="<<p<<endl;
        cout<<endl;
    }
    return total;
}

int main()
{
    double values[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(values,10)<<endl;
    return 0;
}