#include <string>
#include <vector>

using namespace std;

// �� ��� ���� �Լ�
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer = arr1;

    for (int i = 0; i < arr1.size(); i++) {   //��
        for (int j = 0; j < arr1[0].size(); j++) {    // ��
            answer[i][j] = arr1[i][j] + arr2[i][j];     //��� ����
        }
    }

    return answer;
}

int main() {
    return 0;
}