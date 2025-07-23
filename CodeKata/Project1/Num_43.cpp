#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
    문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/147355
	문제 설명
	문자열 t와 p가 주어질 때, t에서 p로 시작하는 부분 문자열의 개수를 구하는 문제입니다.
	p는 숫자로 이루어진 문자열이며, t는 숫자와 문자로 이루어진 문자열입니다.
	p의 길이만큼 t의 부분 문자열을 추출하여, 해당 부분 문자열이 p보다 작거나 같은 경우를 세어야 합니다.

	제한사항
	- 1 ≤ t의 길이 ≤ 100,000
	- 1 ≤ p의 길이 ≤ 18
	- t와 p는 숫자로만 이루어져 있습니다.
*/


int solution(string t, string p) {
    int answer = 0;
    long long NumT = 0;
    long long NumP = stol(p);
    string subStr;


    for (int i = 0; i <= (t.size() - p.size()); i++)    // t의 길이에서 p의 길이만큼 이전의 인덱스까지만 순환
    {
        subStr = t.substr(i, p.size());     // substr(시작위치, 길이)으로 i번째 p.size만큼 추출
        NumT = stol(subStr);    // t의 부분문자열 string -> long long로 변환

        if (NumT <= NumP)    // t의 부분 문자열의 수가 p보다 작거나 같은 경우
        {
            answer++;   //answer 값 증가
        }
    }

    return answer;
}

int main() {
	cout << solution("3141592", "271") << endl;  // 예시 입력

    return 0;
}