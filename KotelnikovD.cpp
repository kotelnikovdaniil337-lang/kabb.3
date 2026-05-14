#include <iostream>
#include <vector>
#include <cmath>
#include <random>
using namespace std;

int main() {
    int n, choice;
    vector<double> arr, filtered;
    cout << "=== Расчёт СКО и фильтрация массива ===\n";
    cout << "1 — Ручной ввод\n2 — Случайная генерация\nВыберите: ";
    cin >> choice;
    cout << "Размер массива: ";
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ошибка! Введите положительное число: ";
    }