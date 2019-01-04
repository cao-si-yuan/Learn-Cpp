// C1-2 丑数
// 题目描述
// 只包含因子2,3,5的正整数被称作丑数，比如4,10,12都是丑数，而7,23,111则不是丑数，另外1也不是丑数。请编写一个函数，输入一个整数n，能够判断该整数是否为丑数，如果是，则输出True，否则输出False。
//
// 输入描述
// 每行输入一个正整数 n
//
// 1 <= n<= 1000000
//
// 输出描述
// 对于每一行输入，输出其是否为丑数，是则输出True，否则输出False
//
// 样例输入
// 4
// 7
// 12
// 样例输出
// True
// False
// True

#include <iostream>
using namespace std;

bool isUglyNumber(int n) {
    if (n == 1) {
        return false;
    } else {
        while (n % 2 == 0) {
            n = n / 2;
        };
        while (n % 3 == 0) {
            n = n / 3;
        };
        while (n % 5 == 0) {
            n = n / 5;
        };
        if (n == 1) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int input;
    while (cin >> input) {
        if (isUglyNumber(input)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
}
