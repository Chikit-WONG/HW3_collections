#ifndef MY_COLLECTION_H
#define MY_COLLECTION_H

#include "Collections.hpp"
#include <stdexcept>
#include<iostream>



template <typename E>
class ArrayList : public List<E> {
    // TODO
public:

    // ArrayList(int capacity)
    // {
    //     this->m_Capacity=capacity;
    //     this->m_Size=0;
    //     this->pAddress=nullptr;
    // }

    // ArrayList(const ArrayList &arr)
    // {
    //     this->m_Capacity=arr.m_Capacity;
    //     this->m_Size=arr.m_Size;
    //     this->pAddress=new E[this->m_Capacity];
    //     for(int i=0;i<this->m_Size;i++)
    //     {
    //         this->pAddress[i]=arr.pAddress[i];
    //     }
    // }

    // ArrayList& operator=(const ArrayList &arr)
    // {
    //     if(this->pAddress!=nullptr)
    //     {
    //         delete[] this->pAddress;
    //         this->m_Capacity=0;
    //         this->m_Size=0;
    //     }

    //     this->m_Capacity=arr.m_Capacity;
    //     this->m_Size=arr.m_Size;
    //     this->pAddress=new E[this->m_Capacity];
    //     for(int i=0;i<this->m_Size;i++)
    //     {
    //         this->pAddress[i]=arr.pAddress[i];
    //     }
    // }

    // E& operator[](int index)
    // {
    //     return this->pAddress[i];
    // }

    // void push_back(const E &val)
    // {
    //     if(this->m_Capacity==this->m_Size)
    //     {
    //         return;
    //     }
    //     this->pAddress[this->m_Size]=val;
    //     this->m_Size++;
    // }

    // void pop_back()
    // {
    //     if(this->m_Size==0)
    //     {
    //         return;
    //     }
    //     this->m_Size--;
    // }

    // int capacity()
    // {
    //     return this->m_Capacity
    // }

    // int size()
    // {
    //     return this->m_Size;
    // }

    ArrayList()
    {
        this->pAddress=nullptr;
        this->m_Capacity=0;
        this->m_Size=0;
    }

    ~ArrayList()
    {
        this->clear();
    }

    virtual int size() const override
    {
        return this->m_Size;
    }

    virtual bool isEmpty() const override
    {
        if(this->m_Size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    virtual bool contains(const E& element) const override
    {
        for(int i=0;i<this->m_Size;i++)
        {
            if(this->pAddress[i]==element)
            {
                return true;
            }
        }
        
        return false;
    }

    virtual bool remove(const E& element) override
    {
        for(int i=0;i<this->m_Size;i++)
        {
            if(this->pAddress[i]==element)
            {
                for(int j=i+1;j<this->m_Size;j++)
                {
                    this->pAddress[j-1]=this->pAddress[j];
                }
                this->m_Size--;
                return true;
            }
        }
        return false;
    }

    virtual void clear() override
    {
        if(pAddress!=nullptr)
        {
            delete[] pAddress;
            pAddress=nullptr;
            this->m_Capacity=0;
            this->m_Size=0;
        }
    }

    virtual E get(int index) const override
    {
        if(index < 0 ||index >= this->m_Size)
        {
            throw std::out_of_range("Index is out of range");
        }

        return this->pAddress[index];
    }

    virtual void add(const E& element) override
    {
        this->growArrayList();

        this->pAddress[this->m_Size]=element;
        this->m_Size++;
    }

    virtual void add(int index, const E& element) override
    {
        this->growArrayList();

        if(index < 0 ||index > this->m_Size)
        {
            throw std::out_of_range("Index is out of range");
            return;
        }

        if(index==this->m_Size)
        {
            this->pAddress[index]=element;
            this->m_Size++;
            return;
        }

        this->m_Size++;
        for(int i=this->m_Size-1;i>index;i--)
        {
            this->pAddress[i]=this->pAddress[i-1];
        }
        this->pAddress[index]=element;
    }

    virtual E removeIndex(int index) override
    {
        if(index < 0 ||index >= this->m_Size)
        {
            throw std::out_of_range("Index is out of range");
        }

        E temp=this->pAddress[index];

        for(int i=index+1;i<this->m_Size;i++)
        {
            this->pAddress[i-1]=this->pAddress[i];
        }
        this->m_Size--;

        this->shrinkingArrayList();

        return temp;
    }

    virtual int indexOf(const E& element) const override
    {
        for(int i=0;i<this->m_Size;i++)
        {
            if(this->pAddress[i]==element)
            {
                return i;
            }
        }

        return -1;
    }

    void growArrayList()
    {
        if(this->pAddress==nullptr)
        {
            this->m_Capacity=1;
            //this->m_Size=1;
            this->pAddress=new E[this->m_Capacity];
            return;
        }

        if(this->m_Capacity==this->m_Size)
        {
            E* bigger_array=new E[this->m_Capacity*2];
            for(int i=0;i<this->m_Capacity;i++)
            {
                bigger_array[i]=this->pAddress[i];
            }
            delete[] this->pAddress;
            this->pAddress=bigger_array;
            this->m_Capacity*=2;
            return;
        }
    }

    void shrinkingArrayList()
    {
        if(4*this->m_Size<=this->m_Capacity)
        {
            E* smaller_array=new E[this->m_Capacity/2];
            for(int i=0;i<this->m_Size;i++)
            {
                smaller_array[i]=this->pAddress[i];
            }
            delete[] this->pAddress;
            this->pAddress=smaller_array;
            this->m_Capacity/=2;
            return;
        }
    }

private:
    E* pAddress;
    int m_Capacity;
    int m_Size;
};

template<class E>
class Node
{
public:
    Node(const E& value):data(value),prev(nullptr),next(nullptr){}

    E data;
    Node* prev;
    Node* next;
};


template <typename E>
class Linkedlist : public List<E> {
    // TODO
private:
    Node<E>* head;
    Node<E>* tail;

public:
    Linkedlist():head(nullptr),tail(nullptr){}

    ~Linkedlist()
    {
        this->clear();
    }

    virtual int size() const override
    {
        Node<E>* current=head;
        int count=0;
        while(current!=nullptr)
        {
            count++;
            current=current->next;
        }
        return count;
    }

    virtual bool isEmpty() const override
    {
        return head==nullptr;
    }

    virtual bool contains(const E& element) const override
    {
        Node<E>* current=head;
        while(current!=nullptr)
        {
            if(current->data==element)
            {
                return true;
            }
            current=current->next;
        }
        return false;
    }

    virtual void add(const E& element) override
    {
        Node<E>* newNode=new Node<E>(element);
        if(head==nullptr)
        {
            head=tail=newNode;
        }
        else
        {
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }

    virtual bool remove(const E& element) override
    {
        Node<E>* current=head;
        while(current!=nullptr)
        {
            if(current->data==element)
            {
                current->prev->next=current->next;
                current->next->prev=current->prev;
                delete current;
                return true;
            }
            current=current->next;
        }
        return false;
    }

    virtual void clear() override
    {
        if(head!=nullptr)
        {
            while(head!=nullptr)
            {
                Node<E>* temp=head;
                head=head->next;
                delete temp;
            }
            tail=nullptr;
        }
    }

    virtual E get(int index) const override
    {
        if(index < 0 || index >= this->size())
        {
            throw std::out_of_range("Index out of range");
        }

        Node<E>* current=head;
        for(int i=0;i<index;i++)
        {
            current=current->next;
        }
        return current->data;
    }

    virtual void add(int index, const E& element) override
    {
        if(index < 0 ||index > this->size())
        {
            throw std::out_of_range("Index out of range");
        }

        Node<E>* newNode=new Node<E>(element);

        if(index==this->size())
        {
            add(element);
        }

        if(index==0)
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        else
        {
            Node<E>* current=head;
            for(int i=0;i<index-1;i++)
            {
                current=current->next;
            }
            newNode->prev=current;
            newNode->next=current->next;
            current->next->prev=newNode;
            current->next=newNode;
        }
    }

    virtual E removeIndex(int index) override
    {
        if(index < 0 || index >= this->size())
        {
            throw std::out_of_range("Index out of range");
        }

        Node<E>* current=head;
        for(int i=0;i<index;i++)
        {
            current=current->next;
        }
        
        if(current->prev!=nullptr)
        {
            current->prev->next=current->next;
        }
        else
        {
            head=current->next;
        }

        if(current->next!=nullptr)
        {
            current->next->prev=current->prev;
        }
        else
        {
            tail=current->prev;
        }

        E removedData=current->data;
        delete current;
        return removedData;
    }

    virtual int indexOf(const E& element) const override
    {
        int index=0;
        Node<E>* current=head;
        while(current!=nullptr)
        {
            if(current->data==element)
            {
                return index;
            }
            index++;
            current=current->next;
        }
        return -1;
    }
};





#endif // COLLECTION_H
