#include <iostream>
#include <vector>

std::string getMonotonicTrend(const std::vector<int>& arr, int start, int end) {
    bool increasing = false;
    bool decreasing = false;

    for (int i = start; i < end; i++) {
        if (arr[i] < arr[i + 1]) {
            increasing = true;
        } else if (arr[i] > arr[i + 1]) {
            decreasing = true;
        }

        if (increasing && decreasing) {
            return "UP&DOWN";
        }
    }

    if (increasing) {
        return "UP";
    } else if (decreasing) {
        return "DOWN";
    } else {
        return "UP&DOWN";
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int L, start, end;
        std::cin >> L >> start >> end;

        std::vector<int> arr(L);
        for (int i = 0; i < L; i++) {
            std::cin >> arr[i];
        }

        std::string trend = getMonotonicTrend(arr, start, end);
        std::cout << trend << std::endl;
    }

    return 0;
}