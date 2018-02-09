//  Author:Zheng Jun
//  Date:2018/2/9 14:32
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
int rand1(void);
void srand1(unsigned int seed);
int rd1(){
    int count;
    unsigned seed;
    puts("Please enter your choice for seed:");
    while(scanf("%u",&seed)==1){
        srand1(seed);
        for (int i = 0; i < 5; ++i) {
            printf("loop%d--random:%hu\n",i,rand1());
        }
        puts("Please enter next seed:");
    }
    puts("Done!");
    return 0;
}
//Please enter your choice for seed:
//1
//loop0--random:16838
//loop1--random:5758
//loop2--random:10113
//loop3--random:17515
//loop4--random:31051
//Please enter next seed:
//513
//loop0--random:20067
//loop1--random:23475
//loop2--random:8955
//loop3--random:20841
//loop4--random:15324
//Please enter next seed:
//1
//loop0--random:16838
//loop1--random:5758
//loop2--random:10113
//loop3--random:17515
//loop4--random:31051
//Please enter next seed:
//q
//        Done!
//
//Process finished with exit code 0