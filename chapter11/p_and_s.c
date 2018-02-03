//  Author:Zheng Jun
//  Date:2018/2/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int ps(){
    char *mesg = "Don't be a fool!";
    char *copy;
    copy = mesg;
    printf("%s\n",copy);
    printf("mesg = %s;&mesg = %p;value = %p\n",mesg,&mesg,mesg);
    printf("copy = %s;&copy = %p;value = %p\n",copy,&copy,copy);
    return 0;
}
//Don't be a fool!
//mesg = Don't be a fool!;&mesg = 0x7ffeeee77810;value = 0x100d89f50
//copy = Don't be a fool!;&copy = 0x7ffeeee77808;value = 0x100d89f50