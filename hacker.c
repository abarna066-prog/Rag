#include <stdio.h>
#include <string.h>

int main() {
    int password, choice;
    char answer[20];

    printf("=== HACKER ESCAPE GAME ===\n");

    // Stage 1
    for(int i=1; i<=3; i++) {
        printf("Enter 4-digit password: ");
        scanf("%d", &password);

        if(password == 1234) {
            printf("Access Granted!\n");
            break;
        } else {
            printf("Wrong Password!\n");
        }

        if(i == 3) {
            printf("System Locked!\n");
            return 0;
        }
    }

    // Stage 2
    printf("\nDecode this: IFMMP\n");
    printf("Enter decoded word: ");
    scanf("%s", answer);

    if(strcmp(answer, "HELLO") != 0) {
        printf("Wrong Decode! System Crash!\n");
        return 0;
    }

    printf("Correct! Moving to final stage.\n");

    // Stage 3
    printf("\nChoose Exit Path:\n");
    printf("1. Firewall Tunnel\n");
    printf("2. Virus Server\n");
    printf("3. Backup Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 3) {
        printf("🎉 You Escaped Successfully!\n");
    } else {
        printf("💀 System Destroyed!\n");
    }

    return 0;
}
