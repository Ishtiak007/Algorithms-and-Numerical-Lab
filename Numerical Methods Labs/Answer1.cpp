#include <bits/stdc++.h>

using namespace std;


double equation(double x) {
    return pow(x,3)-x-4;
}
double falsePositionMethod(double a, double b, double tolerance) {
    double c;
  while (fabs(equation(c)) >= tolerance){
        double fa = equation(a);
        double fb = equation(b);
        c = (a * fb - b * fa) / (fb - fa);
cout<<"Iteration: "<<1<< " a = " << a << " b = " << b << " f(a) "<<equation(a)<< " f(b) "<<equation(b)<<" c = "<<c<<" f(c) "<<equation(c)<<endl;


        if (equation(c) == 0.0){
            return c;
        }
        if (equation(c) * fa < 0)
            b = c;
        else

            a = c;
    }
    return c;

}
int main() {

    double a, b, tolerance;
    cout << "interval [a, b]: ";
    cin >> a >> b;
    cout << "Provide the tolerance: ";
    cin >> tolerance;
    double root = falsePositionMethod(a, b, tolerance);
    cout << "the root: " << root << endl;
    return 0;

}
