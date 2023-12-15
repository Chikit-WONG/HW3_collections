#include<iostream>
using namespace std;
int main()
{
    enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
FRIDAY, SATURDAY, SUNDAY };
Weekday lectureDay = TUESDAY;
std::cout << lectureDay << "\n";

system("pause");
return 0;
}