#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";

    for (int x = 0; x < seoul.size(); x++)  // vector �� ����
    {
        if ("Kim" == seoul[x])
        {
            answer.append("""�輭���� ").append(to_string(x)).append("�� �ִ�""");
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