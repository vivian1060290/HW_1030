#include <iostream>
using namespace std;

int main() {
    int initialSize = 1;  // 初始數列大小
    int increment = 2;    // 每回合增加的元素數量

    // 進行五回合的增長
    for (int round = 1; round <= 5; ++round) {
        // 計算當前回合的數列大小
        int newSize = initialSize + round * increment;

        // 動態分配陣列以儲存數列
        int* sequence = new int[newSize];

        // 填充數列，從1開始
        for (int i = 0; i < newSize; ++i) {
            sequence[i] = i + 1; // 將數列填入1, 2, 3, ...
        }

        // 輸出當前回合的數列
        cout << "Round " << round << ": ";
        for (int i = 0; i < newSize; ++i) {
            cout << sequence[i] << " "; // 輸出數列中的每個元素
        }
        cout << endl; // 換行

        // 釋放動態分配的記憶體，防止記憶體泄漏
        delete[] sequence;
    }

    return 0;
}
