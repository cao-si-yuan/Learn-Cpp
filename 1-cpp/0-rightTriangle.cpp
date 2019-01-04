//c1-0直角三角形
// 题目描述
//
// 输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。
//
//
// 输入描述
// 每行输入三个由空格隔开的整数 a, b, c ，表示三角形的 3 条边长
//
// 1 <= a,b ,c <= 10000
//
// 输出描述
// 对于每一行输入，输出True或者False表明是否为直角三角形
//
// 样例输入
// 3 4 5
//
// 样例输出
// True
// 样例输入
// 6 7 8
//
// 样例输出
// False

#include <iostream>
using namespace std;

int smaller(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int smallest(int a, int b, int c) {
    return smaller(smaller(a, b), c);
}

int bigger(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int biggest(int a, int b, int c) {
    return bigger(bigger(a, b), c);
}

int median(int a, int b, int c) {
    int big = biggest(a, b, c);
    if (big == a) {
        return bigger(b, c);
    } else if (big == b) {
        return bigger(a, c);
    } else if (big == c) {
        return bigger(a, b);
    } else {
        return 0;
    }
}

int square(int n) {
    return n * n;
}

bool isRightTriangle(int a, int b, int c) {
    int min = smallest(a, b, c);
    int mid = median(a, b, c);
    int max = biggest(a, b, c);
    if (square(min) + square(mid) == square(max)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a;
    int b;
    int c;
    do {
        cin >> a >> b >> c;
    } while (a < 1 || b < 1 || c > 10000);

    if (isRightTriangle(a, b, c)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
