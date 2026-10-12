// Lab_05_1.cpp 
#include <iostream>

using namespace std;

double h(const double x, const double y, const double z);


int main()
{
    double a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    c = (h(a * a, 1, b) + h(b, 1, a * a)) / h(1, a * b, 1);

    cout << c;

    return 0;
}

double h(double x, double y, double z) {
    return (x + y + z) / (x * x + y * y);

}
