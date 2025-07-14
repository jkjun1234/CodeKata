/*
	직사각형 별 찍기 문제
	가로 a, 세로 b
*/
#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}