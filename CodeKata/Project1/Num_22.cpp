#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int temp = 0;

    if (a > b) { temp = a; a = b; b = temp; }    // a b 크기순으로 정렬

    for (long long i = a; i <= b; i++)
    {
        answer += i;
    }

    return answer;
}

int main() {
    solution(3, 5);

    return 0;
}