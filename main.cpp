#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = (b*b) - (4*a*c);
    double x1 = 0, x2 = 0;
    
    if ( d >= 0 ) {
        int roots = 2;
        x1 =(-b - sqrt(d))/ (2 * a);
        x2 =(-b + sqrt(d))/ (2 * a);
        cout << x1 << " " << x2;
    }  else {
       int roots = 0;
        cout << "No real roots";
    }

    return 0;
}
