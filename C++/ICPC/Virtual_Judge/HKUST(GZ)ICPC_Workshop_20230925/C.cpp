#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string a, b,d;
	int a1, b1,c,c2=0;
	int a0, b0;
	cin >> a >> b;

	for (int i = a.length()-1; i >=0; i--)
	{
		a0 = a0 + int(a[i]-48) * pow(10, (a.length()-i-1));
		

	}

	for (int i=b.length()-1; i>=0; i--)
	{
		b0 = b0 + int(b[i]-48) * pow(10, (b.length()-i-1));


	}
	// cout<<"a0="<<a0<<endl;
    // cout<<"b0="<<b0<<endl;
    c = a0 + b0;

	int count = 0;
    for (int i = a.length()-1; i >=0; i--)
    {
        if (a[i] != '0')
        {
            a1 = a1 + int(a[i]-48) * pow(10, count);
            count++;
        }
    }

    count = 0;
    for (int i = b.length()-1; i >=0; i--)
    {
        if (b[i] != '0')
        {
            b1 = b1 + int(b[i]-48) * pow(10, count);
            count++;
        }
    }



    // cout<<"a1="<<a1<<endl;
    // cout<<"b1="<<b1<<endl;
    // cout<<"c="<<c<<endl;
    d=to_string(c);

    count = 0;
    for (int i = d.length()-1; i >=0; i--)
    {
        if (d[i] != '0')
        {
            c2 = c2 + int(d[i]-48) * pow(10, count);
            count++;
        }
    }

// cout<<"c2="<<c2<<endl;
if(a1+b1==c2)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}


    return 0;

}