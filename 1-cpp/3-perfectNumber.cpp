// C1-3完美数
// 题目描述
// 我们定义完美数为一个正整数，其值等于所有因子(不包含其本身)之和。
//
// 给定一个整数，判断是否为完美数
//
// 输入描述
// 输入一个整数c, 0 < c <= 10000;
//
//
// 输出描述
// 输出为一行, 如果是完美数，输出True; 否则输出False.
//
// 样例输入
// 28
// 17
//
// 样例输出
// True
// False

#include <iostream>
using namespace std;

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int input;
    while (cin >> input) {
        if (isPerfectNumber(input)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
}
