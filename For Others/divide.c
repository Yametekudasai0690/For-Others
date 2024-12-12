#include <stdio.h>

int main() {
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        // If the number is even, skip the rest of the loop and continue with the next iteration
        if (i % 2 == 0) {
            // continue;
        printf("%d ", i);
        }
        
        // This will only be printed for odd numbers
    }

    return 0;
}
