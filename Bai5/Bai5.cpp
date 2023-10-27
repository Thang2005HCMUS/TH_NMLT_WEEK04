// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double power3(double n) {
    return n * n * n;
}
double abs_(double a) {
    if (a >= 0) {
        return a;
    }return -a;
}
double sqrt_3(double n) {
    double left = (- abs_(n) - 2) / 3;
    double right = -left;
    double mid;
    while (right - left > 1/(1e9)){
        mid = (left + right) / 2;
            if((power3(left)-n)*(power3(mid)-n)<0){
                right = mid;

            }
            else {
                left = mid;
            }
    }
    return (left + right) / 2;
}
int main()
{
    double a;
    cout << "nhap so thuc a = "; cin >> a;
    cout << "can bac 3 cua "<<a<<" = " << sqrt_3(a) << endl;
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
