/*
在multimap中，同一个键关联的元素必然相邻存放。基于这个事实，就可以将某个键对应的值一一输出。

1、使用find和count函数。count函数求出某个键出现的次数，find函数返回一个迭代器，指向第一个拥有正在查找的键的实例。

2、使用lower_bound(key)和upper_bound(key)

      lower_bound(key)返回一个迭代器，指向键不小于k的第一个元素
      upper_bound(key)返回一个迭代器，指向键大于k的第一个元素
3、使用equal_range(key)

      返回一个迭代器的pair对象，first成员等价于lower_bound(key)，second成员等价于upper_bound(key)
*/

#include <iostream>
#include <string>
#include <map>
 
using namespace std;

void printMultimap(multimap<string,int> &m)
{
	for(multimap<string,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<"--"<<it->second<<endl;
	}
	cout<<endl;
	cout<<"------------"<<endl;
}

void test01()
{
	multimap<string,int> m_map;
 
	string s("中国");
	string s1("美国");
 
	m_map.insert(make_pair(s,50));
	m_map.insert(make_pair(s,55));
	m_map.insert(make_pair(s,60));
	m_map.insert(make_pair(s1,30));
	m_map.insert(make_pair(s1,20));
	m_map.insert(make_pair(s1,10));

	printMultimap(m_map);
 
	multimap<string,int>::iterator m;
	multimap<string,int>::iterator beg,end;	
	
	//方式1
	m = m_map.find(s);
 
	for(size_t k = 0;k != m_map.count(s);k++,m++)
		cout<<m->first<<"--"<<m->second<<endl;
	cout<<endl;
 
	//方式2
	beg = m_map.lower_bound(s1);
	end = m_map.upper_bound(s1);

	cout<<"m_map.lower_bound(s1)"<<beg->first<<"--"<<beg->second<<endl;
	cout<<"m_map.upper_bound(s1)"<<end->first<<"--"<<end->second<<endl;
	cout<<endl;
 
	for(m = beg;m != end;m++)
		cout<<m->first<<"--"<<m->second<<endl;
	cout<<endl;
 
	//方式3
	beg = m_map.equal_range(s).first;
	end = m_map.equal_range(s).second;

	cout<<"m_map.lower_bound(s1)"<<beg->first<<"--"<<beg->second<<endl;
	cout<<"m_map.upper_bound(s1)"<<end->first<<"--"<<end->second<<endl;
	cout<<endl;
 
	for(m = beg;m != end;m++)
		cout<<m->first<<"--"<<m->second<<endl;
	cout<<endl;
}

void test02()
{
	multimap<string,int> m_map;

	string s="中国";
	string s1="美国";

	m_map.insert(make_pair(s,50));
	m_map.insert(make_pair(s,55));
	m_map.insert(make_pair(s,60));
	m_map.insert(make_pair(s1,30));
	m_map.insert(make_pair(s1,20));
	m_map.insert(make_pair(s1,10));

	multimap<string,int>::iterator m;
	multimap<string,int>::iterator beg,end;

	m=m_map.find(s);

	//方式1
	for(size_t k=0;k<m_map.count(s);k++,m++)
	{
		cout<<m->first<<"--"<<m->second<<endl;
	}
	cout<<endl;

	//方式2
	beg=m_map.lower_bound(s);
	end=m_map.upper_bound(s);

	for(m=beg;m!=end;m++)
	{
		cout<<m->first<<"--"<<m->second<<endl;
	}
	cout<<endl;

	//方式3
	beg=m_map.equal_range(s).first;
	end=m_map.equal_range(s).second;

	for(m=beg;m!=end;m++)
	{
		cout<<m->first<<"--"<<m->second<<endl;
	}
	cout<<endl;
}
 
 
int main()
{
	//test01();
	test02();
	return 0;
}
 