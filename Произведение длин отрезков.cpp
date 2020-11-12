#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a, b, c, l1, l2, prod;
cin >> a >> c >> b;
l1=fabs (c-a);
l2=fabs (b-c);
prod=l1*l2;
cout << prod;
    return 0;
}



