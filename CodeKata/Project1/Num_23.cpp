#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(long long num) {
    int count = 0;
    int answer = 0;

    if (num == 1)  return 0;// 1�� ���

    while (num != 1)    // num�� 1 �ƴҶ�
    {
        if (count >= 500) return -1;

        if (num % 2 == 0) //¦��
        {
            num /= 2;
        }
        else
        {
            num *= 3;
            num += 1;
        }
        count++;    // count ����
    }
    
    return answer = count;
}

int main() {
    cout << solution(626331);
    
    return 0;
}