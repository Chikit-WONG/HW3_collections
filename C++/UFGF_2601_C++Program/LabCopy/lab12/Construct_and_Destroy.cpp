#include<iostream>
#include<string>

using namespace std;

class Foo{
public:
	Foo(){cout<<"Foo Constructed!"<<endl;}
  ~Foo(){cout<<"Foo Destoryed!"<<endl;}
};

class Bar: public Foo{
public:
	Bar(){cout<<"Bar Constructed!"<<endl;}
  ~Bar(){cout<<"Bar Destoryed!"<<endl;}
};

int main()
{
    Bar bar;
    return 0;
}