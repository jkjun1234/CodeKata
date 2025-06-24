#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n == 0) return 0;   // 0 입력시 0 반환
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            answer += i;    //약수 더함
        }
    }

    return answer;
}

int main() {
    cout << solution(10);

    return 0;
}