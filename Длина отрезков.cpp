#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a, b, c, l1, l2, sum=0;
cin >> a >> b >> c;
l1=fabs (c-a);
l2=fabs (c-b);
sum=sum+l1+l2;
cout << l1 << " " << l2 << " " << sum;
    return 0;
}


