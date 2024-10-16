//tower of hanoi //samajh lena bhai mere
#include <stdio.h>

// Function to move disks from source peg to destination peg
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move top n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks = 3; // Number of disks
    char sourcePeg = 'A';
    char auxiliaryPeg = 'B';
    char destinationPeg = 'C';

    printf("Tower of Hanoi solution for %d disks:\n", numDisks);
    towerOfHanoi(numDisks, sourcePeg, auxiliaryPeg, destinationPeg);

    return 0;
}