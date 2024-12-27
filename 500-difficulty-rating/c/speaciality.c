#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z); 
        if (X > Y && X > Z) {
            printf("Setter\n");
        } else if (Y > X && Y > Z) {
            printf("Tester\n");
        } else {
            printf("Editorialist\n");
        }
    }
    
    return 0;
}
