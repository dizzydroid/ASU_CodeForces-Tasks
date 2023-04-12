#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char c;
	cin >> c;
	c++;
	if (c == '{') {
		c = 'a';
	}
	cout << c;
 
	return 0;
}