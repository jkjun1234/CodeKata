#include <iostream>
#include <string>
#include <vector>

using namespace std;

//���� ���� ����
void Sort(vector<int>& arr) {
    int size = arr.size();

    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    //arr �� ��ȯ
    for (int num : arr) {
        //������ �������ٸ�
        if (num % divisor == 0) {
            answer.push_back(num);  //�������� �ش� �� �߰�
        }
    }

    //�������� �� ������ -1 ��ȯ
    if (answer.empty()) {
        answer.push_back(-1);
    }
    else {
        Sort(answer);
    }

    return answer;
}

int main()
{
    vector<int> v1 = { 35,2,1,10,12 };
    vector<int> result = solution(v1, 5);


    for (auto n : result) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}