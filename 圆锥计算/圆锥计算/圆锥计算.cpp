#include <iostream>
using namespace std;
#define PI 3.1415926;
int main() {
	double r;
	cin >> r;
	double h;
	cin >> h;
	double V=pow(r, 3) * h * 1.0 / 3 * PI;
	cout << V;
}