#include <iostream>
#include <string>
#include <vector>
#include <cmath>    // pow 함수 사용 헤더파일

using namespace std;

// 10진 -> 3진 : 3으로 나누며 떨어지는 나머지 값들 역순
// 3진 -> 10진 : 각 자릿 수의 거듭제곱후 + 값
// 역순으로 떨어지는걸 그냥 바로 반영해서 10진수로 변환하자.

int solution(int n) {
    int answer = 0;
    int currentNum = n;
    string ternary = "";    // 3진법 문자열
    int exp = 0;

    while (currentNum >= 1) {    // 나누고 있는 수가 1 이상일때 계속 나눠서 나머지 값 얻기 
        //3으로 나누었을 때 나머지 값을 String으로 저장
        switch (currentNum % 3) {
        case 2:
            ternary += '2';
            break;
        case 1:
            ternary += '1';
            break;
        case 0:
            ternary += '0';
            break;
        default:
            break;
        }
        currentNum /= 3;
    }

    for (int i = 1; i <= ternary.size(); i++) {
        exp = ternary.size() - i;   // i = 1, 2, 3 ,4 / index = 3, 2, 1, 0
        switch (ternary[i - 1]) {   // 0,1,2,3
        case '0':
            answer += 0;
            break;
        case '1':
            answer += pow(3, exp);    //자릿수에 대한 거듭제곱
            break;
        case '2':
            answer += (2 * pow(3, exp));
            break;
        }
        //cout << "index : " << i << " ternary : " << ternary[i - 1] << endl;
        //cout << "answer : " << answer << endl;
    }

    return answer;
}

int main() {
    cout << "solution(45) : " << solution(45) << endl;
    cout << "solution(125) : " << solution(125) << endl;
  

    return 0;
}