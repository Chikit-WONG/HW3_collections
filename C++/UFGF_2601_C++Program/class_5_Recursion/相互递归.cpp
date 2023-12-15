#include<iostream>
#include<cctype>
using namespace std;

int factor_value();
int term_value();

int expression_value()
{
    cin >> std::ws;
    int result=term_value();
    bool more=true;
    while(more)
    {
        char op=cin.peek();
        if(op=='+'||op=='-')
        {
            cin.get();
            int value=term_value();
            if(op=='+')
            {
                result+=value;
            }
            else
            {
                result-=value;
            }
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
    cin >> std::ws;
    int result=factor_value();
    bool more=true;
    while(more)
    {   char op=cin.peek();
        if(op=='*'||op=='/')
        {
            cin.get();
            int value=factor_value();
            if(op=='*')
            {
                result*=value;
            }
            else
            {
                result/=value;
            }
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
    cin >> std::ws;
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
    int result=expression_value();
    cout<<result<<endl;
    return 0;
}