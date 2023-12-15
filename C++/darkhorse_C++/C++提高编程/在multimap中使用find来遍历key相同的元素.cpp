/*
��multimap�У�ͬһ����������Ԫ�ر�Ȼ���ڴ�š����������ʵ���Ϳ��Խ�ĳ������Ӧ��ֵһһ�����

1��ʹ��find��count������count�������ĳ�������ֵĴ�����find��������һ����������ָ���һ��ӵ�����ڲ��ҵļ���ʵ����

2��ʹ��lower_bound(key)��upper_bound(key)

      lower_bound(key)����һ����������ָ�����С��k�ĵ�һ��Ԫ��
      upper_bound(key)����һ����������ָ�������k�ĵ�һ��Ԫ��
3��ʹ��equal_range(key)

      ����һ����������pair����first��Ա�ȼ���lower_bound(key)��second��Ա�ȼ���upper_bound(key)
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
 
	string s("�й�");
	string s1("����");
 
	m_map.insert(make_pair(s,50));
	m_map.insert(make_pair(s,55));
	m_map.insert(make_pair(s,60));
	m_map.insert(make_pair(s1,30));
	m_map.insert(make_pair(s1,20));
	m_map.insert(make_pair(s1,10));

	printMultimap(m_map);
 
	multimap<string,int>::iterator m;
	multimap<string,int>::iterator beg,end;	
	
	//��ʽ1
	m = m_map.find(s);
 
	for(size_t k = 0;k != m_map.count(s);k++,m++)
		cout<<m->first<<"--"<<m->second<<endl;
	cout<<endl;
 
	//��ʽ2
	beg = m_map.lower_bound(s1);
	end = m_map.upper_bound(s1);

	cout<<"m_map.lower_bound(s1)"<<beg->first<<"--"<<beg->second<<endl;
	cout<<"m_map.upper_bound(s1)"<<end->first<<"--"<<end->second<<endl;
	cout<<endl;
 
	for(m = beg;m != end;m++)
		cout<<m->first<<"--"<<m->second<<endl;
	cout<<endl;
 
	//��ʽ3
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

	string s="�й�";
	string s1="����";

	m_map.insert(make_pair(s,50));
	m_map.insert(make_pair(s,55));
	m_map.insert(make_pair(s,60));
	m_map.insert(make_pair(s1,30));
	m_map.insert(make_pair(s1,20));
	m_map.insert(make_pair(s1,10));

	multimap<string,int>::iterator m;
	multimap<string,int>::iterator beg,end;

	m=m_map.find(s);

	//��ʽ1
	for(size_t k=0;k<m_map.count(s);k++,m++)
	{
		cout<<m->first<<"--"<<m->second<<endl;
	}
	cout<<endl;

	//��ʽ2
	beg=m_map.lower_bound(s);
	end=m_map.upper_bound(s);

	for(m=beg;m!=end;m++)
	{
		cout<<m->first<<"--"<<m->second<<endl;
	}
	cout<<endl;

	//��ʽ3
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
 