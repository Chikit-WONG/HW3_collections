// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// string add(string a, string b) {
//     string res;
//     int carry = 0;
//     for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry; i--, j--) {
//         int x = i >= 0 ? a[i] - '0' : 0;
//         int y = j >= 0 ? b[j] - '0' : 0;
//         int sum = x + y + carry;
//         res.push_back(sum % 10 + '0');
//         carry = sum / 10;
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }

// int main() {
//     string a, b;
//     cin >> a >> b;
//     string c = add(a, b);
//     cout << c << endl; 
//     return 0;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string add(string &a,string &b)
{
    string res;
    int carry=0;
    for(int i=a.size()-1,j=a.size()-1;i>=0||j>=0||carry;i--,j--)
    {
        int x=(i>=0)?(a[i]-'0'):0;
        int y=(j>=0)?(b[i]-'0'):0;
        int sum=x+y+carry;
        res.push_back(sum%10+'0');
        carry=sum/10;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    string a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<c<<endl;
    return 0;
}

