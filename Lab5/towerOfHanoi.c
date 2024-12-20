#include <stdio.h>


void towerOfHanoi(int n, char source, char temp, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source,destination);
        return;
    }


    towerOfHanoi(n - 1, source, destination,temp);
    printf("Move disk %d from %c to %c\n", n, source,destination);

    towerOfHanoi(n - 1, temp,source,destination);
}

void main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
}

