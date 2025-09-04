// Project0903.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //float number1 = 10.0f; // 10이라는 float 타입의 값을 float인 number1에 넣기
    //float number2 = 15.0;  // 15라는 double 타입의 값을 float인 number2에 넣기

    //std::cin >> number1 >> number2;

    //printf("number1 : %.2f\nnumber2 : %.2f", number1, number2);

    //int square = 0;
    //printf("정사각형의 한변의 길이를 입력하세요 : ");
    //std::cin >> square;
    //printf("정사각형의 넓이는 [%d]입니다.", square * square);

    //float a = 10.12345678910f;
    //float b = 0.0f;
    //std::cin >> b; 
    //b = b * 123.0f;

    //bool result = a == b; // 사용하지 않는 방식

    //float 타입을 ==로 비교할 때 반드시 아래와 같이 진행해야함. 
    //float epsilon = 0.001f;
    //a < (b + epsilon);
    //a > (b - epsilon);

    // if : 소괄호 안이 true면 중괄호 안의 코드를 실행하라
    //      내가 특정 조건을 만족할 때만 어떤 코드를 실행하고 싶을 때 사용.

    //int a = 10;
    //int b = 0;
    //printf("a는 10\nb를 입력하세요 : ");
    //std::cin >> b;

    //if (a > b) {
    //    printf("b가 %d라서 a가 더 크다", b);
    //}
    //else {
    //    printf("a가 b보다 작거나 같다.");
    //}

    // (a != b) : a와 b와 다르다.

    //if (b < 60) {
    //    printf("당신의 성적은 F입니다.");
    //}
    //else if (b < 70) {
    //    printf("당신의 성적은 C입니다.");
    //}
    //else if (b < 80) {
    //    printf("당신의 성적은 B입니다.");
    //}
    //else if (b < 90) {
    //    printf("당신의 성적은 A입니다.");
    //}

    //switch (b) {
    //    case 1:
    //        printf("1이다.\n");
    //        break;
    //    case 3:
    //        printf("3이다.\n");
    //        break;
    //    case 5:
    //        printf("5이다.\n");
    //        break;
    //    default:
    //        printf("1, 3, 5가 아니다.\n");
    //        break;
    //}

    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a * 2 + b : a + b * 2;

    printf("%d", c);
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

/*

상수(Constant)
 - 변하지 않는 수
 - 코드의 안정성과 가독성을 높여준다. 
   (매직넘버 회피에 좋다.)

*/

/*

비교 연산자
 - 비교를 하는 연산자. 참 혹은 거짓이 결과로 나온다.
 - boolean 변수에 비교 연산자의 결과 값을 저장할 수 있다.
 >, <, >=, <=, ==
 
*/

/*

논리 연산자

 - && (And) &&의 양쪽이 둘 다 True라면 True.
 // !!! And 연산자는 실패할 확률이 높은 항을 앞에 두어야
        뒤의 계산을 무시하기 때문에 최적화가 이루어진다. !!! 

 - || (Or)  ||의 양쪽 중 하나라도 True면 True. 그 외에는 False.
 - !  (Not) ! 뒤의 bool이 True 라면 False. 아니면 True. 

*/

/*

제어문
- 프로그램의 흐름을 제어하는 문 (Statement)
- 조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
  - if, else if, else
  - switch
  - 삼항 연산자
- 반복문 : 일정 조건에 따라 코드를 반복하는 문 

*/

