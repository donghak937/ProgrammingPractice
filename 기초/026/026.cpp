#include <string>
#include <iostream>

using namespace std;

int main(){

    int x = 10;
    int y = 20;
    int z = 0;

    z = x > y ? x : y;

    cout << "x와 y중 더 큰 값은 : " << z << endl;

    return 0;
}