#include <string.h>
#include <stdlib.h>

int main() {

    char input[50];
    int num;

    printf("=====================================\n");
    printf("     WELCOME TO HACKER ESCAPE SYSTEM\n");
    printf("=====================================\n");

    /* ================= LEVEL 1 ================= */
    printf("\nLEVEL 1: PASSWORD AUTHENTICATION\n");
    printf("Only ONE attempt allowed!\n");
    printf("Enter Password: ");
    scanf("%s", input);

    if (strcmp(input, "hacker123") != 0) {
        printf("Access Denied! System Locked.\n");
        exit(0);
    }
    printf("Access Granted! Moving to Level 2...\n");

    /* ================= LEVEL 2 ================= */
    printf("\nLEVEL 2: DECRYPTION CHALLENGE\n");
    printf("Encrypted Text: KHOOR\n");
    printf("Hint: Shift each letter 3 positions back\n");
    printf("Only ONE attempt allowed!\n");
    printf("Enter Decrypted Text: ");
    scanf("%s", input);

    if (strcmp(input, "HELLO") != 0) {
        printf("Wrong Answer! System Locked.\n");
        exit(0);
    }
    printf("Correct! Moving to Level 3...\n");

    /* ================= LEVEL 3 ================= */
    printf("\nLEVEL 3: LOGIC PUZZLE\n");
    printf("Only ONE attempt allowed!\n");
    printf("I am a 3-digit number.\n");
    printf("Sum of digits = 15\n");
    printf("Middle digit = 5\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num != 555) {
        printf("Wrong Answer! Access Denied.\n");
        exit(0);
    }
    printf("Correct! Moving to Final Level...\n");

    /* ================= LEVEL 4 ================= */
    printf("\nLEVEL 4: FINAL ESCAPE\n");
    printf("Final chance! Enter Master Key: ");
    scanf("%s", input);

    if (strcmp(input, "hacker123HELLO555") == 0) {
        printf("\nSYSTEM UNLOCKED!\n");
        printf("YOU HAVE SUCCESSFULLY ESCAPED!\n");
    } else {
        printf("Wrong Master Key! System Locked.\n");
    }

    return 0;
}
