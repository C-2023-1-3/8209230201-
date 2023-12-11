//(3) 主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
// 设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。


#include <iostream>
using namespace std;
void bubblesort(int* arr, int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Elements of the array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    bubblesort(arr, size);

    cout << "Sorted array using pointers: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}