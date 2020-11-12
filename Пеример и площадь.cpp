#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x1, x2, y1, y2, s, p, a, b;
cin >> x1 >> y1 >> x2 >> y2;
a= fabs (x1-x2);
b= fabs (y1-y2);
p=2*(a+b);
s=a*b;
cout << p << ' ' << s;
return 0;
}



