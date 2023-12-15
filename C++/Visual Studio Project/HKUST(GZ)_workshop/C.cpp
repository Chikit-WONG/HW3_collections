#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	string a, b;
	int a1, b1,c;
	int a0, b0;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		a0 = a0 + int(a[i]) * pow(10, i);
		

	}

	for (int i = 0; i < b.length(); i++)
	{
		b0 = b0 + int(b[i]) * pow(10, i);


	}
	c = a0 + b0;
	cout << c << endl;



	for (int i = 0; i < a.length(); i++)
	{
		
		if (a[i] ==! '0')
		{
			
			a1 = a1 + int(a[i]) * pow(10, i);
		}
		else
		{
			a1 = a1 + int(a[i]) * pow(10, i + 1);
			i++;
		}
		
		
	}

	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == !'0')
		{

			b1 = b1 + int(b[i]) * pow(10, i);
		}
		else
		{
			b1 = b1 + int(b[i]) * pow(10, i + 1);
			i++;
		}


	}

}