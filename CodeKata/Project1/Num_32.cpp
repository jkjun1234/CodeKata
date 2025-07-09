#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 1;

    for (int i = 0; i < a.size(); i++) {
        answer += (a[i] * b[i]);
    }
    return answer;
}

int main() {
    vector<int> V1 = { 1, 2, 3, 4 };
    vector<int> V2 = { -3, -1, 0, 2 };

    cout << solution(V1, V2) << endl;

    return 0;
}

//| **필수 * *| 5개의 숫자를 입력받아 배열에 저장한 뒤 합과 평균을 출력하는 기능이 정확히 동작하는지 확인                                                  |
//| -- - | -- - |
//| **도전 * *| (오름차순 / 내림차순) 정렬 알고리즘이 정확히 동작하는지 |
//| **필수 * *| 합과 평균을 구하는 부분을 함수로 정의해서 구현했는지 확인 |
//| **도전 * *| 자신이 작성한 알고리즘의 정렬 과정을 명확하게 설명할 수 있는지 확인 |
//| **도전 * *| 5개가 아닌 N개의 입력을 받는다고 가정하고 재사용성을 고려한 코드를 작성했는지 확인 |
//| **도전 * *| 정렬 알고리즘 구현시 중복코드를 최소화 해서 코드를 작성했는지 확인 |
//다람쥐 oO0