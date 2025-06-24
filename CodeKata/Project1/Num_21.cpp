#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int temp = x;

    while (temp > 0) {
        sum += temp % 10;   //1�� �ڸ� �� ���ϱ�
        temp /= 10;     // 1�� �ڸ��� ����
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