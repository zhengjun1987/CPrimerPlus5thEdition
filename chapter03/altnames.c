//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>
#include <inttypes.h>

/*可移植的整数类型名称*/
int an() {
    int16_t me16 = 4593;
    printf("First,assume int16 is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next,let's not make any assumptions.\n");
    printf("Instead,use a \"macro\" from inttypes.h: ");
    printf("me16 = %" PRId16 "\n", me16);

    uint8_t big = 256;
    printf("big = %d , %ld ,%"PRId8"\n", big, big, big);//big = 0 , 0 ,0
    return 0;
}
//First,assume int16 is short: me16 = 4593
//Next,let's not make any assumptions.
//Instead,use a "macro" from inttypes.h: me16 = 4593
//
//Process finished with exit code 12


