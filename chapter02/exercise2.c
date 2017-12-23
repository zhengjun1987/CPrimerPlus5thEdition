//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>

void printSentence();

void printSmile();

void one_three();

void two();

void e2(){
    printf("Zheng Jun\n");
    printf("浙江省杭州市滨江区滨盛路寰宇天下C区19号楼一单元1702室\n");
//Zheng Jun
//浙江省杭州市滨江区滨盛路寰宇天下C区19号楼一单元1702室

    printf("我的年龄 %d 天数是：%d\n",31,31*365);
//我的年龄 31 天数是：11315

    printSentence();
    printSentence();
    printSentence();
    printf("Which nobody can deny!\n");
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//Which nobody can deny!

    int toes = 10;
    printf("toes:%d double:%d sqr:%d \n",toes,toes*2,toes*toes);
//    toes:10 double:20 sqr:100

    printSmile();
    printSmile();
    printSmile();
    printf("\n");
    printSmile();
    printSmile();
    printf("\n");
    printSmile();
    printf("\n");
//    Smile!Smile!Smile!
//    Smile!Smile!
//    Smile!


    printf("Starting now:\n");
    one_three();
    printf("done!\n");
//    Starting now:
//    one
//    two
//    three
//    done!
}

void one_three() {
    printf("one\n");
    two();
    printf("three\n");
}

void two() {
    printf("two\n");
}

void printSmile() {
    printf("Smile!");
}

void printSentence() {
    printf("For he's a jolly good fellow!\n");
}
//
//Process finished with exit code 23
