// C0-4数位求和 
// 题目描述
// 有以下操作：给出一个不超过109的正整数，对其各个数位的数字求和，得到一个新的数；接下来对新数的各个数位再求和 ……直到得到的新数和计算前一样为止。
//
// 给出一个数，请计算此操作的计算结果。比如，数 29 的结果为 2 + 9 = 11, 1 + 1 = 2, 2 = 2， 结果为2。
//
// 输入描述
// 输入为一个正整数 n (n ≤ 109)
//
//
// 输出描述
// 输出计算结果
//
//
// 样例输入
// 29
//
// 样例输出
// 2

#include <iostream>
using namespace std;

//利用c++除以10舍弃小数部分这一点，js里就不行
int lengthOfNumber(int n) {
    int i = 0;
    while (n > 0) {
        i = i + 1;
        n = n / 10;
    }
    return i;
}

int sumOfNumber(int n) {
    int sum = 0;
    int len = lengthOfNumber(n);
    for (int i = 0; i < len; i++) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int input;
    cin >> input;
    int sum = sumOfNumber(input);
    while (sum >= 10) {
        sum = sumOfNumber(sum);
    }
    cout << sum << endl;
}
