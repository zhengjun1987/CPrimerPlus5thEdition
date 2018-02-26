//  Author:Zheng Jun
//  Date:2018/2/26 23:03
//  E-mail:zhengjun1987@outlook.com

/* 把结构内容保存至文件 */

#include <stdio.h>
#include <stdlib.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAXBOOKS 10
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main() {
    struct book library[MAXBOOKS];
    int index, filecount, count = 0, size = sizeof(struct book);
    FILE *books;
    if ((books = fopen("books.dat", "a+b")) == NULL) {
        fprintf(stderr, "Cannot open file book.dat!");
        exit(EXIT_FAILURE);
    }
    rewind(books);
    while (count < MAXBOOKS && fread(&library, size, 1, books) == 1) {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s :$%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBOOKS) {
        fprintf(stderr, "The book.dat is full.");
        exit(2);
    }
    puts("Please add new book titles.\nPress [ENTER] at the start of a line to stop.");
    while (count < MAXBOOKS && gets(library[count].title) != NULL && library[count].title[0] != '\0') {
        puts("Now enter the author:");
        gets(library[count].author);
        puts("Now enter the value:");
        scanf("%f",&library[count].value);
        while (getchar()!='\n')
            continue;
        count++;
        if(count<MAXBOOKS)
            puts("Enter the next title:");
    }
    if (count>0){
        puts("Here is a list of books:");
        for (int i = 0; i < count; ++i) {
            printf("%s by %s :$%.2f\n",library[i].title,library[i].author,library[i].value);
            fwrite(&library[filecount],size,count-filecount,books);
        }
    } else
        puts("No books?Too bad!");
    puts("Bye!");
    fclose(books);
    return 0;
}