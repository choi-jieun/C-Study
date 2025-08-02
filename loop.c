#include <stdio.h>


int main(void) {

    
    //for문
    for (int a = 0; a < 10; ++a) { //for문 안에서 ++a와 a++은 같다!!
        printf("화이팅 힘내자 \n");
    }
    puts("");

    for (int a = 0; a < 10; a++) {
        printf("화이팅 힘내자 \n");
    }


    //이중for문
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    puts("");

    //거꾸로 별
    for (int k = 0; k < 6; k++) { //0,1,2,3,4,5
        for (int j = k; j <= 4; j++) {
            printf("S");
        }
        for (int j = 0; j <= k; j++) {
            printf("*");
        }
        puts("");
    }


    //while
    int a = 0;
    while (a < 5) {
        printf("%s", "아 시험기간 빨리 끝나면 좋겠다.\n");
        a++;
    }
    





    
    //do while
    int b = 0;
    do {
        printf("시험끝나면 수원놀러간다 ㅎ\n"); //일단 먼저 실행
       b++;
    } while (b < 5);
    

   

    return 0;
}
*/



/*
SSSSS*
SSSS**
SSS***
SS****
S*****
******
*/