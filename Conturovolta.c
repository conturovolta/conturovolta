#include <stdio.h>
#include <string.h>

int main() {
    int count[10] = {0}; 
    char str[1001]; 

    if (scanf("%[^\n]", str) != 1) {
        return 0; 
    }

   
    int len = strlen(str); 

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count[str[i] - '0']++; 
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}