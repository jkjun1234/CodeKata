/*
* 문제 링크https://school.programmers.co.kr/learn/courses/30/lessons/86491
명함 지갑을 만드는 회사에서 지갑의 크기를 정하려고 합니다. 다양한 모양과 크기의 명함들을 모두 수납할 수 있으면서, 작아서 들고 다니기 편한 지갑을 만들어야 합니다. 
이러한 요건을 만족하는 지갑을 만들기 위해 디자인팀은 모든 명함의 가로 길이와 세로 길이를 조사했습니다.

아래 표는 4가지 명함의 가로 길이와 세로 길이를 나타냅니다.

명함 번호	가로 길이	세로 길이
1	60	50
2	30	70
3	60	30
4	80	40
가장 긴 가로 길이와 세로 길이가 각각 80, 70이기 때문에 80(가로) x 70(세로) 크기의 지갑을 만들면 모든 명함들을 수납할 수 있습니다. 
하지만 2번 명함을 가로로 눕혀 수납한다면 80(가로) x 50(세로) 크기의 지갑으로 모든 명함들을 수납할 수 있습니다. 이때의 지갑 크기는 4000(=80 x 50)입니다.

모든 명함의 가로 길이와 세로 길이를 나타내는 2차원 배열 sizes가 매개변수로 주어집니다. 모든 명함을 수납할 수 있는 가장 작은 지갑을 만들 때, 지갑의 크기를 return 하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

/*
1. 가로 세로의 값이 2차원 vector 로 주어짐
2. 가로 세로 없이 긴 쪽을 가로로 정렬
3. 가로쪽의 Max값 저장
4. 세로 쪽의 Max값 저장
5. 가로 x 세로 : 최소 직사각형의 거리
*/
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<vector<int>> wallets = sizes;    // 지갑 배열 얻어옴
    int temp = 0;   // 지값 크기 비교를 위한 Temp
    int w, h = 0;   //가로 세로 값
    int Wmax, Hmax = 0; //가로 세로 최대값

    for (int i = 0; i < wallets.size(); i++)   // 전체 지갑 순환
    {
        if (wallets[i][0] < wallets[i][1])  // 지갑들마다 값이 큰것을 가로에 대입
        {
            temp = wallets[i][0];
            wallets[i][0] = wallets[i][1];  // 큰 값을 가로에 대입
            wallets[i][1] = temp;   // 작은 값을 세로에 대입
        }
        w = wallets[i][0];
        h = wallets[i][1];
        Wmax = max(Wmax, w);   // 가로 가장 큰 값 
        Hmax = max(Hmax, h);    // 세로 가장 큰 값
    }

    return answer = Wmax * Hmax;    //가장 큰 가로 X 가장 큰 세로 = 최소 직사각형
}

int main() {
	vector<vector<int>> sizes = { {60, 50}, {30, 70}, {60, 30}, {80, 40} };
	cout << solution(sizes) << endl;  // 예시 입력

	return 0;
}