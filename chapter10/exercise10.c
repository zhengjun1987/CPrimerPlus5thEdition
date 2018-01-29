//  Author:Zheng Jun
//  Date:2018/1/20
//  E-mail:zhengjun1987@outlook.com

void e10_12_01();

void e10_12_02();

void e10_12_04();

int main(){
//    e10_12_01();
//    e10_12_02();
//    e10_12_04();

    return 0;
}

void e10_12_04() {
    int *ptr;
    int fort[2][2]={{12},{14,16}};
    ptr = fort[0];
    printf("*ptr = %d\n",*ptr);
    printf("*(ptr+2) = %d\n",*(ptr+2));
    printf("*(ptr+1) = %d\n",*(ptr+1));
//    *ptr = 12
//    *(ptr+2) = 14
//    *(ptr+1) = 0

}

void e10_12_02() {
    int *ptr;
    int torf[2][2]={12,14,16};
    ptr = torf[0];
    printf("*ptr = %d\n",*ptr);
    printf("*(ptr+2) = %d\n",*(ptr+2));
//    *ptr = 12
//    *(ptr+2) = 16
}

void e10_12_01() {
    int ref[] = {8, 4, 0, 2};
    int *ptr,i;
    for (ptr = ref,i = 0; i < 4; ++i) {
        printf("%d %d\n",ref[i],*ptr);
    }
//    8 8
//    4 8
//    0 8
//    2 8
}