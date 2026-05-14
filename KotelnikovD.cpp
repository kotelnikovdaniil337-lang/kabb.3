#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    vector<double> v1, v2, v1_norm, v2_norm;
    cout << "=== Расчёт угла между векторами ===\n";
    cout << "Введите размерность векторов: ";
    cin >> n;
    if (n <= 0) {
        cout << "Ошибка: размерность должна быть положительной!\n";
        return 1;
    }
    cout << "Введите " << n << " элементов первого вектора:\n";
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        v1.push_back(x);
    }
    cout << "Введите " << n << " элементов второго вектора:\n";
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        v2.push_back(x);
    }
    cout << "\nИсходный вектор 1: ";
    for (double x : v1) cout << x << " ";
    cout << "\nИсходный вектор 2: ";
    for (double x : v2) cout << x << " ";
    cout << endl;