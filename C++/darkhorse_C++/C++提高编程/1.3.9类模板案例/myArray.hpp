#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray()
    {
        this->m_Capacity=0;
        this->m_Size=0;
        this->pAddress=nullptr;
    }

    MyArray(int Capacity)
    {
        m_Capacity=Capacity;
        m_Size=0;
        pAddress=new T[this->m_Capacity];
    }

    MyArray(const MyArray &arr)
    {
        this->m_Capacity=arr.m_Capacity;
        this->m_Size=arr.m_Size;
        pAddress=new T[this->m_Capacity];
        for(int i=0;i<this->m_Size;i++)
        {
            pAddress[i]=arr.pAddress[i];
        }
    }

    MyArray& operator=(const MyArray &arr)
    {
        if(this->pAddress!=nullptr)
        {
            delete[] this->pAddress;
            this->m_Size=0;
            this->m_Capacity=0;
        }
        this->m_Capacity=arr.m_Capacity;
        this->m_Size=arr.m_Size;
        this->pAddress=new T[this->m_Capacity];
        for(int i=0;i<this->m_Size;i++)
        {
            this->pAddress[i]=arr.pAddress[i];
        }
        return *this;
    }

    T& operator[](int index)
    {
        return this->pAddress[index];
    }

    void push_back(const T &val)
    {
        this->pAddress[this->m_Size]=val;
        this->m_Size++;
    }

    void pop_back()
    {
        if(this->m_Size==0)
        {
            return;
        }
        this->m_Size--;
    }

    int getSize()
    {
        return this->m_Size;
    }

    int getCapacity()
    {
        return this->m_Capacity;
    }

    ~MyArray()
    {
        if(this->pAddress!=nullptr)
        {
            delete[] this->pAddress;
            this->pAddress=nullptr;
            this->m_Capacity=0;
            this->m_Size=0;
        }
    }


private:
    T* pAddress;
    int m_Capacity;
    int m_Size;
};
