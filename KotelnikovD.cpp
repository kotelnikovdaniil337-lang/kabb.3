#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    double A[N][N], B[N][N], C[N][N];
     cout << "1 — Ручной ввод, 2 — Готовые матрицы. Выберите: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
         cout << "Введите матрицу A (9 чисел): ";
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> A[i][j];
        cout << "Введите матрицу B (9 чисел): ";
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> B[i][j];
    } else {
        double testA[N][N] = {{1, 2, 3}, {0, 1, 4}, {5, 6, 0}};
        double testB[N][N] = {{2, 0, 1}, {3, 1, 0}, {1, 2, 1}};
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) {
                A[i][j] = testA[i][j];
                B[i][j] = testB[i][j];
            }
        cout << "Использованы готовые матрицы\n";
    }
    cout << "\nМатрица A:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << "\nМатрица B:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }
     for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
        cout << "\nРезультат A × B:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }