// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void nhapxuat() {
	double n,max1,max,min;
	cout << "nhap so thuc n1 = "; cin >> n;
	max = 0;
	min = n;
	max1 = n;
	int i = 1;
	if (n != 0) {
		while (n != 0) {
			i = i + 1;
			cout << "nhap so thuc n" << i << " = "; cin >> n;
			if ((n > 0) && (n > max)) {
				max = n;
			}
			if (n > max1) {
				max1 = n;
			}
			if ((n + 123.45) * (n + 123.45) < (min + 123.45)*(min + 123.45)) {
				min = n;
			}
		}
	}
	cout << "so thuc lon nhat la " << max1<<endl;
	if (max <= 0) {
		cout << "khong co so thuc duong lon nhat " << endl;
	}
	else {
		cout << "so thuc duong lon nhat la "<<max << endl;
	}
	cout << "so gan voi 123.45 la " << min << endl;
}
int main()
{
	nhapxuat();
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
