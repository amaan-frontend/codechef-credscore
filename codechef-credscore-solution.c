#include <stdio.h>

int main() {
    int creditScore;
    scanf("%d", &creditScore);

    if (creditScore >= 750) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
