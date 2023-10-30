#include <ctime>   
#include <iostream>  
#include <Windows.h>
#include<conio.h>
using namespace std;

int main() {
	// current date/time based on current system
	int second_user;
	cout << "nhap so giay "; cin >> second_user;
	cout << "nhap ESC de thoat " << endl;
	for (int i = 1; i <= second_user; i++) {

		time_t now = time(0);

		tm* ltm = localtime(&now);

		// print various components of tm structure.
		cout << "Time: " << ltm->tm_hour << ":";
		cout << ltm->tm_min << ":";
		cout << ltm->tm_sec << endl;
		if (_kbhit()) {
			char COMMAND = _getch();
			if (COMMAND == 27) break;

		}if (ltm->tm_sec == 0) {
			Beep(500, 500);
			Sleep(500);
		}
		else {
			Sleep(1000);
		}


	}
}
