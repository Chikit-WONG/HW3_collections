#include <iostream>
using namespace std;
double sum(double *values, int size)
{
    double total = 0;
    double *p = values;
    while (p < values + size) //�����ĩβλ�ÿ���ͨ������ʼָ��values������Ĵ�Сsize��ӵõ���������Ϊָ���������������ָ����ָ�����������������ƫ�ơ�  
                                //����valuesָ��ָ��һ��double���͵����飬size��ʾ�����Ԫ�ظ�������ôvalues + size�Ľ������ָ��values����ƶ���size��double��С��ƫ������ָ���������ĩβλ�õ���һ��λ�á�
                                /*������ѭ������p < values + size�Ϳ���ȷ��ָ��p�ڱ�������ʱ����Խ�磬ֻ������������ĩβλ�á�
                                    ��Ҫע����ǣ������values + size���������������ĩβ��ַ������ĩβλ�õ���һ����ַ��*/
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