#include <iostream>
 #include <limits>
using namespace std;
int main()
{
	cout << "Int Range: "
		<< numeric_limits<int>::min() << " / "
		<< numeric_limits<int>::max() <<endl;
	cout << "Size of int: "
		<< sizeof(int) << endl;
	return 0;
}