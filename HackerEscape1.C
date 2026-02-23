#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char input[50];
    int num;
    int attempts;

    printf("=====================================\n");
    printf("     WELCOME TO HACKER ESCAPE SYSTEM\n");
    printf("=====================================\n");

    /* ================= LEVEL 1 ================= */
    printf("\nLEVEL 1: PASSWORD AUTHENTICATION\n");

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Attempt %d of 3\n", attempts);
        printf("Enter Password: ");
        scanf("%s", input);

        if (strcmp(input, "hacker123") == 0) {
            printf("Access Granted!\n");
            break;
        } else {
            printf("Wrong Password!\n");
        }
    }

    if (attempts > 3) {
        printf("3 Wrong Attempts! System Locked.\n");
        exit(0);
    }

    /* ================= LEVEL 2 ================= */
    printf("\nLEVEL 2: DECRYPTION CHALLENGE\n");
    printf("Encrypted Text: KHOOR\n");
    printf("Hint: Shift each letter 3 positions back\n");

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Attempt %d of 3\n", attempts);
        printf("Enter Decrypted Text: ");
        scanf("%s", input);

        if (strcmp(input, "HELLO") == 0) {
            printf("Correct Answer!\n");
            break;
        } else {
            printf("Wrong Answer!\n");
        }
    }

    if (attempts > 3) {
        printf("3 Wrong Attempts! System Locked.\n");
        exit(0);
    }

    /* ================= LEVEL 3 ================= */
    printf("\nLEVEL 3: LOGIC PUZZLE\n");
    printf("I am a 3-digit number.\n");
    printf("Sum of digits = 15\n");
    printf("Middle digit = 5\n");

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Attempt %d of 3\n", attempts);
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num == 555) {
            printf("Correct Answer!\n");
            break;
        } else {
            printf("Wrong Answer!\n");
        }
    }

    if (attempts > 3) {
        printf("3 Wrong Attempts! System Locked.\n");
        exit(0);
    }

    /* ================= LEVEL 4 ================= */
    printf("\nLEVEL 4: FINAL ESCAPE\n");
    printf("Enter Master Key\n");

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Attempt %d of 3\n", attempts);
        printf("Master Key: ");
        scanf("%s", input);

        if (strcmp(input, "hacker123HELLO555") == 0) {
            printf("\nSYSTEM UNLOCKED!\n");
            printf("YOU HAVE SUCCESSFULLY ESCAPED!\n");
            return 0;
        } else {
            printf("Wrong Master Key!\n");
        }
    }

    printf("3 Wrong Attempts! System Locked.\n");
    return 0;
}
