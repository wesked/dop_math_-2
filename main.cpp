#include <iostream>
#include <cmath>


using namespace std;

int main() {

    double x1 = 0, x2 = 0, x3 = 0;
    double z1, z2, z3;
    double e, e1, er;
    int k = 1;
    do {
        cout << "ШАГ  " << k << endl;
        z1 = 2.25/3.65 + 1.25/3.65 * x2 - 0.18/3.65 * x3;
        x1 = z1;
        z2 = 0.93/1.73 + 1.25/1.73 * x1 + 0.46/1.73 * x3;
        x2 = z2;
        z3 = 1.33/2.16 - 0.18/2.16 * x1 + 0.46/2.16 * x2;
        x3 = z3;
        cout << "X1= " << z1 << endl;
        cout << "X2= " << z2 << endl;
        cout << "X3= " << z3 << endl;
        k = k + 1;



        if (k == 2) {
            e = sqrt((double)pow(x1, 2) + pow(x2, 2) + pow(x3, 2)) - 0;
            cout<< "e" << endl;
        }else{
            e1 = sqrt((double)pow(x1, 2) + pow(x2, 2) + pow(x3, 2));
            er = e1 - e;
            e = e1;
        }
    } while (er >= 0,01);
}
