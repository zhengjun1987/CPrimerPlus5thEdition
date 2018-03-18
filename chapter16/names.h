//  Author:Zheng Jun
//  Date:2018/3/17 15:08
//  E-mail:zhengjun1987@outlook.com
//  多次包含保护

#ifndef NAMES_H_
#define NAMES_H_

#define slen 32
struct name_str {
    char first[slen];
    char last[slen];
};

typedef struct name_str names;

void get_names(names *pn);

void show_names(names *pn);

#endif