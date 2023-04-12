#include <iostream>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    if (n % m == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
 
    return 0;
}
