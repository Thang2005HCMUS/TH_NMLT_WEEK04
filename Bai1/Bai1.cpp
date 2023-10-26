// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double sum_number_(int n) {
    double S = 0;
    if (n < 1) {
        return S;
    }
    for (int i = 1; i <= n; i++) {
        S = S + 1.0 / i;
    }return S;
}
double sum_number2(int n) {
    double S = 0;
    double k = 1;
    for (int i = 1; i <= 2 * n; i++) {
        k = k * (i + 1) / (i * i);
        S = S + k;
    }return S;
}
long long combinational(int n, int k) {
    if (n < k) {
        return 0;
    }
    int a = 1;
    int b = 1;
    for (int i = k + 1; i <= n; i++) {
        a = a * i;
        b = b * (i - k);
    }return a / b;
}
void nhap_xuat() {
    int n;
    int k;
    cout << "nhap so nguyen n cho cau a "; cin >> n;
    cout << "S1 = " << sum_number_(n) << endl;
    cout << "nhap so nguyen n cho cau b "; cin >> n;
    cout << "S2 = " << sum_number2(n)<<endl;
    cout << "nhap so nguyen n cho cau c "; cin >> n;
    cout << "nhap so nguyen k cho cau c "; cin >> k;
    while (n < k) {
        cout << "ban da nhap sai, vui long nhap lai " << endl;
        cout << "nhap so nguyen n cho cau c "; cin >> n;
        cout << "nhap so nguyen k cho cau c "; cin >> k;
    }
    cout << "S3 = " << combinational(n, k);
}
int main()
{
    nhap_xuat();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
