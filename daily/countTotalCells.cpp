#include <iostream>
#include <cmath>
using namespace std;

class poorSln {
    public:
        long long coloredCells(int n) {
            if (n == 0) return 0;
            long long val = 1;
            for (int i = 1; i < n; i++) val += i*4;
            return val;
        }
};

class quickSln {
    public:
        //this solution uses the integral of 4n, which gives 2x^2 + c (1), with an increasing offset to the actual answers by 2n
        //Thus we just add a -2n to the solution to get the correct result.
        long long coloredCells(int n) {
            return 2*pow(n, 2) - 2*n + 1;
        }
};

int main() {
    int n = 3;
    poorSln sol;
    cout << sol.coloredCells(n) << endl;
    return 0;
}