// C1-4开灯关灯
// 题目描述
// 有n盏灯，编号依次为1,2,3,...,n；初始化时，所有灯都是关闭状态；
//
// 小明第一次将编号为1,2,3,...,n都打开了；第二次将编号为2,4,6,....都关闭了（1~n之间的2的整数倍）；第三次将编号为3,6,9,...的灯进行操作（1~n之间的3的整数倍），若是之前关闭状态则打开，若是打开状态，则关闭；第四次将4,8,12,....的灯进行操作（1~n之间的4的整数倍）。这样操作了n次，问最后亮了几盏灯。
//
// 输入描述
// 第一行输入整数T，表示有T组测试用例；1<=T<=10000
//
// 接下来T行，每行有一个整数n，表示当前测试用例有n盏灯；1<=n<=10000
//
// 提示：总结开灯关灯规律。
//
// 输出描述
// 输出n行，每次测试用例最后亮灯的数目。
//
//
// 样例输入
// 2
// 1
// 5
//
// 样例输出
// 1
// 2

#include <iostream>
using namespace std;

// int main() {
//     bool array[] = {false, true};
//     cout << array[0] << endl;
//     输出是0
// }
// c++里bool array[] 和 int array[]本质是一样的，返回值是0，1（false，true）

void turnStepLight(int arr[], int n, int step) {
    for (int i = step; i <= n; i = i + step) {
        if (arr[i] == false) {
            arr[i] = true;
        } else {
            arr[i] = false;
        }
    }
}

int numOfLightsOn(int arr[], int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        turnStepLight(arr, n, i);
    }

    for (int i = 0; i <=n; i++) {
        if (arr[i] == true) {
            sum = sum + 1;
        }
    }
    return sum;
}

int main() {
    int T;
    int n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        int arr[10001] = {0};
        cout << numOfLightsOn(arr, n) << endl;
    }
}
