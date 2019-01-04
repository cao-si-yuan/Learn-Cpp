// C0-0简单题目
// 题目描述
// 任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值
//
// 输入描述
// 输入一个整数n，代表接下来输入整数个数，n<=100,接着输入n个整数，整数用int表示即可。
//
// 输出描述
// 输出整数序列的和、最小值、最大值。用空格隔开，占一行
//
// 样例输入
// 2
// 1 2
// 样例输出
// 3 1 2

#include <iostream>
using namespace std;

void sumMinMax(int n) {
    int input;
    cin >> input;
    int sum = input;
    int min = input;
    int max = input;
    for (int i = 0; i < n - 1; i++) {
        cin >> input;
        sum += input;
        if (min > input) {
            min = input;
        };
        if (max < input) {
            max = input;
        };
    };

    cout << sum << ' ' << min << ' ' << max << endl;
}

int main() {
    int n;
    do {
        cin >> n;
    } while (n > 100 || n < 0);

    sumMinMax(n);
}
