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