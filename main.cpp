#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "YES";
    // Kiểm tra số nguyên tố
    if (n <= 1)
        ans = "NO";
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
}