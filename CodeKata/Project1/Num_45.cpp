#include <string>
#include <vector>
#include <iostream>

using namespace std;

// s = 알파벳 문자열
// n = 밀어내는 숫자
string solution(string s, int n) {
    string answer = "";

    for (char c : s) //문자열 순환
    {
        if (c >= 'a' && c <= 'z')    // 소문자일 경우
        {
            // a를 뺌으로 문자의 시작점을 1로 시작
            // n만큼 전진
            // 26 나눈 나머지 
            // a를 더함으로 문자의 시작점에서 + n
            c = (((c - 'a') + n) % 26) + 'a';

        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (((c - 'A') + n) % 26) + 'A';     // c 가 92라면 92-65 => 27 % 26 => 1 + 65 => B   
        }

        answer.push_back(c);    //변환한 문자를 저장
    }

    return answer;
}

int main() {
	string s = "a B z";
	int n = 4;
	string result = solution(s, n);
	// 결과 출력
	cout << result << endl; // "e F d"

	return 0;
}