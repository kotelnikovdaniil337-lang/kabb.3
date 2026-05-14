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
    if (choice == 1) {
        cout << "Введите " << n << " элементов:\n";
        for (int i = 0; i < n; i++) {
            cout << "Элемент " << i + 1 << ": ";
            while (!(cin >> arr[i])) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Ошибка! Введите число: ";
            }
        }
    } else {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<double> dist(0.0, 100.0);

        for (int i = 0; i < n; i++) {
            arr.push_back(dist(gen));
        }
    }
    cout << "\nИсходный массив:\n";
    for (double x : arr) {
        cout << x << " ";
    }
    cout << endl;
    double sum = 0;
    for (double x : arr) sum += x;
    double mean = sum / n;
    double variance = 0;
    for (double x : arr) {
        variance += (x - mean) * (x - mean);
    }
    variance /= n; 
    double std_dev = sqrt(variance); 
