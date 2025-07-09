#include <iostream>
#include <string>
#include <vector>


using namespace std;

int factors(int left, int right) {
    int count = 0, result = 0;

    for (left; left <= right; left++) {    //left ~ right ¼øÈ¯
        for (int i = 1; i <= left; i++) {  // 1~left ¼øÈ¯
            if (left % i == 0) { // ¾à¼ö
                count++;   //¾à¼ö °¹¼ö Ä«¿îÆ®
            }
        }

        if (count % 2 == 0) {//Â¦¼ö
            result += left; //Â¦¼öÀÏ°æ¿ì ¿ÞÂÊ ¼ö ´õÇÔ
        }
        else {
            result -= left; //È¦¼ö »©±â
        }
        count = 0;  // count ÃÊ±âÈ­
    }

    return result;
}
// gÇÑ±Û±úÁü???
int solution(int left, int right) {
    int answer = 0;

    return answer = factors(left, right);
}


int main() {
    cout << "13~17 ¾à¼öÀÇ È¦¼ö Â¦¼ö µ¡¼À : " << solution(13, 17) << endl;

	return 0;
}