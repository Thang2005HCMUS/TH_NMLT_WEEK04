// Bai10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long Fibonanci_number(int n) {
    if (n <= 1) {
        return 1;
    }
    long long F_n = 1;
    long long F_n1 = 1;
    long long k;
    for (int i = 2; i <= n; i++) {
        k = F_n;
        F_n = F_n1 + F_n;
        F_n1 = k;
    }
    return F_n;
}
int main()
{
    int n;
    cout << "nhap so tu nhien n = "; cin >> n;
    cout << "so Fibonanci thu " << n << " la " << Fibonanci_number(n);
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
