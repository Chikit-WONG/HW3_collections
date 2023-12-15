#include<iostream>
using namespace std;
class BaseClass {
public:
BaseClass() { std::cout << "construct base" << std::endl; }
virtual ~BaseClass() { std::cout << "destruct Base" << std::endl; }
};
class Data {
public:
Data(){cout<<"construct data"<<endl;}
~Data() { std::cout << " destruct data" << std::endl; }
};
class DerviedClass : public BaseClass { Data d;
public:
DerviedClass()
{
    cout<<"construct DeviedClass"<<endl;
}
~DerviedClass()
{
    cout<<"destruct DerviedClass"<<endl;
}
 };
int main() {
BaseClass *b = new DerviedClass;
delete b;
cout<<endl;
DerviedClass *c=new DerviedClass;
delete c;
cout<<endl;
BaseClass *d;
return 0;
}