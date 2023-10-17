#include <iostream>
#include <vector>
using namespace std;

const int MAX = 2000000;

int main() {
    int t = 1;
    for (int a0 = 0; a0 < t; a0++) {
        vector<bool> isPrime(MAX, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < MAX; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < MAX; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        long long sum = 0;
        for (int i = 2; i < MAX; i++) {
            if (isPrime[i]) {
                sum += i;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
