#include <iostream>
#include <string>
#include <vector>


using namespace std;

int factors(int left, int right) {
    int count = 0, result = 0;

    for (left; left <= right; left++) {    //left ~ right ��ȯ
        for (int i = 1; i <= left; i++) {  // 1~left ��ȯ
            if (left % i == 0) { // ���
                count++;   //��� ���� ī��Ʈ
            }
        }

        if (count % 2 == 0) {//¦��
            result += left; //¦���ϰ�� ���� �� ����
        }
        else {
            result -= left; //Ȧ�� ����
        }
        count = 0;  // count �ʱ�ȭ
    }

    return result;
}
// g�ѱ۱���???
int solution(int left, int right) {
    int answer = 0;

    return answer = factors(left, right);
}


int main() {
    cout << "13~17 ����� Ȧ�� ¦�� ���� : " << solution(13, 17) << endl;

	return 0;
}