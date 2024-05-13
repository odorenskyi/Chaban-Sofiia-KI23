#include <iostream>
#include "ModulesChaban.h"

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    cout << "Введіть символ за який відповідає функція:" << endl;
    char entering;
    cin >> entering;
    switch (entering) {
        case 'u':
            int y;
            int x;
            cout << "Введіть значення y:";
            cin >> y;
            cout << "Введіть значення x:";
            cin >> x;
            s_calculation(y, x);
            break;
        case 't':
            int index;
            cout << "Введіть об'єм використаного газу за місяць:" << endl;
            cin >> index;
            gas(index);
            break;
        case 'r':
            int sizes;
            cout << "Введіть довжину ноги у см: " << endl;
            cin >> sizes;
            shoes(sizes);
            break;
        case 'e':
            int N;
            cout << "Введіть N:" << endl;
            cin >> N;
            bit(N);
            break;
        case 'w':
            exit(1);
            break;
        case 'i':
            exit(1);
            break;
        default:
            cout << "\a\a" << endl;
    }
    main();
}
