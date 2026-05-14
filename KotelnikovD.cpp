#include <iostream>
using namespace std;

int main() {
    const int N = 3; // Фиксированный размер матрицы 3x3
    double A[N][N], B[N][N], C[N][N];
     cout << "1 — Ручной ввод, 2 — Готовые матрицы. Выберите: ";
    int choice;
    cin >> choice;

    if (choice == 1) {