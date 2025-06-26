#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(long long num) {
    int count = 0;
    int answer = 0;

    if (num == 1)  return 0;// 1인 경우

    while (num != 1)    // num이 1 아닐때
    {
        if (count >= 500) return -1;

        if (num % 2 == 0) //짝수
        {
            num /= 2;
        }
        else
        {
            num *= 3;
            num += 1;
        }
        count++;    // count 증가
    }
    
    return answer = count;
}

int main() {
    cout << solution(626331);
    
    return 0;
}