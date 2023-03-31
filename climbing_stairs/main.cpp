#include <iostream>

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    int first = 1;
    int second = 2;

    for (int i = 3; i <= n; i++) {
        int third = first + second;
        first = second;
        second = third;
    }
    return second;
}

int main() {
    int n = 4;
    int ways = climbStairs(n);
    std::cout << "Number of ways to climb stairs: " << ways << std::endl;
    return 0;
}