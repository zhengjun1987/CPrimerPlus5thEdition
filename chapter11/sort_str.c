//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <memory.h>

#define LIM 20

#define SIZE 81

void stresort(char *pString[], int count);

void stresort_burble(char *pString[], int count);

int stsort() {
    char input[LIM][SIZE];
    char *ptr[LIM];
    int count = 0;
    printf("Enter up to %d lines, and I will sort them.\n", LIM);
    puts("To stop,press Enter key at a line's start.");
    while (count < LIM && gets(input[count]) != NULL && input[count][0] != '\0') {
        ptr[count] = input[count];
        count++;
    }
    putchar('\n');
//    stresort(ptr,count);//选择排序
    stresort_burble(ptr, count);//冒泡排序
    puts("\nHere is the sorted list:");
    for (int i = 0; i < count; ++i) {
        puts(*(ptr + i));
    }
    return 0;
}

void stresort_burble(char *pString[], int count) {
    char *temp;
    for (int i = count - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (strcmp(pString[j], pString[j + 1]) > 0) {
                temp = pString[j];//注意参数符号
                pString[j] = pString[j + 1];
                pString[j + 1] = temp;
            }
        }
    }
}
//Enter up to 20 lines, and I will sort them.
//To stop,press Enter key at a line's start.
//warning: this program uses gets(), which is unsafe.
//edison
//canon
//david
//barry
//aron
//
//Here is the sorted list:
//aron
//barry
//canon
//david
//edison
//
//Process finished with exit code 0

/* 选择排序：依次选一个与余下的比小，小的那个往前排 */
void stresort(char *pString[], int count) {
    char *temp;
    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (strcmp(pString[i], pString[j]) > 0) {
                temp = pString[i];
                pString[i] = pString[j];
                pString[j] = temp;
            }
        }
    }
}
//Enter up to 20 lines, and I will sort them.
//To stop,press Enter key at a line's start.
//warning: this program uses gets(), which is unsafe.
//O that I was where I would be.
//Then would I be where I am not?
//But where I am I must be ?
//And where I would be I can not.
//
//
//Here is the sorted list:
//And where I would be I can not.
//But where I am I must be ?
//O that I was where I would be.
//Then would I be where I am not?
//
//Process finished with exit code 0