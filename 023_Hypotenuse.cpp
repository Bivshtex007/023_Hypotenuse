using namespace std;
#include <cmath>
#include <iostream>

int main () {

cout << "Enter base and side of triangle" << endl;
double a, b;
cin >> a;
cin >> b;
double hypotenuse = sqrt(a*a + b*b);
cout << "Hypotenuse of your Triangle is " << hypotenuse << endl;

return 0;
}