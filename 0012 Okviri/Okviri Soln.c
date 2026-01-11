#include <stdio.h>
#include <string.h>

int main() {
    char x[15]="";
    scanf("%s",x);
    printf(".");
    for(int i=0; i<strlen(x); i++) {
        if((i+1)%3==0) {
            printf(".*..");
        } else {
            printf(".#..");
        }
    }
    printf("\n");
    printf(".");
    for(int i=0; i<strlen(x); i++) {
        if((i+1)%3==0) {
            printf("*.*.");
        } else {
            printf("#.#.");
        }
    }
    printf("\n");
    for(int i=0; i<strlen(x); i++) {
        if(((i+1)%3==1 || (i+1)%3==0) && i!=0) {
            printf("*.%c.",x[i]);
        } else {
            printf("#.%c.",x[i]);
        }
    }
    if(strlen(x)%3!=0) {
        printf("#");
    } else {
        printf("*");
    }
    printf("\n");
    printf(".");
    for(int i=0; i<strlen(x); i++) {
        if((i+1)%3==0) {
            printf("*.*.");
        } else {
            printf("#.#.");
        }
    }
    printf("\n");
    printf(".");
    for(int i=0; i<strlen(x); i++) {
        if((i+1)%3==0) {
            printf(".*..");
        } else {
            printf(".#..");
        }
    }
    printf("\n");
}
