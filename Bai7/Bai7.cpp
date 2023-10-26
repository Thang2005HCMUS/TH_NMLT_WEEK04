// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool sum_multi( int n) {
    int sum = 0;
    int multi = 1;
    if (n == 0) {
        return false;
    }
    while (n != 0) {
        sum = sum + n % 10;
        multi = multi * (n % 10);
        n = n / 10;
        if (multi == 0) {
            return false;
        }
    }if (multi == sum) {
        return true;
    }
    return false;

}
void kiemtra(int n) {
    int b = n;
    int giam = 0;
    int tang = 0;
    int c = n % 10;
    n = n / 10;
    if (n == 0) {
        cout << "cac chu so khong tang khong giam " << endl;
    }
    else
    {
        int i = 0;
        while (n != 0) {
            if (n % 10 <= c) {
                tang += 1;
            }
            if (n % 10 >= c) {
                giam += 1;
            }
            c = n % 10;
            n = n / 10;
            i = i + 1;
        }
        if ((tang == i) && (giam == i) || ((tang != i) && (giam != i))) {
            cout << "cac chu so khong tang va khong giam"<<endl;
        }
        else if (tang == i) {
            cout << "cac chu so tang dan " << endl;
        }
        else { cout << "cac chu so giam dan " << endl; }
    }
}
bool prime_number(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }return true;
}
bool perfect_number(int n) {
    if (n % 2 != 0) {
        return false;
    }
    int S = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            S = S + i + n / i;
        }
        if (S > 2 * n) {
            return false;
        }
    }if (S = 2 * n) {
        return true;
    }return false;
}
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
bool check_number(int n) {
    if (reverseDigits(n) == n) {
        return true;
    }return false;
}
void input() {
    int n;
    cout << "nhap so nguyen duong n = "; cin >> n;
    if (sum_multi(n)) {
        cout << "so " << n << " co tong cac chu so bang tich cac chu so " << endl;
    }
    else{
        cout << "so " << n << " khong co tong cac chu so bang tich cac chu so " << endl;
    }
    kiemtra(n);
    if (check_number(n)) {
        cout << n << " la so doi xung " << endl;
    }
    else {
        cout << n << " khong la so doi xung " << endl;
    }
    if (prime_number(n)) {
        cout << n << " la so nguyen to " << endl;
    }
    else {
        cout << n << " khong la so nguyen to" << endl;
    }
    if (perfect_number(n)) {
        cout << n << " la so hoan hao" << endl;
    }
    else {
        cout << n << " khong la so hoan hao" << endl;
    }
}
int main()
{
    input();
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
