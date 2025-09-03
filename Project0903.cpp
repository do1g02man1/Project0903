// Project0903.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
const float PIE = 3.14f;

int main()
{
    //float number1 = 10.0f; // 10이라는 float 타입의 값을 float인 number1에 넣기
    //float number2 = 15.0;  // 15라는 double 타입의 값을 float인 number2에 넣기

    //std::cin >> number1 >> number2;

    //printf("number1 : %.2f\nnumber2 : %.2f", number1, number2);

    float Radius;

    printf("원의 반지름을 입력해 주세요 : ");
    std::cin >> Radius;

    printf("원의 넓이는 %.2f입니다.", Radius * Radius * PIE);

    return 0;
}

/*

데이터 타입 
int : 정수형. 일반적으로 32bit (약 -21억 ~ 21억) 
float : 실수형. 32bit. 태생적으로 오차가 있는 타입. 총 7자리부터 오차 발생 
double : 실수형. 64bit. 
bool : boolean. True / False만 저장
char : character. 글자 하나를 저장하는 데이터 타입. 8bit 정수형
    char alpha = 'A';
    char alpha = 65;
std::string : 문자열을 다룰 수 있는 데이터 타입. 
    문자열 : 글자 여러개가 연결된 것.
    std::string str = "Hello World!";
    char* str;      포인터
    char str[32];   배열  // C언어
        
*/  