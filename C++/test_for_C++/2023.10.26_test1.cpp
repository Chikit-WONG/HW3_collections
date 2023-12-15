#include<iostream>
#include<string>
using namespace std;

class Product
{
    public:
        Product();
        Product(const string &name,double price,int score);
    private:
        string m_name;
        double m_price;
        int m_score;
};
Product::Product(const string &name,double price,int score):m_name(name),m_price(price),m_score(score){}
Product::Product()
{
    Product("TEST", 1.0, 1);
}
