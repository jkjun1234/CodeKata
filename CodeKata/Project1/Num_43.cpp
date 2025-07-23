#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
    ���� ��ũ : https://school.programmers.co.kr/learn/courses/30/lessons/147355
	���� ����
	���ڿ� t�� p�� �־��� ��, t���� p�� �����ϴ� �κ� ���ڿ��� ������ ���ϴ� �����Դϴ�.
	p�� ���ڷ� �̷���� ���ڿ��̸�, t�� ���ڿ� ���ڷ� �̷���� ���ڿ��Դϴ�.
	p�� ���̸�ŭ t�� �κ� ���ڿ��� �����Ͽ�, �ش� �κ� ���ڿ��� p���� �۰ų� ���� ��츦 ����� �մϴ�.

	���ѻ���
	- 1 �� t�� ���� �� 100,000
	- 1 �� p�� ���� �� 18
	- t�� p�� ���ڷθ� �̷���� �ֽ��ϴ�.
*/


int solution(string t, string p) {
    int answer = 0;
    long long NumT = 0;
    long long NumP = stol(p);
    string subStr;


    for (int i = 0; i <= (t.size() - p.size()); i++)    // t�� ���̿��� p�� ���̸�ŭ ������ �ε��������� ��ȯ
    {
        subStr = t.substr(i, p.size());     // substr(������ġ, ����)���� i��° p.size��ŭ ����
        NumT = stol(subStr);    // t�� �κй��ڿ� string -> long long�� ��ȯ

        if (NumT <= NumP)    // t�� �κ� ���ڿ��� ���� p���� �۰ų� ���� ���
        {
            answer++;   //answer �� ����
        }
    }

    return answer;
}

int main() {
	cout << solution("3141592", "271") << endl;  // ���� �Է�

    return 0;
}