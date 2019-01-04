// C1-5出现次数最多的数字,说白了就是找众数
// 题目描述
// 给定一串已经从小到大排好顺序的数字，其中有些数字出现了多次，请输出出现次数最多的那个数字。
//
// 如果有两个数字出现的次数一样，那么其中较小的那个。
//
// 输入描述
// 输入一个整数n，表示有n个已经排好顺序的数字，其中(0 < n < 1000).
//
// 接下来n行，每行一个数字。
//
// 输出描述
// 输出为一行，表示出现次数最多的那个数字。
//
//
// 样例输入
// 4
// 1
// 2
// 2
// 3
//
//
// 5
// 1
// 2
// 2
// 3
// 3
//
// 样例输出
// 2
//
// 2

#include <iostream>
using namespace std;

int findMode(int n) {
    int num;
    cin >> num;
    if (n == 1) {
        return num;
    }

    int maxCount = 1;
    int mode = num;
    int count = 1;
    int preNum = num;

    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        if (preNum == num) {
            count = count + 1;
            if (count > maxCount) {
                maxCount = count;
                mode = num;
            }
        } else {
            count = 1;
            preNum = num;
        }
    }
    return mode;
}

int main() {
    int input;
    while (cin >> input) {
        cout << findMode(input) << endl;
    }
}
