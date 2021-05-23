#include <stdio.h>

void main() {
    char name[64];
    printf("Please enter your name: ");
    if (fgets(name, sizeof name, stdin)) {
        printf("Hello %s", name);
    }
}
