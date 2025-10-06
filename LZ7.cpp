#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 3; // ��������� ������� 3x3
    int A[n][n], B[n][n], C[n][n]; // �� ����� ������� �� ������� ����

    cout << "������ �������� ����� ������� A (3x3):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\n������ �������� ����� ������� B (3x3):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // ���������� ���� �������� ���� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\n������� ���� C = A + B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
