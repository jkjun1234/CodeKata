#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ���ڿ� �������� ����
string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<char>());
    return answer = s;
}

int main() {
    string s = "Helloabcd";
    cout << "���� �� : " << s << endl;
    s = solution(s);
    cout << "���� �� : " << s << endl;

    return 0;
}