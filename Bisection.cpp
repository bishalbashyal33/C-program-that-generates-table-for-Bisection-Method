//C++ Program to generate  table for bisection method
//update your equation in f() function
//-Bishal Bashyal


#include<iostream>
#include<math.h>
using namespace std;
double a, b, e, c;
double f(double);
int checker(double, double);
void dataentry();
double mod(double);
int main() {
   do
    {
        dataentry();
    } while (checker(a, b) != 1);
    //working upto here

        cout << " a = " << a << " b = " << b;

    while (mod(b-a) > mod(e))
    {
       

        c = (a + b) / 2;
        cout <<" c = "<< c<<endl;
        if (f(c) * f(a)<=0) {
            b = c;
            cout << " a = " << a << " b = " << b ;

        }
        else if (f(c)*f(b)<=0) {
            a = c;
            cout << " a = " << a << " b = " << b;
        }
        cout << "f(c)=" << f(c) << endl;
       
    }
    cout << "\nThe values of the root is" << c;

}

double mod(double x) {
    if (x < 0)
        return -x;
    else
    {
        return x;
    }


}

void dataentry() {
    cout << "Enter your initial interval limit a";
    cin >> a;
    cout << "Enter your final interval limit b";
    cin >> b;
    cout << "Enter your error limit";
    cin >> e;

};

double f(double x) {
    return pow(x,3)-7;

}

int checker(double a = 0, double b = 0) {
    if (f(a) * f(b) <= 0) {

        cout << "The selected interval is acceptable\n";
        return 1;

    }
    else if (f(a) * f(b) > 0) {
        cout << "Please re/enter the interval\n";
        return 0;
    }

}
