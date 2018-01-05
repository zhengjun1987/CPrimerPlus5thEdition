//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void main(){
    float length,width;
    printf("Enter the length of the rectangle:\n");
    while (scanf("%f",&length)==1){
        printf("Length = %.2f\n",length);
        printf("Enter the width:\n");
        if (scanf("%f",&width)!=1)
            break;
        printf("Width = %.2f\n",width);
        printf("Area = %.2f\n",width*length);
        printf("Enter the length of the rectangle:\n");
    }
}
//Enter the length of the rectangle:
//12
//Length = 12.00
//Enter the width:
//9
//Width = 9.00
//Area = 108.00
//Enter the length of the rectangle:
//12.2
//Length = 12.20
//Enter the width:
//9.8
//Width = 9.80
//Area = 119.56
//Enter the length of the rectangle:
//q
//
//Process finished with exit code 0