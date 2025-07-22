#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
   * ���� ����
 * ���� �迭 number�� �־����ϴ�.
 * �迭�� ���� �� 3���� �̾� ������ �� 0�� �Ǵ� ����� ���� return �ϴ� solution �Լ��� �ϼ��ϼ���.
 *
 * ���ѻ���
 * - 3 �� number�� ���� �� 13
 * - -1,000 �� number�� ���� �� 1,000
 * - ���� �ٸ� ���Ұ� ����ֽ��ϴ�.
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