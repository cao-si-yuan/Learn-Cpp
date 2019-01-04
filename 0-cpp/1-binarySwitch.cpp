// C0-1进制转换  
// 题目描述
// 已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。
//
// 输入描述
// 输入一个二进制整数n，其长度不大于10
//
// 输出描述
// 输出转换后的十进制数， 占一行
//
// 样例输入
// 110
//
// 样例输出
// 6

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

//c++里没有乘方运算，所以只有自己实现了
int pow(int n, int m) {
    int result = 1;
    for (int i = 0; i < m; i++) {
        result = result * n;
    }
    return result;
}

int binarySwitch() {
    int input;
    int sum = 0;
    cin >> input;
    int len = lengthOfNumber(input);
    for (int i = 0; i < len; i++) {
        int index = pow(2, i);
        int currentDigit = input % 10;
        int current = currentDigit * index;
        sum  = sum + current;
        input = input / 10;
    }
    return sum;
}

int main() {
    cout << binarySwitch() << endl;
}
