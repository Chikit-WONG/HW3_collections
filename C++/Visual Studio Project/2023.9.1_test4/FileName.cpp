#include<iostream>;
#include<limits>;
using namespace std;
int main()
{

	cout <<"Int Range:" << numeric_limits<int>::min() << "/"
		<< numeric_limits<int>::max() << '\n';
	cout << "Size of int:" << sizeof(int) << '\n';
	return 0;


}