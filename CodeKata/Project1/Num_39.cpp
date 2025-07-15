#include <iostream>
#include <string>
#include <vector>
#include <cmath>    // pow �Լ� ��� �������

using namespace std;

// 10�� -> 3�� : 3���� ������ �������� ������ ���� ����
// 3�� -> 10�� : �� �ڸ� ���� �ŵ������� + ��
// �������� �������°� �׳� �ٷ� �ݿ��ؼ� 10������ ��ȯ����.

int solution(int n) {
    int answer = 0;
    int currentNum = n;
    string ternary = "";    // 3���� ���ڿ�
    int exp = 0;

    while (currentNum >= 1) {    // ������ �ִ� ���� 1 �̻��϶� ��� ������ ������ �� ��� 
        //3���� �������� �� ������ ���� String���� ����
        switch (currentNum % 3) {
        case 2:
            ternary += '2';
            break;
        case 1:
            ternary += '1';
            break;
        case 0:
            ternary += '0';
            break;
        default:
            break;
        }
        currentNum /= 3;
    }

    for (int i = 1; i <= ternary.size(); i++) {
        exp = ternary.size() - i;   // i = 1, 2, 3 ,4 / index = 3, 2, 1, 0
        switch (ternary[i - 1]) {   // 0,1,2,3
        case '0':
            answer += 0;
            break;
        case '1':
            answer += pow(3, exp);    //�ڸ����� ���� �ŵ�����
            break;
        case '2':
            answer += (2 * pow(3, exp));
            break;
        }
        //cout << "index : " << i << " ternary : " << ternary[i - 1] << endl;
        //cout << "answer : " << answer << endl;
    }

    return answer;
}

int main() {
    cout << "solution(45) : " << solution(45) << endl;
    cout << "solution(125) : " << solution(125) << endl;
  

    return 0;
}