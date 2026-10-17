#include <stdio.h>
#include <string.h>

struct Talaba{
    char ism[20];
    int yosh;
    int ball;
};

int main (){
    struct Talaba t1;

    strcpy(t1.ism, "ali");
    t1.yosh = 18;
    t1.ball = 90;

    printf("ism: %s\n", t1.ism);;
    printf("yosh: %d\n", t1.yosh);
    printf("ball: %d\n", t1.ball);
}