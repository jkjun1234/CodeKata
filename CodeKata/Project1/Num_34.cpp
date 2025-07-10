#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 내림차순 정렬
string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<char>());
    return answer = s;
}

int main() {
    string s = "Helloabcd";
    cout << "정렬 전 : " << s << endl;
    s = solution(s);
    cout << "정렬 후 : " << s << endl;

    return 0;
}