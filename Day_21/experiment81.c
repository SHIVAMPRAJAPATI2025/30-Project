// 	Write a program to Find string length without strlen().	
#include<stdio.h>
int main () {
    char str[100];
    int i = 0;
    printf("Enter a String: ");
    scanf("%s", str);
    while(str[i] != '\0') {
        i++;
    }
    printf("Length of string = %d\n", i);
    return 0;
}