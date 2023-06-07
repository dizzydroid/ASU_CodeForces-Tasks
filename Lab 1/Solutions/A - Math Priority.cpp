#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	double d = b * b - 4 * a * c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	cout << x1 << endl;
	cout << x2 << endl;
	
	return 0;
}