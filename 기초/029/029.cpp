#include <iostream>
#include <bitset>

using namespace std;

int main(){

    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y / x);
    int j = (int) y / x;
    double k = y / x;

    cout << "4.4 / 2 = (static_cast<int>)" << i << endl;
    cout << "4.4 / 2 = (int)" << j << endl;
    cout << "4.4 / 2 = " << k << endl;

    //static_cast -> 유지보수 디버깅에 좋음

    return 0;
}