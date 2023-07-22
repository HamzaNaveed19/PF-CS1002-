#include<iostream>
using namespace std;
int main() {

    /*Team 1  Team 2   Team 3
        23     102      134
        124     90       91
        56      23       79
        67       76      119
        98       34       78*/


    int level_t1, level_t2, level_t3;
    level_t1 = (0.1 * 23) + (0.1 * 124) + (0.1 * 56) + (0.1 * 67) + (0.1 * 98);
    level_t2 = (0.1 * 102) + (0.1 * 90) + (0.1 * 23) + (0.1 * 76) + (0.1 * 34);
    level_t3 = (0.1 * 134) + (0.1 * 91) + (0.1 * 79) + (0.1 * 119) + (0.1 * 78);
    if (level_t1 > level_t2 && level_t1 > level_t3) {
        cout << "strongest ACR is " << level_t1 << endl;
        cout << "standings\n";
        cout << "TEAM 2 VS TEAM 3\n";
        cout << "TBD VS team 1\n";
    }
    else if (level_t2 > level_t1 && level_t2 > level_t3) {
        cout << "strongest ACR is " << level_t2 << endl;
        cout << "standings\n";
        cout << "TEAM 1 VS TEAM 3\n";
        cout << "TBD VS team 2\n";
    }
    else if (level_t3 > level_t1 && level_t3 > level_t2) {
        cout << "strongest ACR is " << level_t3 << endl;
        cout << "standings\n";
        cout << "TEAM 1 VS TEAM 2\n";
        cout << "TBD VS team 3\n";
    }

    system("pause");
    return 0;











}