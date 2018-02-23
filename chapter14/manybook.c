//  Author:Zheng Jun
//  Date:2018/2/12 16:02
//  E-mail:zhengjun1987@outlook.com


#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int mnybk() {
    struct book library[MAXBKS];
    puts("Enter the title of the book(empty line to stop):");
    int count = 0;
    while (count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0') {
        puts("Now enter the author:");
        gets(library[count].author);
        puts("Now enter the price:");
        scanf("%f",&library[count++].value);
        while (getchar()!='\n'){
            continue;
        }
        if (count<MAXBKS)
            puts("Enter the next book title:");
    }
    if(count>0){
        puts("Here is the list of your books:");
        for (int i = 0; i < count; ++i) {
            printf("%s by %s: $%.2f\n",library[i].title,library[i].author,library[i].value);
        }
    } else {
        puts("Empty library!");
    }
    return 0;
}
//Enter the title of the book(empty line to stop):
//红楼梦
//Now enter the author:
//曹雪芹
//Now enter the price:
//35
//Enter the next book title:
//三国演义
//Now enter the author:
//罗贯中
//Now enter the price:
//39
//Enter the next book title:
//水浒传
//Now enter the author:
//施耐庵
//Now enter the price:
//34
//Enter the next book title:
//西游记
//Now enter the author:
//吴承恩
//Now enter the price:
//38
//Enter the next book title:
//
//Here is the list of your books:
//红楼梦 by 曹雪芹: $35.00
//三国演义 by 罗贯中: $39.00
//水浒传 by 施耐庵: $34.00
//西游记 by 吴承恩: $38.00
//
//Process finished with exit code 0