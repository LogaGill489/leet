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

int main() {
    int n = 3;
    poorSln sol;
    cout << sol.coloredCells(n) << endl;
    return 0;
}