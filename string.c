//
// Created by 阮亦旸 on 2017/3/10.
// 字符串倒序
//
#include <stdio.h>
#include "string.h"
#include "math.h"
char reverse(char *string1);
void main(void)
{
    char strings[]="sdunununurfvrrininunrunu";
    printf("please input a string, and you will get a reverse string\n");
    scanf("%s",&strings);
    reverse(strings);
    printf("the request\n%s",strings);
}
char reverse (char *string)
{
    int size,i;
    size=(int)strlen(string);
    char changestring[size];
    for(i=size-1;i>=0;i--)
    {
        *(changestring+size-i-1)=*(string+i);
    }
    strncpy(string,changestring,size-1);

}
