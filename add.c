#include <stdio.h>

int main() {
    char name[50];
    printf("========== Welcome Program ==========\n");
    printf("Hello, World!\n");

    printf("What's your name? ");
    scanf("%[^\n]", name);
