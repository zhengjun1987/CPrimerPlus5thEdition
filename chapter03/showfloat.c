//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>
void sf(){
    float about = 3200.0;
    double abet = 2.14e9;
    double dip = 5.32e-5;
    printf("%f can be written %e\n",about,about);
    printf("%f can be written %e\n",abet,abet);
    printf("%lf can be written %e\n",dip,dip);
//    3200.000000 can be written 3.200000e+03
//    2140000000.000000 can be written 2.140000e+09
//    0.000053 can be written 5.320000e-05 注意3后面的那个2！！！
    float toobig = 3.4E38 * 100;
    printf("toobig = %e\n",toobig);//toobig = inf
}