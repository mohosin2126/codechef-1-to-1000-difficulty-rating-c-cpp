#include <stdio.h>

int main() {
    int t, na, nb, nc;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &na, &nb, &nc);
        if (na > nb + nc || nb > na + nc || nc > na + nb) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
