#include "Collections.hpp"
#include "MyCollections.hpp"

#include <stdexcept>
#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
    Person() {}
    Person(std::string name, int id) :m_Name(name), m_Id(id) {}
    bool operator==(const Person& p)
    {
        return (this->m_Name==p.m_Name && this->m_Id==p.m_Id);
    }

    std::string m_Name;
    int m_Id;
};

template <typename T>
void test_list0(List<T>& list)
{
    try
    {
        // Test size function
        std::cout << std::endl;
        std::cout << "---------------------Test size function--------------------------------" << std::endl;
        std::cout << "----------------------list.size()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "List size: " << list.size() << std::endl;

        // Test add function
        std::cout << std::endl;
        std::cout << "---------------------Test add function-----------------------------------" << std::endl;
        std::cout << "-----list.add(0)  list.add(1)  list.add(2)  list.add(3)  list.add(4)-----" << std::endl;
        std::cout << std::endl;
        list.add(0);
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << list.get(i) << " ";
        }
        std::cout << std::endl;

        // Test size function
        std::cout << std::endl;
        std::cout << "---------------------Test size function--------------------------------" << std::endl;
        std::cout << "----------------------list.size()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "List size: " << list.size() << std::endl;

        // Test isEmpty function when the list is not empty
        std::cout << std::endl;
        std::cout << "--------------Test isEmpty function when the list is not empty----------" << std::endl;
        std::cout << "----------------------list.isEmpty()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is the list empty? " << (list.isEmpty() ? "true" : "false") << std::endl;

        // Test contains function
        std::cout << std::endl;
        std::cout << "------------------------------Test contains function--------------------" << std::endl;
        std::cout << "---------------------------list.contains(1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is 1 contain in the list? " << (list.contains(1) ? "true" : "false") << std::endl;
        std::cout << std::endl;
        std::cout << "---------------------------list.contains(-1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is -1 contain in the list? " << (list.contains(-1) ? "true" : "false") << std::endl;

        // Test remove function
        std::cout << std::endl;
        std::cout << "------------------------------Test remove function--------------------" << std::endl;
        std::cout << "---------------------------list.remove(1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "remove 1: " << (list.remove(1) ? "succeeded" : "failed") << std::endl;
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << list.get(i) << " ";
        }
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "---------------------------list.remove(1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "remove 1: " << (list.remove(1) ? "succeeded" : "failed") << std::endl;

        // Test get function
        std::cout << std::endl;
        std::cout << "------------------------------Test get function--------------------" << std::endl;
        std::cout << "----------------------------------list.get(i)--------------------------------------" << std::endl;
        std::cout << std::endl;
        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Element at index " << i << ": " << list.get(i) << std::endl;
        }

        // Test invalid index for get
        std::cout << std::endl;
        std::cout << "------------------------------Test invalid index for get--------------------" << std::endl;
        std::cout << "---------------------------list.get(-1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            std::cout << "Element at index -1: " << list.get(-1) << std::endl;
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test add at valid index
        std::cout << std::endl;
        std::cout << "------------------------------Test add at valid index--------------------" << std::endl;
        std::cout << "---------------------------list.add(1,1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.add(1, 1);
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << list.get(i) << " ";
        }
        std::cout << std::endl;

        // Test add at invalid index
        std::cout << std::endl;
        std::cout << "------------------------------Test add at invalid index--------------------" << std::endl;
        std::cout << "---------------------------list.add(-1, 3)--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            list.add(-1, 3);
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test remove at valid index
        std::cout << std::endl;
        std::cout << "------------------------------Test remove at valid index--------------------" << std::endl;
        std::cout << "---------------------------list.removeIndex(1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.removeIndex(1);
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << list.get(i) << " ";
        }
        std::cout << std::endl;

        // Test remove at invalid index
        std::cout << std::endl;
        std::cout << "------------------------------Test remove at invalid index--------------------" << std::endl;
        std::cout << "---------------------------list.removeIndex(10)--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            list.removeIndex(10);
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test indexOf function
        std::cout << std::endl;
        std::cout << "------------------------------Test indexOf function--------------------" << std::endl;
        std::cout << "---------------------------list.indexOf(2)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Index of 2: " << list.indexOf(2) << std::endl;
        std::cout << std::endl;
        std::cout << "---------------------------list.indexOf(10)--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Index of 10: " << list.indexOf(10) << std::endl;

        // Test clear function and isEmpty function when the list is empty
        std::cout << std::endl;
        std::cout << "-----------------Test clear function and isEmpty function when the list is empty-----------" << std::endl;
        std::cout << "---------------------------list.clear()--------------------------------------" << std::endl;
        std::cout << "---------------------------list.isEmpty()--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.clear();
        std::cout << "Is the list empty? " << (list.isEmpty() ? "true" : "false") << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
}

void test_list1(List<Person>& list)
{
    try
    {
        // Test size function
        std::cout << std::endl;
        std::cout << "---------------------Test size function--------------------------------" << std::endl;
        std::cout << "----------------------list.size()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "List size: " << list.size() << std::endl;

        // Test add function
        std::cout << std::endl;
        std::cout << "---------------------Test add function-----------------------------------" << std::endl;
        std::cout << "-----list.add(Person(''A'',0))  list.add(Person(''B'',1))  list.add(Person(''C'',2))  list.add(Person(''D'',3))  list.add(Person(''E'',4))-----" << std::endl;
        std::cout << std::endl;
        std::string nameSeed = "ABCDE";
        for (int i = 0; i < 5; i++)
        {
            std::string name;
            name = nameSeed[i];
            Person p(name, i);
            list.add(p);
        }
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Name: " << list.get(i).m_Name << " Id: " << list.get(i).m_Id << std::endl;
        }
        std::cout << std::endl;

        // Test size function
        std::cout << std::endl;
        std::cout << "---------------------Test size function--------------------------------" << std::endl;
        std::cout << "----------------------list.size()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "List size: " << list.size() << std::endl;

        // Test isEmpty function when the list is not empty
        std::cout << std::endl;
        std::cout << "--------------Test isEmpty function when the list is not empty----------" << std::endl;
        std::cout << "----------------------list.isEmpty()--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is the list empty? " << (list.isEmpty() ? "true" : "false") << std::endl;

        // Test contains function
        std::cout << std::endl;
        std::cout << "------------------------------Test contains function--------------------" << std::endl;
        std::cout << "---------------------------list.contains(Person(''B'',1))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is Person(''B'',1) contain in the list? " << (list.contains(Person("B", 1)) ? "true" : "false") << std::endl;
        std::cout << std::endl;
        std::cout << "---------------------------list.contains(Person(''B'',-1))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Is Person(''B'',-1) contain in the list? " << (list.contains(Person("B", -1)) ? "true" : "false") << std::endl;

        // Test remove function
        std::cout << std::endl;
        std::cout << "------------------------------Test remove function--------------------" << std::endl;
        std::cout << "---------------------------list.remove(Person(''B'',1))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "remove Person(''B'',1): " << (list.remove(Person("B", 1)) ? "succeeded" : "failed") << std::endl;
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Name: " << list.get(i).m_Name << " Id: " << list.get(i).m_Id << std::endl;
        }
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "---------------------------list.remove(Person(''B'',1))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "remove Person(''B'',1): " << (list.remove(Person("B", 1)) ? "succeeded" : "failed") << std::endl;

        // Test get function
        std::cout << std::endl;
        std::cout << "------------------------------Test get function--------------------" << std::endl;
        std::cout << "----------------------------------list.get(i)--------------------------------------" << std::endl;
        std::cout << std::endl;
        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Element at index " << i << ": " << " Name: " << list.get(i).m_Name << " Id: " << list.get(i).m_Id << std::endl;
        }

        // Test invalid index for get
        std::cout << std::endl;
        std::cout << "------------------------------Test invalid index for get--------------------" << std::endl;
        std::cout << "---------------------------list.get(-1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            std::cout << "Element at index -1: " << " Name: " << list.get(-1).m_Name << " Id: " << list.get(-1).m_Id << std::endl;
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test add at valid index
        std::cout << std::endl;
        std::cout << "------------------------------Test add at valid index--------------------" << std::endl;
        std::cout << "---------------------------list.add(1,Person(''B'',1))--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.add(1, Person("B", 1));
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Name: " << list.get(i).m_Name << " Ige: " << list.get(i).m_Id << std::endl;
        }
        std::cout << std::endl;

        // Test add at invalid index
        std::cout << std::endl;
        std::cout << "------------------------------Test add at invalid index--------------------" << std::endl;
        std::cout << "---------------------------list.add(-1, Person(''X'',10))--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            list.add(-1, Person("X", 10));
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test remove at valid index
        std::cout << std::endl;
        std::cout << "------------------------------Test remove at valid index--------------------" << std::endl;
        std::cout << "---------------------------list.removeIndex(1)--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.removeIndex(1);
        std::cout << "Now the elements in list are:" << std::endl;

        for (int i = 0; i < list.size(); ++i)
        {
            std::cout << "Name: " << list.get(i).m_Name << " Id: " << list.get(i).m_Id << std::endl;
        }
        std::cout << std::endl;

        // Test remove at invalid index
        std::cout << std::endl;
        std::cout << "------------------------------Test remove at invalid index--------------------" << std::endl;
        std::cout << "---------------------------list.removeIndex(10)--------------------------------------" << std::endl;
        std::cout << std::endl;
        try
        {
            list.removeIndex(10);
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Test indexOf function
        std::cout << std::endl;
        std::cout << "------------------------------Test indexOf function--------------------" << std::endl;
        std::cout << "---------------------------list.indexOf(Person(''C'',2))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Index of Person(''C'',2): " << list.indexOf(Person("C", 2)) << std::endl;
        std::cout << std::endl;
        std::cout << "---------------------------list.indexOf(Person(''X'',10))--------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Index of Person(''X'',10): " << list.indexOf(Person("X", 10)) << std::endl;

        // Test clear function and isEmpty function when the list is empty
        std::cout << std::endl;
        std::cout << "-----------------Test clear function and isEmpty function when the list is empty-----------" << std::endl;
        std::cout << "---------------------------list.clear()--------------------------------------" << std::endl;
        std::cout << "---------------------------list.isEmpty()--------------------------------------" << std::endl;
        std::cout << std::endl;
        list.clear();
        std::cout << "Is the list empty? " << (list.isEmpty() ? "true" : "false") << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
}

int main()
{
    // Insert your test code here.
    // You can use multiple functions similar to the example provided.
    // Thanks to inheritance, these functions can work with both ArrayList<T> and LinkedList<T>!

    // e.g.,
    std::cout<<"--------------------------Test built-in data types------------"<<std::endl;
    std::cout<<std::endl;
    std::cout << "----------------------------ArrayList<int>-----------------" << std::endl;
    ArrayList<int> list1;
    test_list0(list1);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "---------------------Test next contain------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------------------ArrayList<double>-----------------" << std::endl;
    ArrayList<double> list2;
    test_list0(list2);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "---------------------Test next contain------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------------------Linkedlist<int>-----------------" << std::endl;
    Linkedlist<int> list3;
    test_list0(list3);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "---------------------Test next contain------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------------------Linkedlist<double>-----------------" << std::endl;
    Linkedlist<double> list4;
    test_list0(list4);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "---------------------Test next contain------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout<<"--------------------------Test user-defined data types------------"<<std::endl;
    std::cout<<std::endl;

    std::cout << "----------------------------ArrayList<Person>-----------------" << std::endl;
    ArrayList<Person> list5;
    test_list1(list5);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "---------------------Test next contain------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------------------Linkedlist<Person>-----------------" << std::endl;
    Linkedlist<Person> list6;
    test_list1(list6);


    // ...

    return 0;
}
