#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define size 200
union my_charector{
    char ch;
    uint8_t num;
};

void sum_of_ascii_charectors(char name[size]){
    union my_charector m1;
    int sum=0;
    int i=0;
    while(name[i]!='\0'){
        m1.num=name[i];
        printf("ASCII Value --> %x\n",m1.num);
        i++;
    }
    for(int j=0;j<strlen(name);j++){
        sum=sum+name[j];
    }
    printf("SUM of ASCII Values --> %X\n",sum);
    
}