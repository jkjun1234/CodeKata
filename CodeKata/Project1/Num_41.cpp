/*
	�Է� ���� ���ڿ��� ������ ��������
	¦���� ��� �빮�ڷ� Ȧ���� �ҹ��ڷ� ��ȯ�ϴ� �Լ� �����

    - ���� ��ũ -
    https://school.programmers.co.kr/learn/courses/30/lessons/12930
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int indexCount = 0;

    // s = try coding ���Դٸ�?
    for (int i = 0; i < s.size(); i++) {   // ���� ��ȯ
        if (s[i] == ' ') {  // ���� �߰� �� 
            indexCount = 0; // ī��Ʈ �ʱ�ȭ
            continue;
        }
        // s[0] = t -> T    indexCount = 1
        if (indexCount % 2 == 0) {  //¦���϶�
            if (s[i] >= 'a' && s[i] <= 'z') { //�ҹ����� ���
                s[i] -= ('a' - 'A');   // �빮�� ��ȯ
            }
        }
        else {
            if (s[i] >= 'A' && s[i] <= 'Z') { // �빮���� ���
                s[i] += ('a' - 'A');    // Ȧ���� �ҹ��ڷ� ��ȯ
            }
        }

        indexCount++;
    }

    return answer = s;
}

int main()
{
    cout << "solution(\"try coding\") : " << solution("try coding") << endl;

    return 0;
}