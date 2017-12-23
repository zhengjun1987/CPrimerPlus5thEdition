#include <printf.h>

/*把两个fathom转换成英尺*/

//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com

int ft(){
    int feet,fathoms;
    fathoms = 2;
    feet=6*fathoms;
    printf("There are %d feets in %d fathoms!\n",feet,fathoms);
    printf("Yes,I said %d feet!",6*fathoms);
    return 0;
}
//There are 12 feets in 2 fathoms!
//Yes,I said 12 feet!
//Process finished with exit code 0

