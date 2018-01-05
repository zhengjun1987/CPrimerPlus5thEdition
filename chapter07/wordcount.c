//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com
#include <stdbool.h>
#include <printf.h>

#define STOP '|'

void wc() {
    char c, prev;
    long n_chars = 0, n_lines = 0, n_words = 0, p_lines = 0;
    bool inword = false;
    printf("Enter the text to analysis (| to terminate).\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++;
        if (c == '\n')
            n_lines++;
        if (!isspace(c) && !inword) {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword) {
            inword = false;
        }
        prev = c;
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %ld,lines = %ld, partial lines = %ld\n", n_chars, n_words, n_lines, p_lines);
}
//Enter the text to analysis (| to terminate).
//Reason is a
//powerful servant but
//an inadequate master.
//|
//characters = 55, words = 9,lines = 3, partial lines = 0
//
//Process finished with exit code 56



//Enter the text to analysis (| to terminate).
//Kubernetes
//
//Kubernetes (commonly referred to as "K8s") is an open source system for automating deployment, scaling and management of containerized applications originally designed by Google and donated to the Cloud Native Computing Foundation. It aims to provide a "platform for automating deployment, scaling, and operations of application containers across clusters of hosts". It supports a range of container tools, including Docker.
//|
//characters = 437, words = 61,lines = 3, partial lines = 0
//
//Process finished with exit code 58