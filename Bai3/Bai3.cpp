// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void lietke(unsigned int n) {
	int p;
	int L = 0;
	if (n % 50000 != 0) {
		cout << "khong the chi tra duoc" << endl;
	}
	else
	{
		for (int i = 0; 500000 * i <= n; i++) {
			for (int j = 0; 200000 * j <= n - 500000 * i; j++) {
				for (int k = 0; 100000 * k <= n - 500000 * i - 200000 * j; k++) {
					p = (n - 500000 * i - 200000 * j - 100000 * k) / 50000;
					cout << i << " to 500k ";
					cout << j << " to 200k ";
					cout << k << " to 100k ";
					cout << p << " to 50k " << endl;
					L = L + 1;
				}
			}
		}
	}
}

int main()
{
	unsigned int n;
	cout << "nhap so tien n = "; cin >> n;
	lietke(n);
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
