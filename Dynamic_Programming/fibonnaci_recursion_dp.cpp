#include<iostream>
#include<vector>
using namespace std;
int fib(int n, vector<int>& dp) {
    if (n <= 1) {
        return n;
    }
    if (dp[n] != -1) {// Check if already computed
        return dp[n];
    }
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);// Store the computed value
    return dp[n];
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> dp(n + 1, -1);
    int result = fib(n, dp);// Call the function
    cout << "Fibonacci of " << n << " is " << result << endl;
    return 0;
}
//what happens using DP here is that we store the results of each Fibonacci calculation in the dp array. When we need to calculate Fibonacci of a number that has already been computed, we simply retrieve the value from the dp array instead of recalculating it. This significantly reduces the number of recursive calls and improves efficiency, especially for larger values of n.