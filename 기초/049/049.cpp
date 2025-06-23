#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(static_cast<unsigned int>(time(NULL)));

    for(int i = 0; i < 5; i++)
        cout << "난수 : " << rand() << endl; // rand() 범위 0 - 32767
    
    return 0;
}