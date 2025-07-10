#include <iostream>

using namespace std;

// count 횟수만큼 증가하는 price 값을 현재 money 에 얼마가 부족한지 반환
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