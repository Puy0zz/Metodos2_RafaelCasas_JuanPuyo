
#include <iostream>
#include <string>
using namespace std;

void sort(int* ptrA, int* ptrB, int* ptrC)
{
    // su codigo aqui
    int temp_a=*ptrA;
    int temp_b=*ptrB;
    int temp_c=*ptrC;


    if (*ptrA>*ptrB){
        *ptrB=temp_a;
        *ptrA=temp_b;
        if (*ptrB>*ptrC){
            *ptrC=*ptrB;
            *ptrB=temp_c;
        }
    }
    else if (*ptrB>*ptrC){
        *ptrC=*ptrB;
        *ptrB=temp_c;
    }
    if (*ptrA>*ptrB){
        *ptrB=*ptrA;
        *ptrA=temp_c;
    }
    





}

int main() {

    int a = 5, b = 3, c = 4;
    cout << "Initial Numbers" << endl;
    cout << a << " " << b << " " << c << endl;
    cout << "Sorting: " << endl;
    sort(&a, &b, &c);
    cout << a << " " << b << " " << c << endl;

    int d = 500, e = 300, f = 150;
    cout << "Initial Numbers" << endl;
    cout << d << " " << e << " " << f << endl;
    cout << "Sorting: " << endl;
    sort(&d, &e, &f);
    cout << d << " " << e << " " << f << endl;

    int g = 156, h = 121, i = 121;
    cout << "Initial Numbers" << endl;
    cout << g << " " << h << " " << i << endl;
    cout << "Sorting: " << endl;
    sort(&g, &h, &i);
    cout << g << " " << h << " " << i << endl;

    int j = 102, k = 105, l = 221;
    cout << "Initial Numbers" << endl;
    cout << j << " " << k << " " << l << endl;
    cout << "Sorting: " << endl;
    sort(&j, &k, &l);
    cout << j << " " << k << " " << l << endl;

    return 0;
}
