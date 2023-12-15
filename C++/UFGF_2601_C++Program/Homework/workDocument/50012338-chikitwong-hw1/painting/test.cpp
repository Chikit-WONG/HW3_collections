#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cout << "请输入两个数字：";
    cin >> a >> b;
    cout << "输入的数字是：" << setw(5) << a << " " << setw(5) << b << endl;
    return 0;
}