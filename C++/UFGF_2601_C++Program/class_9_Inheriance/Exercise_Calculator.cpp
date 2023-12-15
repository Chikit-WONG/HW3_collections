#include<iostream>
using namespace std;

class Computation
{
    public:
        virtual int evaluate() const=0;
        virtual ~Computation()=default;
};

class Const:public Computation
{
    public:
    Const(int v):value(v){};
        int evaluate() const override
        {
            return value;
        }
    private:
        int value;
};

class Addition:public Computation
{
    public:
        Addition(Computation *l,Computation *r):l(l),r(r){};
        int evaluate()const override
        {
            return l->evaluate()+r->evaluate();
        }
        
    private:
        Computation *l,*r;
};

class Multiplication:public Computation
{
    public:
        Multiplication(Computation *l,Computation*r):l(l),r(r){};
        int evaluate() const override
        {
            return l->evaluate()*r->evaluate();
        }
    private:
        Computation *l,*r;
};

int main()
{
    Computation *c=new Addition(new Const(5),new Multiplication(new Const(5),new Const(5)));
    cout<<c->evaluate()<<endl;
    return 0;
}