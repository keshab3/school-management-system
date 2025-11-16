#include <iostream>
using namespace std;

int sum(int n) {
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1); 
}

int main() {
    int N = 10;
    cout << "Sum of first " << N << " natural numbers = " << sum(N) << endl;

    return 0;
}
