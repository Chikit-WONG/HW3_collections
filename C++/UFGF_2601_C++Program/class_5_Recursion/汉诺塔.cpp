#include <iostream>
using namespace std;
void TowersOfHanoi( char A, char B, char C,int n)
{
    if (n > 0)
    {
        TowersOfHanoi( A, C, B,n-1);
        cout <<"Move disk "<<n<<" "<< A << " -> " << C << endl;
        TowersOfHanoi( B, A, C,n-1);
    }
}

int main()
{
    TowersOfHanoi('A', 'B', 'C',3);
    return 0;
}