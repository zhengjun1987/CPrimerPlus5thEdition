//  Author:Zheng Jun
//  Date:2018/2/9 14:16
//  E-mail:zhengjun1987@outlook.com

static unsigned long int next = 1;

int rand0(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}