#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int temp = x;

    while (temp > 0) {
        sum += temp % 10;   //1의 자리 값 더하기
        temp /= 10;     // 1의 자리수 제거
    }

    if (x % sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }


    return answer;
}

int main()
{
    cout<<solution(13);
    cout << solution(10);
    cout << solution(21);

    return 0;
}