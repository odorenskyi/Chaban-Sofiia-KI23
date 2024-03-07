#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void s_calculation(int x, int y)

{
    system("chcp 65001 > nul");
    float S;
    if (y > 0) {
    S = pow(x,2)-pow(y,3)+(sqrt((pow(y,x))-3.141592653589793));
    cout << "S: " << setprecision(1) << fixed << S << endl;
    }
    else {
    cout << "Неможливо визначити, y має бути додатнім" << endl;
    }
}

