#include <iostream>

using namespace std;

int main(){

    char ch1 = 'c';
    char ch2 = 200;

    unsigned char ch3 = 'c';
    unsigned char ch4 = 200;

    printf("char ch1 = %c, %d\n", ch1, ch1); // c 99
    printf("char ch2 = %c, %d\n", ch2, ch2); // ? -56 >> char 범위 넘어가면 보수를 취함 128 - 200 = -72 -> -127 + 72 = -56
    printf("char ch3 = %c, %d\n", ch3, ch3); // c 99
    printf("char ch4 = %c, %d\n", ch4, ch4); // ? 200

    return 0;
}