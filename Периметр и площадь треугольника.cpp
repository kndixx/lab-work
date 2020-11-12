#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x1, y1, x2, y2, x3, y3, s, p, a, b, c, p2;
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
a=sqrt((x1-x2)*(x1-x2)+((y1-y2)*(y1-y2)));
b=sqrt((x2-x3)*(x2-x3)+((y2-y3)*(y2-y3)));
c=sqrt((x3-x1)*(x3-x1)+((y3-y1)*(y3-y1)));
p=a+b+c;
p2=p/2;
s=sqrt (p2*(p2-a)*(p2-b)*(p2-c));
cout << p << ' ' << s;
return 0;
}





