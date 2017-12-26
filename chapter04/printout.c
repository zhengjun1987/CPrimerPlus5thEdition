//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void po(){
    int num = 5,cost = 3100;
    float expresso = 13.5,pi = 3.141593;
    printf("The %d CEOs drank %f cups of expresso.\n",num,expresso);
    printf("The value of pi is %f.\n",pi);
    printf("Farewell! thou art too dear for my possessing.\n");
    printf("%c%d\n",'$',2*cost);

    int percent = 2*6;
    printf("Only %d%% of Sally's gribbles were edible.\n",percent);//Only 12% of Sally's gribbles were edible.
}
//The 5 CEOs drank 13.500000 cups of expresso.
//The value of pi is 3.141593.
//Farewell! thou art too dear for my possessing.
//$6200