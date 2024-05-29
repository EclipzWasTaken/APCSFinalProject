#include <iostream>
#include <cmath>

/**
 * Check if a number is a perfect square
 * 
*/
bool isPerfectSquare(long long x) {
    long long s = static_cast<long long>(sqrt(x));
    return (s * s == x);
}

/**
 * Check if a number is a Fibonacci number
 * if one or both of (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
 * then the number is a Fibonacci number 
*/
bool isFibonacci(long long n) {
    // Check if one or both of (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
    long long x1 = 5 * n * n + 4;
    long long x2 = 5 * n * n - 4;
    return isPerfectSquare(x1) || isPerfectSquare(x2);
}

int main() {
    int t;
    std::cin >> t; // Read number of test cases
    while (t-- > 0) {
        long long num;
        std::cin >> num; // Read each number
        if (isFibonacci(num)) {
            std::cout << "TRUE\n";
        } else {
            std::cout << "FALSE\n";
        }
    }
    return 0;
}
