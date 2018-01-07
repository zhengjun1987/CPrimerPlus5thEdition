//  Author:Zheng Jun
//  Date:2018/1/7
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void e11_03();

void e11_05();

void e11_06();

void e11_07();

void e11_08();

void main() {
//    e11_03();
//    e11_05();
//    e11_06();
//    e11_07();
//    e11_08();
    char ch;
    while ((ch=getchar())!='#'){
        if (ch=='\n')
            continue;
        printf("Step 1\n");
        if (ch=='c')
            continue;
        else if (ch=='b')
            break;
        else if (ch =='g')
            goto laststep;
        printf("Step 2\n");
        laststep:printf("Step 3\n");
    }
    printf("Done!\n");
//    q
//    Step 1
//    Step 2
//    Step 3
//    c
//    Step 1
//    g
//    Step 1
//    Step 3
//    b
//    Step 1
//    Done!
//
//    Process finished with exit code 6
}

void e11_08() {
    int age = 20;
    while (age++ <= 65) {
        if (age % 20 == 0)
            printf("You are %d,Here is a raise.\n", age);
        if (age == 65)
            printf("You are %d.Here is your gold watch.\n", age);
    }
//            You are 40,Here is a raise.
//            You are 60,Here is a raise.
//            You are 65.Here is your gold watch.
}

void e11_07() {
    char ch;
    int lc = 0, uc = 0, oc = 0;
    while ((ch = getchar()) != '#') {
        if (ch >= 'a' && ch <= 'z')
            lc++;
        else if (ch >= 'A' && ch <= 'Z')
            uc++;
        else
            oc++;
    }
    printf("%d lowercase %d uppercase %d other\n", lc, uc, oc);
//    /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/cmake-build-debug/CPrimerPlus5thEdition#
//    69 lowercase 12 uppercase 10 other

}

void e11_06() {
    int i = 0;
    while (i < 3) {
        switch (i++) {
            case 0:
                printf("fat");
            case 1:
                printf("hat");
            case 2:
                printf("cat");
            default:
                printf("Oh no!");
        }
        putchar('\n');
    }
//            fathatcatOh no!
//            hatcatOh no!
//            catOh no!

}

void e11_05() {
    for (int i = 1; i <= 11; ++i) {
        if (i % 3 == 0)
            putchar('$');
        else
            putchar('*');
        putchar('#');
        putchar('%');
    }
    putchar('\n');
//    *#%*#%$#%*#%*#%$#%*#%*#%$#%*#%*#%
//
//    Process finished with exit code 10
}

void e11_03() {
    int weight, height;
    scanf("%d %d", &weight, &height);
    if (weight < 100 && height > 64) {
        printf("You are very tall for your weight.\n");
    } else if (weight > 300 && height < 48) {
        printf("You are tall for your weight.\n");
    } else {
        printf("Your weight is ideal.\n");
    }
}