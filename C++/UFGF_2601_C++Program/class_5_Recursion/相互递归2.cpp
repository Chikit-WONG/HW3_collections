#include<iostream>
using  namespace std;

int term_value();
int factor_value();

int expression_value()
{
    int result=term_value();
    bool more =true;
    while(more)
    {
        char op=cin.peek();
        if(op=='+'||op=='-')
        {
            cin.get();
            int value=term_value();
            (op=='+')?result+=value:result-=value;

        }
        else
        {
            more=false;
        }
    }
    return result;
}

int term_value()
{
    int result=factor_value();
    bool more=true;
    while(more)
    {
        char op=cin.peek();
        if(op=='*'||op=='/')
        {
            cin.get();
            int value=factor_value();
            (op=='*')?result*=value:result/=value;

        }
        else
        {
            more=false;
        }
    }
    return result;
}

int factor_value()
{
    int result=0;
    char c=cin.peek();
    if(c=='(')
    {
        cin.get();
        result=expression_value();
        cin.get();
    }
    else
    {
        while(isdigit(c))
        {
            result=10*result+c-'0';
            cin.get();
            c=cin.peek();
        }
    }
    return result;
}

int main()
{
   
    cout<<expression_value()<<endl;
    return 0;
}