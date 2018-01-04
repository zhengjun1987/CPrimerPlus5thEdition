//  Author:Zheng Jun
//  Date:2018/1/3
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <math.h>
#include <memory.h>

void exercise06_15_01();

void exercise06_15_02();

void exercise06_15_04();

void exercise06_15_05();

void exercise06_15_06();

void exercise06_15_07();

void exercise06_15_08();

void exercise06_15_10();

void exercise06_15_11();

long returnlong();

long powerful(int i);

void exercise06_15_13();

void exercise06_15_14();

void exercise06_16_01();

void exercise06_16_02();

void exercise06_16_03();

void exercise06_16_04();

void exercise06_16_05();

void exercise06_16_06();

void exercise06_16_07();

void exercise06_16_08();

void exercise06_16_09();

void exercise06_16_16();

void e06() {
//    exercise06_15_01();
//    exercise06_15_02();
//    exercise06_15_04();
//    exercise06_15_05();
//    exercise06_15_06();
//    exercise06_15_07();
//    exercise06_15_08();
//    exercise06_15_10();
//    exercise06_15_11();
//    exercise06_15_13();
//    exercise06_15_14();
//    exercise06_16_01();
//    exercise06_16_02();
//    exercise06_16_03();
//    exercise06_16_04();
//    exercise06_16_05();
//    exercise06_16_06();
//    exercise06_16_07();
//    exercise06_16_08();
//    exercise06_16_09();
//    exercise06_16_16();
}

void exercise06_16_16() {
    printf("year benjin lixi quchu shengyu\n");
    double benjin=100.0,interest = 0.08,quchu=10.0;
    for (int i = 0; i < 30; ++i) {
        printf("%4d %6.2f %4.2f %5.2f %6.2f\n",i,benjin,benjin*interest,quchu,benjin+benjin*interest-quchu);
        benjin=benjin+benjin*interest-quchu;
        if(benjin<0){
            break;
        }
    }
//    year benjin lixi quchu shengyu
//    0 100.00 8.00 10.00  98.00
//    1  98.00 7.84 10.00  95.84
//    2  95.84 7.67 10.00  93.51
//    3  93.51 7.48 10.00  90.99
//    4  90.99 7.28 10.00  88.27
//    5  88.27 7.06 10.00  85.33
//    6  85.33 6.83 10.00  82.15
//    7  82.15 6.57 10.00  78.73
//    8  78.73 6.30 10.00  75.02
//    9  75.02 6.00 10.00  71.03
//    10  71.03 5.68 10.00  66.71
//    11  66.71 5.34 10.00  62.05
//    12  62.05 4.96 10.00  57.01
//    13  57.01 4.56 10.00  51.57
//    14  51.57 4.13 10.00  45.70
//    15  45.70 3.66 10.00  39.35
//    16  39.35 3.15 10.00  32.50
//    17  32.50 2.60 10.00  25.10
//    18  25.10 2.01 10.00  17.11
//    19  17.11 1.37 10.00   8.48
//    20   8.48 0.68 10.00  -0.85
}

void exercise06_16_09() {
    int limit = 10000000;
    double d2 = 0.0;
    for (int i = 1; i <= limit; ++i) {
        if (i%2==0){
            d2 -= 1.0/i;
        } else {
            d2 += 1.0/i;
        }
        printf("RESULT = %lf\n",d2);
//        RESULT = 0.693147
    }
}

void exercise06_16_08() {
    int low, high, ret;
    do {
        printf("Enter:\n");
        ret = scanf("%d %d", &low, &high);
        if (ret == 2 && low < high) {
            int sum = 0;
            for (int i = low; i <= high; ++i) {
                sum += i * i;
            }
            printf("The sums of squares from %d to %d is %d\n", low * low, high * high, sum);
        } else {
            break;
        }
    } while (ret == 2);
    printf("Done!");
//    Enter:
//    5 9
//    The sums of squares from 25 to 81 is 255
//    Enter:
//    3 25
//    The sums of squares from 9 to 625 is 5520
//    Enter:
//    5 5
//    Done!
//    Process finished with exit code 5
}

void exercise06_16_07() {
    float e = 2.718, pi = 3.141593;
    printf("Result = %7.7f", (pi - e) / (e * pi));
//    Result = 0.0496077
}

void exercise06_16_06() {//    char *string = "Congratulations";
//    char arr[strlen(string)];
//    for (int i = 0; i < strlen(string); ++i) {
//        arr[i] = ;
//    }
}

void exercise06_16_05() {
    printf("digit     square            cube\n");
    for (int i = 0; i < 1000; ++i) {
        printf("%5d %10d %15d\n", i, i * i, i * i * i);
    }
//    digit     square            cube
//    0          0               0
//    1          1               1
//    2          4               8
//    3          9              27
//    4         16              64
//    5         25             125
//    6         36             216
//    7         49             343
//    8         64             512
//    9         81             729
//    10        100            1000
//    11        121            1331
//    12        144            1728
//    13        169            2197
//    14        196            2744
//    15        225            3375
//    16        256            4096
//    17        289            4913
//    18        324            5832
//    19        361            6859
//    20        400            8000
//    21        441            9261
//    22        484           10648
//    23        529           12167
//    24        576           13824
//    25        625           15625
//    26        676           17576
//    27        729           19683
//    28        784           21952
//    29        841           24389
//    30        900           27000
//    31        961           29791
//    32       1024           32768
//    33       1089           35937
//    34       1156           39304
//    35       1225           42875
//    36       1296           46656
//    37       1369           50653
//    38       1444           54872
//    39       1521           59319
//    40       1600           64000

}

void exercise06_16_04() {
    char target = 'R', start = 'A';
    int rows = target - 'A' + 1, maxSize = (target - 'A') * 2 + 1;
    for (int i = 0; i < rows; ++i) {
        //每一行的字母数：2i+1,左右空白数：（maxSize -(2i+1)）/2;
        int charCount = 2 * i + 1, blank = (maxSize - charCount) / 2;
        for (int j = 0; j < blank; ++j) {
            printf(" ");
        }
        for (int k = 0; k < charCount; ++k) {
            //中间字：'A'+i  charCount-1 / 2
            printf("%c", (unsigned char) (fabs(i - k) + start));
        }
        for (int l = 0; l < blank; ++l) {
            printf(" ");
        }
        printf("\n");
    }
//    A
//            BAB
//    CBABC
//            DCBABCD
//    EDCBABCDE
//            FEDCBABCDEF
//    GFEDCBABCDEFG
//            HGFEDCBABCDEFGH
//    IHGFEDCBABCDEFGHI
//            JIHGFEDCBABCDEFGHIJ
//    KJIHGFEDCBABCDEFGHIJK
//            LKJIHGFEDCBABCDEFGHIJKL
//    MLKJIHGFEDCBABCDEFGHIJKLM
//            NMLKJIHGFEDCBABCDEFGHIJKLMN
//    ONMLKJIHGFEDCBABCDEFGHIJKLMNO
//            PONMLKJIHGFEDCBABCDEFGHIJKLMNOP
//    QPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQ
//            RQPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQR

}

void exercise06_16_03() {
    int rows = 26;
    char start = 'A';
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", start + rows - 1 - j);
        }
        printf("\n");
    }
//    F
//            FE
//    FED
//            FEDC
//    FEDCB
//            FEDCBA
}

void exercise06_16_02() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("$");
        }
        printf("\n");
    }
//    $
//            $$
//    $$$
//            $$$$
//    $$$$$
}

void exercise06_16_01() {
    char elements[26];
    char start = 'a';
    for (int i = 0; i < 26; ++i) {
        elements[i] = start + i;
    }
    for (int j = 0; j < 26; ++j) {
        printf("%c ", elements[j]);
    }
//    a b c d e f g h i j k l m n o p q r s t u v w x y z
//    Process finished with exit code 61
}

void exercise06_15_14() {
    int i;
    for (i = 1, printf("%d:Hi!\n", i); printf("i = %d\n", i), i * i < 26; i += 2, printf("Now i = %d\n", i)) {
        printf("i = %d in the loop.\n", i);
    }
//    1:Hi!
//                i = 1
//    i = 1 in the loop.
//            Now i = 3
//    i = 3
//    i = 3 in the loop.
//            Now i = 5
//    i = 5
//    i = 5 in the loop.
//            Now i = 7
//    i = 7
}

void exercise06_15_13() {
    long value = returnlong();
    value = powerful(3);
}

long powerful(int i) {
    return i * i;
}

long returnlong() {
    return 0;
}

void exercise06_15_11() {
    int by_twos[8];
    for (int i = 0; i < 8; ++i) {
        by_twos[i] = 2 * (i + 1);
    }
    for (int j = 0; j < 8; ++j) {
        printf("%d ", by_twos[j]);
    }
    printf("\n");
//    2 4 6 8 10 12 14 16

}

void exercise06_15_10() {
    double mint[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &mint[i]);
    }
    printf("The whole array contains:\n");
    for (int j = 0; j < 10; ++j) {
        printf("%lf ", mint[j]);
    }
//    1
//    2
//    3
//    1
//    3
//    1
//    0.8
//    3.14
//    2.71
//    0.618
//    The whole array contains:
//    1.000000 2.000000 3.000000 1.000000 3.000000 1.000000 0.800000 3.140000 2.710000 0.618000

}

void exercise06_15_08() {
    char ch;
//    scanf("%c",&ch);
    do {
        scanf("%c", &ch);
        printf("%c", ch);
    } while (ch != 'g');

//    Go west,young men!
//            Go west,youn

//    Go west,young men!
//            Hp!xftu-zpvo


//    Go west,young men!
//            Go west,young

    printf("\n");
    scanf("%c", &ch);
    for (char i = '$'; i != 'g'; scanf("%c", &i)) {
        putchar(i);
    }
//            Go west,young men!
//            Go west,youn
}

void exercise06_15_07() {
    int i = 0;
    while (++i < 4) {
        printf("Hi!");
    }
    do
        printf("Bye!");
    while (i++ < 8);
    printf("\n");

    for (int j = 0, ch = 'A'; j < 4; ++j, ch += 2 * j) {
        printf("%c", ch);
    }
//    Hi!Hi!Hi!Bye!Bye!Bye!Bye!Bye!
//            ACGM
}

void exercise06_15_06() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("$");
        }
        printf("\n");
    }
//    $$$$$$$$
//            $$$$$$$$
//    $$$$$$$$
//            $$$$$$$$
}

void exercise06_15_05() {
    int i, j, list[10];
    for (i = 1; i <= 10; ++i) {
        list[i - 1] = 2 * i + 3;
        for (j = 0; j < i; ++j) {
            printf(" %d", list[j]);
        }
    }
    printf("\n");
}

void exercise06_15_04() {
    int x;
    _Bool flag = x > 5;
    flag = scanf("%d", &x) != 1;
    flag = x == 5;
}

void exercise06_15_02() {
    for (int i = 36; i > 0; i /= 2) {
        printf("%3d\n", i);
    }
//    36
//    18
//    9
//    4
//    2
//    1
}

void exercise06_15_01() {
    int quack = 2;
    printf("quack = %d\n", quack += 5);//quack = 7
    printf("quack = %d\n", quack *= 10);//quack = 70
    printf("quack = %d\n", quack -= 6);//quack = 64
    printf("quack = %d\n", quack /= 8);//quack = 8
    printf("quack = %d\n", quack %= 3);//quack = 2
}




