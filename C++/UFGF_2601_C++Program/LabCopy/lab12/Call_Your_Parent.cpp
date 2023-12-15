#include<iostream>
#include<string>
using namespace std;
class Parent{
public:
	string getName() const {return name;};
//private:
	string name="Parent";
};

class Child: public Parent{
public:
	string getChildName() const {return name;};
// private:
	string name="Child";
};

int main(){
	Child Jerry;
	cout << Jerry.getName() << " " << Jerry.getChildName() << Jerry.name << endl;
	return 0;
}