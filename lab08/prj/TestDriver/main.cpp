#include <iostream>
#include "ModulesChaban.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    cout << "TC_01: ";
    s_calculation(5, 8);
    cout << "TC_02: ";
    s_calculation(2, 6);
    cout << "TC_03: ";
    s_calculation(2, 3);
    cout << "TC_04: ";
    s_calculation(9, 4);
    cout << "TC_05: ";
    s_calculation(4, 7);
    cout << "TC_06: ";
    s_calculation(10, 2);
    cout << "TC_07: ";
    s_calculation(-5, -8);
    cout << "TC_08: ";
    s_calculation(7, 7);
    cout << "TC_09: ";
    s_calculation(8, -9);
    cout << "TC_10: ";
    s_calculation(7, 9);
    return 0;
}
