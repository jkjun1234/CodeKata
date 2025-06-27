#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";

    for (int x = 0; x < seoul.size(); x++)  // vector 값 접근
    {
        if ("Kim" == seoul[x])
        {
            answer.append("""김서방은 ").append(to_string(x)).append("에 있다""");
        }
    }

    return answer;
}

int main()
{
    vector<string> v = { "Jun", "Kim" };

    cout << solution(v);

    return 0;
}