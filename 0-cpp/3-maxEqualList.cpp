// C0-3求最长等值序列
// 题目描述
// 给定一个数列A，如果其中有一段（至少含有两个元素）序列里面的元素都相等，则称这段序列为等值序列。我们的任务是求最长的等值序列
//
// 输入描述
// 第一行是数列的长度n，n<=50
//
// 第二行是n个数字
//
// 输出描述
// 输出最长等值序列在原始数列中的起始位置，数列的起始下标为0；
//
// 若有多个最长等值序列，输出第一个最长等值序列的起始位置和终止位置；
//
// 若没有等值序列，输出"No answer."
// 样例输入
// 2
// 1 2
//
// 5
// 1 1 3 1 1
//
// 样例输出
// No answer.

#include <iostream>
using namespace std;

void equalList(int len) {
    int input;
    cin >> input;
    int current = input;
    int length = 1;
    int maxLength = 1;
    int end; //用来记录最长序列的最后一位

    for (int i = 0; i < len - 1; i++) {
        cin >> input;
        if (current == input && i != len - 2) {
            length = length + 1;
        } else {
            if (length > maxLength) {
                if (i == len - 2) {
                    maxLength = length + 1;
                    end = i + 1;
                } else {
                    maxLength = length;
                    end = i;
                }
            }
            length = 1; //这里得初始化成1
        }
        //更新current的值
        current = input;
    }

    int start = end - maxLength + 1;

    if (maxLength == 1) {
        cout << "No answer." << endl;
    } else {
        cout << start << " " << end << endl;
    }
}

int main() {
    int len;
    do{
        cin >> len;
    } while (len > 50 || len < 2);

    equalList(len);
}
