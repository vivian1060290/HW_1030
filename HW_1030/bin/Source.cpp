#include <iostream>
using namespace std;

int main() {
    int initialSize = 1;  // ��l�ƦC�j�p
    int increment = 2;    // �C�^�X�W�[�������ƶq

    // �i�椭�^�X���W��
    for (int round = 1; round <= 5; ++round) {
        // �p���e�^�X���ƦC�j�p
        int newSize = initialSize + round * increment;

        // �ʺA���t�}�C�H�x�s�ƦC
        int* sequence = new int[newSize];

        // ��R�ƦC�A�q1�}�l
        for (int i = 0; i < newSize; ++i) {
            sequence[i] = i + 1; // �N�ƦC��J1, 2, 3, ...
        }

        // ��X��e�^�X���ƦC
        cout << "Round " << round << ": ";
        for (int i = 0; i < newSize; ++i) {
            cout << sequence[i] << " "; // ��X�ƦC�����C�Ӥ���
        }
        cout << endl; // ����

        // ����ʺA���t���O����A����O����n�|
        delete[] sequence;
    }

    return 0;
}
