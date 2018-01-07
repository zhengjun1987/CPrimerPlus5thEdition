//  Author:Zheng Jun
//  Date:2018/1/7
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void vw(){
    char ch;
    int a_ct,e_ct,i_ct,o_ct,u_ct;
    a_ct = e_ct=i_ct=o_ct=u_ct=0;
    printf("Enter some text to analysis(Enter # to quit):\n");
    while ((ch=getchar())!='#'){
        switch (ch){
            case 'a':
            case 'A':
                a_ct++;
                break;
            case 'e':
            case 'E':
                e_ct++;
                break;
            case 'i':
            case 'I':
                i_ct++;
                break;
            case 'o':
            case 'O':
                o_ct++;
                break;
            case 'u':
            case 'U':
                u_ct++;
                break;
            default:
                break;
        }
    }
    printf("Numbers of vowels:  A  E  I  O  U\n");
    printf("                   %2d %2d %2d %2d %2d\n",a_ct,e_ct,i_ct,o_ct,u_ct);
}
//Enter some text to analysis(Enter # to quit):
//CPrimerPlus5thEdition zhengjun$ git status --short#
//Numbers of vowels:  A  E  I  O  U
//                    1  3  4  2  3
//
//Process finished with exit code 34