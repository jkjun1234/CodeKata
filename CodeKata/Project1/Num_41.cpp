/*
	입력 받은 문자열을 공백을 기준으로
	짝수일 경우 대문자로 홀수는 소문자로 반환하는 함수 만들기

    - 문제 링크 -
    https://school.programmers.co.kr/learn/courses/30/lessons/12930
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int indexCount = 0;

    // s = try coding 들어왔다면?
    for (int i = 0; i < s.size(); i++) {   // 문자 순환
        if (s[i] == ' ') {  // 공백 발견 시 
            indexCount = 0; // 카운트 초기화
            continue;
        }
        // s[0] = t -> T    indexCount = 1
        if (indexCount % 2 == 0) {  //짝수일때
            if (s[i] >= 'a' && s[i] <= 'z') { //소문자일 경우
                s[i] -= ('a' - 'A');   // 대문자 변환
            }
        }
        else {
            if (s[i] >= 'A' && s[i] <= 'Z') { // 대문자일 경우
                s[i] += ('a' - 'A');    // 홀수는 소문자로 변환
            }
        }

        indexCount++;
    }

    return answer = s;
}

int main()
{
    cout << "solution(\"try coding\") : " << solution("try coding") << endl;

    return 0;
}