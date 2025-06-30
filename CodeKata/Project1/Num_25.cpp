#include <iostream>
#include <string>
#include <vector>

using namespace std;

//오름 차순 정렬
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

    //arr 값 순환
    for (int num : arr) {
        //나누어 떨어진다면
        if (num % divisor == 0) {
            answer.push_back(num);  //마지막에 해당 값 추가
        }
    }

    //떨어지는 값 없으면 -1 반환
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