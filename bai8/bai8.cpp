#include <iostream>
#include <cmath>
using namespace std;
void linear_equation(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            cout << "phuong trinh co vo so nghiem" << endl;
        }
        else {
            cout << "phuong trinh vo nghiem " << endl;
        }
    }
    else {
        cout << "phuong trinh co nghiem duy nhat x = " << -b / a;
    }
}

void linear_inequality(double a, double b, bool c) {
    if (c) {
        if (a == 0) {
            if (b <= 0) {
                cout << "bat phuong trinh vo nghiem" << endl;
            }
            else {
                cout << "bat phuong trinh co vo so nghiem" << endl;
            }
        }
        else if (a > 0) {
            cout << "bat phuong trinh co tap nghiem la x > " << -b / a;
        }
        else {
            cout << "bat phuong trinh co tap nghiem la x < " << -b / a;
        }
    }
    else {
        if (a == 0) {
            if (b <= 0) {
                cout << "bat phuong trinh vo nghiem" << endl;
            }
            else {
                cout << "bat phuong trinh co vo so nghiem" << endl;
            }
        }
        else if (a > 0) {
            cout << "bat phuong trinh co tap nghiem la x < " << -b / a;
        }
        else {
            cout << "bat phuong trinh co tap nghiem la x > " << -b / a;
        }
    }
}
void quaradic_equation(double a, double b, double c) {
    if (a == 0) {
        linear_equation(b, c);
    }
    else {
        double Delta = b * b - 4 * a * c;
        if (Delta < 0) {
            cout << "phuong trinh vo nghiem" << endl;
        }
        else if (Delta == 0) {
            cout << "phuong trinh co nghiem duy nhat x = " << -b / (2 * a) << endl;
        }
        else {
            double x1 = (-b + sqrt(Delta)) / (2 * a);
            double x2 = -b / a - x1;
            cout << "phuong trinh co hai nghiem phan biet " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}
void quaradic_inequality(double a, double b, double c, bool d) {
    if (a == 0) {
        linear_inequality(b, c, d);
    }
    else {
        double Delta = b * b - 4 * a * c;
        if (Delta < 0) {
            if (d == (a > 0)) {
                cout << "bat phuong trinh co vo so nghiem" << endl;
            }
            else {
                cout << "bat phuong trinh vo nghiem " << endl;
            }
       }
        else if (Delta == 0) {
            if (d == (a > 0)) {
                cout << "bat phuong trinh co tap nghiem la x # " << -b / (2 * a) << endl;
            }
            else {
                cout << "bat phuong trinh vo nghiem " << endl;
            }
        }
        else {
            double x1 = (-b + sqrt(Delta)) / (2 * a);
            double x2 = -b / a - x1;
            double max = x1 * (x1 > x2) + x2 * (x2 > x1);
            double min = x1 * (x1 < x2) + x2 * (x2 < x1);
            if (d == (a > 0)) {
                cout << "bat phuong trinh co tap nghiem la " << endl;
                cout << "x > " << max << " va" << endl;
                cout << "x < " << min  << endl;
            }
            else {
                cout << "bat phuong trinh co tap nghiem la " << endl;
                cout << "x < " << max << " va" << endl;
                cout << "x > " << min << endl;
            }
        }
    }
}
void input() {
    double a, b, c;
    cout << "nhap so thuc a = "; cin >> a;
    cout << "nhap so thuc b = "; cin >> b;
    cout << "nhap so thuc c = "; cin >> c;
    if ((a < b) && (b < c)) {
        quaradic_inequality(a, b, c, 1);
    }
    else if ((a > b) && (b > c)) {
        quaradic_inequality(a, b, c, 0);

    }
    else {
        quaradic_equation(a, b, c);
    }
}
    int main() {
        input();
        return 0;
    }