#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
   * 문제 설명
 * 정수 배열 number가 주어집니다.
 * 배열의 원소 중 3개를 뽑아 더했을 때 0이 되는 경우의 수를 return 하는 solution 함수를 완성하세요.
 *
 * 제한사항
 * - 3 ≤ number의 길이 ≤ 13
 * - -1,000 ≤ number의 원소 ≤ 1,000
 * - 서로 다른 원소가 들어있습니다.
 */
int solution(vector<int> number) {
    int answer = 0;
    int n = number.size();  // 5

    //number [-2,3,0,2-5]
    for (int i = 0; i < n - 2; ++i)     //-2 , 3 , 0   // i < 3
    {
        for (int j = i + 1; j < n - 1; ++j)     //3 , 0 , 2  // i < 4
        {
            for (int k = j + 1; k < n; ++k)     //0 , 2 , -5    // i < 5
            {
                if (number[i] + number[j] + number[k] == 0) // -2 + 3 + 0 , 2, -5
                    answer++;
            }

        }
    }

    return answer;
}

int main() 
{
    vector<int> number = { -2, 3, 0, 2, -5 };

    cout << "solution(number) : " << solution(number) << endl;

    return 0;
}