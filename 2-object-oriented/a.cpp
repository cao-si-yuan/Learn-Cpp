#include <iostream>
using namespace std;

int* generateLights(int n) {
    //动态内存分配new操作取得的内存地址返回给主函数是合法有效的
    int* arr = new int();
    for (int i = 0; i < n; i++) {
        arr[i] = false;
    }
    arr[1] = true;
    return arr;
}

void initLights(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = false;
    }
}

int main() {
    int arr[10001];
    initLights(arr, 100001);
}
