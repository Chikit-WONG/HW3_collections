#include<iostream>
#include<vector>
using namespace std;

void erase(vector<double> &v, double low, double high) {
    for (int i = 0; i < v.size(); ) {
        if (low <= v[i] && v[i] <= high) {
            v.erase(v.begin() + i);
        } else {
            i++;
        }
    }
    
    for (double num : v) {
        cout << num << " " << endl;
    }
}

int main() {
    vector<double> a = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    erase(a, 2, 3);
    return 0;
}