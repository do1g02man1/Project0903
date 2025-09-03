// Project0903.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//const float PI = 3.141592f;

int main()
{
    //float Radius;

    //printf("원의 반지름을 입력해 주세요 : ");
    //std::cin >> Radius;

    //printf("원의 넓이는 %.2f입니다.", Radius * Radius * PI);



    /* // 1. 숫자를 입력받아 양수인지 음수인지 0인지 출력하기
    int Number;

    printf("숫자를 입력해 주세요. ");
    std::cin >> Number;

    if (Number > 0) {
        printf("양수입니다.");
    }
    else if (Number < 0) {
        printf("음수입니다.");
    }
    else {
        printf("0입니다.");
    }
    */

    /* // 2. 숫자를 입력받아 홀수인지 짝수인지 출력하기
    int Number;

    printf("숫자를 입력해 주세요. ");
    std::cin >> Number;
    
    bool Odd = (Number % 2 == 0);

    if (Odd) {
        printf("짝수입니다.");
    }
    else {
        printf("홀수입니다.");
    }
    */
    
    /* // 3. 두 수를 입력 받아 더 큰 수를 출력하기.같을 경우는 같다고 출력.
    int Number1, Number2;

    printf("두 수를 입력해 주세요. ");
    std::cin >> Number1 >> Number2;

    if (Number1 > Number2) {
        printf("Number1보다 Number2가 더 큰 숫자입니다.");
    }
    else if (Number1 < Number2) {
        printf("Number2보다 Number1가 더 큰 숫자입니다.");
    }
    else {
        printf("두 수가 같습니다.");
    }
    */

    /* // 4. 나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능으로 출력
    const unsigned int LimitAge = 5;
    const float LimitHeight = 120.0f;
    unsigned int Age = 0;
    unsigned int Height = 0;

    printf("나이와 키를 입력해 주세요. ");
    std::cin >> Age >> Height;

    if (Age > LimitAge && Height >= LimitHeight) {
        printf("롤러코스터에 오신걸 환영합니다.");
    }
    else {
        printf("불가능");
    }
    */

    /* // 5. 점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 이하는 F라고 출력하기
    printf("성적을 입력해 주세요. ");
    std::cin >> Grade; 
    
    int Grade;
    const int RankA = 90;
    const int RankB = 80;
    const int RankC = 70;
    const int RankD = 60;

    if (Grade >= RankA) {
        printf("A");
    }
    else if (Grade >= RankB) {
        printf("B");
    }
    else if (Grade >= RankC) {
        printf("C");
    }
    else if (Grade >= RankD) {
        printf("D");
    }
    else {
        printf("F");
    }
    */

    /* // 6. 세 과목의 점수를 입력받아, 세 과목 평균 60점 이상이면 "합격", 아니면 "불합격"을 출력하는 프로그램을 작성하세요.     
       //    한과목이라도 40점 미만이면 불합격 출력하기
    int Kor, Eng, Math;

    const int AverageLimit = 60;
    const int FailLimit = 40;  
    const float SubmitCount = 3.f;

    printf("국어, 영어, 수학의 성적을 입력해 주세요. ");
    std::cin >> Kor >> Eng >> Math;

    float Avg = (Kor + Eng + Math) / SubmitCount;
    if (Avg >= AverageLimit && (Kor >= FailLimit && Eng >= FailLimit && Math >= FailLimit)) {
        printf("합격");
    }
    else {
        printf("불합격");
    }
    */
    return 0;
}