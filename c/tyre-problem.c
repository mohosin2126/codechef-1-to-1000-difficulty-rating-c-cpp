#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        int total_tyres = (N * 2) + (M * 4);
        printf("%d\n", total_tyres);
    }

    return 0;
}
