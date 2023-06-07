#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	double pi = 3.14159265359;
	double a, b, c, r1, r2, r3, d1, d2, d3;
	cin >> a >> d1 >> d2;
	r1 = (d1) * (pi / 180); r2 = (d2) * (pi / 180);
	r3 = pi - (r1 + r2);
	d3 = (r3) * (180 / pi);
	cout << d3 << endl;
	cout << (sin(r1) / (sin(r3))) * a << endl;
	cout << (sin(r2) / (sin(r3))) * a << endl;
 
	return 0;
}