#include<iostream>
using namespace std;
class Linkedlist;
class Node
{
    friend class Linkedlist;
    private:
        int data;
        Node *next;
};

class Linkedlist
{
private:
    Node *head;
public:
    Linkedlist()
    {
        head=nullptr;
    }

    ~Linkedlist()
    {
        Node *current=head;
        while(current!=nullptr)
        {
            Node *next=current->next;
            delete current;
            current=next;
        }
    }

    void Insert(int value)
    {
        Node *newnode=new Node;
        newnode->data=value;
        newnode->next=nullptr;
        if(head==nullptr)
        {
            head=newnode;
        }
        else
        {
            Node *current=head;
            while(current->next!=nullptr)
            {
                current=current->next;
            }
            current->next=newnode;
        }
    }

    void print()
    {
        Node *current=head;
        while(current!=nullptr)
        {
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};


int main()
{
    Linkedlist list;
    list.Insert(1);
    list.Insert(2);
    list.Insert(3);
    list.print();
    return 0;
}