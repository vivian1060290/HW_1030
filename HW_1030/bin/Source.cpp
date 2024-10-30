#include <iostream>
#include <algorithm> 
//使用size *= 2擴展數組大小的
// 好處是減少了每次倍數的擴展次數，有利於提高程式效率。
// 不會浪費時間，因為不用移動資料。
//雖然它不必要地使用了一點空間，但它避免重新分配空間來確保記憶體的穩定性。
using namespace std;

// 輸出陣列內容的函數
void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << '\n';
}

// 倍增陣列大小的函數
void change_size(int*& arr, int& size) {
    int new_size = size * 2;  // 將新大小設為原來的兩倍
    int* new_arr = new int[new_size];
    copy(arr, arr + size, new_arr);  // 將舊陣列的值複製到新陣列中

    delete[] arr;  // 釋放舊的陣列記憶體
    arr = new_arr; // 更新指標指向新陣列
    size = new_size;  // 更新大小變數
}

int main() {
    int size = 3;
    int* arr = new int[size];

    // 插入初始元素
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    print_arr(arr, size);  // 輸出初始陣列

    // 執行倍增擴充
    change_size(arr, size);
    print_arr(arr, size);  // 擴充後的陣列

    // 繼續插入新元素來測試擴充效果
    for (int i = 3; i < size; i++) {
        arr[i] = i + 1;
    }
    print_arr(arr, size);

    delete[] arr;  // 釋放最終陣列記憶體
    return 0;
}
