#include <string>
#include <vector>
#include <iostream>

using namespace std;

// s = ���ĺ� ���ڿ�
// n = �о�� ����
string solution(string s, int n) {
    string answer = "";

    for (char c : s) //���ڿ� ��ȯ
    {
        if (c >= 'a' && c <= 'z')    // �ҹ����� ���
        {
            // a�� ������ ������ �������� 1�� ����
            // n��ŭ ����
            // 26 ���� ������ 
            // a�� �������� ������ ���������� + n
            c = (((c - 'a') + n) % 26) + 'a';

        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (((c - 'A') + n) % 26) + 'A';     // c �� 92��� 92-65 => 27 % 26 => 1 + 65 => B   
        }

        answer.push_back(c);    //��ȯ�� ���ڸ� ����
    }

    return answer;
}

int main() {
	string s = "a B z";
	int n = 4;
	string result = solution(s, n);
	// ��� ���
	cout << result << endl; // "e F d"

	return 0;
}