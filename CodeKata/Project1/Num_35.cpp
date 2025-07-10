#include <iostream>

using namespace std;

// count Ƚ����ŭ �����ϴ� price ���� ���� money �� �󸶰� �������� ��ȯ
long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long currentPrice = 0;
    long long currentMoney = (long long)money;

    for (int i = 1; i <= count; i++) {
        currentPrice = (long long)price * i;
        currentMoney -= currentPrice;
    }
    answer = currentMoney;
    if (answer >= 0) { return 0; }

    return answer *= -1;
}

int main()
{
    cout << solution(3, 20, 10) << endl;
    return 0;
}