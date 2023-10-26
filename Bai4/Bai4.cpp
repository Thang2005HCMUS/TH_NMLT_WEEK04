// Bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool sum_multi(unsigned int n) {
    int sum = 0;
    int multi = 1;
    if (n ==0) {
        return false;
    }
    while (n != 0) {
        sum = sum + n % 10;
        multi = multi*( n % 10);
        n = n / 10;
        if (multi == 0) {
            return false;
        }
    }if (multi == sum) {
        return true;
    }
    return false;
    
}
void input_output() {
    int n;
    cout << "nhap so nguyen duong n = "; cin >> n;
    while (n != 0) {
        if (sum_multi(n)) {
            cout << "n co tong cac chu so bang tich cac chu so " << endl;
        }
        else {
            cout<<"n co tong cac chu so khong bang tich cac chu so " << endl;
        }
        cout << "nhap so nguyen duong n = "; cin >> n;
    }
    cout << "chuong trinh ket thuc ";
}
int main()
{
    input_output();
    
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
