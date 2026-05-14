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
    double len1 = 0, len2 = 0;
    for (double x : v1) len1 += x * x;
    for (double x : v2) len2 += x * x;
    len1 = sqrt(len1);
    len2 = sqrt(len2);
    if (len1 == 0 || len2 == 0) {
        cout << "Ошибка: один из векторов нулевой, угол не определён!\n";
        return 1;
    }
    for (double x : v1) v1_norm.push_back(x / len1);
    for (double x : v2) v2_norm.push_back(x / len2);
    cout << "Нормализованный вектор 1: ";
    for (double x : v1_norm) cout << x << " ";
    cout << "\nНормализованный вектор 2: ";
    for (double x : v2_norm) cout << x << " ";
    cout << endl;
    double dot_product = 0;
    for (int i = 0; i < n; i++) {
        dot_product += v1_norm[i] * v2_norm[i];
    }
    if (dot_product > 1) dot_product = 1;
    if (dot_product < -1) dot_product = -1;
    double angle_rad = acos(dot_product); 
    double angle_deg = angle_rad * 180.0 / M_PI; 