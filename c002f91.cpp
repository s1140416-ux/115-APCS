#include <iostream>
using namespace std;

int f91(int n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    } else {
        return n - 10;
    }
}

int main() {
    // 加速輸入輸出，避免 25 萬筆測資超時
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n != 0) {
        cout << "f91(" << n << ") = " << f91(n) << "\n";
    }
    return 0;
}
