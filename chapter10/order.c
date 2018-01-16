//  Author:Zheng Jun
//  Date:2018/1/16
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int data[2] ={100, 200};
int moredata[2] ={300,400};

int od(){
    int *p1,*p2,*p3;
    p1=p2=data;
    p3=moredata;
    printf(" *p1= %d, *p2= %d, *p3= %d\n",*p1,*p2,*p3);
    printf(" *p1++= %d, *++p2= %d, (*p3)++= %d\n",*(p1++),*++p2,(*p3)++);
    printf(" *p1= %d, *p2= %d, *p3= %d\n",*p1,*p2,*p3);
    return 0;
}
//*p1= 100, *p2= 100, *p3= 300
//*p1++= 100, *++p2= 200, (*p3)++= 300
//*p1= 200, *p2= 200, *p3= 301