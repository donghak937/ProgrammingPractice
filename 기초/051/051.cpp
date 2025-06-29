#include <iostream>
#include <ctime>

using namespace std;

int main(){

    time_t now = time(NULL); //날짜와 시간을 넣을 수 있는 time_t 변수
    tm* ptm = localtime(&now); //tm은 구조체, localtime으로 int 날짜와 시간값

    char buffer[64];
    strftime(buffer, 64, "예제 만드는 지금 시간은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", ptm);
    //문자열을 배열에 할당하는 녀석

    cout << buffer;

    return 0;
}