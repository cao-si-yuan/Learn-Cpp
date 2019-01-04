// C0-2题目描述
// 打印 n 阶实心菱形
//
// 输入描述
// 输入一个整数n，n<=10
//
// 输出描述
// 输出 n 阶实心菱形 ， 占 2*n-1 行
//
// 样例输入
// 3
// 样例输出
//   *
//  ***
// *****
//  ***
//   *

#include <iostream>
using namespace std;

void printSpace(int n) {
    for (int i = 0; i < n; i++) {
        cout << ' ';
    }
}

void printStar(int n) {
    for (int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << endl;
}

void diamond() {
    int input;
    do {
        cin >> input;
    } while (input > 10);

    //上半部分
    for (int i = 0; i < input; i++) {
        int star = 2 * (i + 1) - 1;
        int space = input - i - 1;
        printSpace(space);
        printStar(star);
    }

    //下半部分
    for (int i = 0; i < input - 1; i++) {
        int space =  i + 1;
        int star = 2 * (input - i - 2) + 1;
        printSpace(space);
        printStar(star);
    }
}

int main() {
    diamond();
}
