//  Author:Zheng Jun
//  Date:2018/2/9 14:47
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int rand1(void);
void srand1(unsigned int seed);

short auto_time_seed();

int ats(){
    for (int i = 0; i < 5; ++i) {
        printf("Get a random integer:%hd\n",auto_time_seed());
    }
}

short auto_time_seed() {
    unsigned int seed = (unsigned int) time(0);
    printf("seed:%u\n",seed);
    srand1(seed);
    return (short) rand1();
}
//seed:1518159142
//Get a random integer:21452
//seed:1518159142
//Get a random integer:21452
//seed:1518159142
//Get a random integer:21452
//seed:1518159142
//Get a random integer:21452
//seed:1518159142
//Get a random integer:21452
//
//Process finished with exit code 0