#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n == 0) return 0;   // 0 �Է½� 0 ��ȯ
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            answer += i;    //��� ����
        }
    }

    return answer;
}

int main() {
    cout << solution(10);

    return 0;
}