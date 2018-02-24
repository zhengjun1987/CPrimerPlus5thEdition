//  Author:Zheng Jun
//  Date:2018/2/24 23:06
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define LEN 20

struct names{
    char first[LEN];
    char last[LEN];
};

struct guy{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int frs(){
    struct guy fellow[2] = {
            {
                    {"Ewen","Villard"},
                    "grilled salmon",
                    "personality coach",
                    58112.0
            },
            {
                    {"Rodney","Swillbelly"},
                    "stripe",
                    "tabloid editor",
                    232400.0
            }
    };
    struct guy * him;
    printf("address: #1:%p #2:%p\n",&fellow[0],&fellow[1]);
    him = &fellow[0];
    printf("address: #1:%p #2:%p\n",him,him+1);
    printf("him->income is $%.2f:(*him).income is $%.2f\n",him->income,(*him).income);
    him++;
    printf("him->favfood is %s:him->handle.last is %s\n",him->favfood,him->handle.last);

    return 0;
}
//address: #1:0x7ffee110b740 #2:0x7ffee110b794
//address: #1:0x7ffee110b740 #2:0x7ffee110b794
//him->income is $58112.00:(*him).income is $58112.00
//him->favfood is stripe:him->handle.last is Swillbelly
//
//        Process finished with exit code 0

