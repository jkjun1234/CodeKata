#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() != 4 && s.size() != 6) { return false; }    //4 or 6 ¾Æ´Ò½Ã False

    for (char c : s) {
        if (c < '0' || c > '9') { return false; }
    }

    return answer;
}

int main() {
    cout << solution("1234") << endl;
    cout << solution("a1234") << endl;
    cout << solution("a234") << endl;
    
    return 0;
}