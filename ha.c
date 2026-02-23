#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char username[20], password[20];

    printf("=== CYBER DEFENSE SIMULATOR ===\n");
    printf("Login as Ethical Hacker\n");

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    if(strcmp(username, "admin")==0 && strcmp(password, "secure123")==0) {
        printf("Login Successful!\n");
    } else {
        printf("Access Denied!\n");
        return 0;
    }

    srand(time(0));
    int attack = rand() % 3;

    printf("\nCyber Attack Detected!\n");

    if(attack == 0)
        printf("Attack Type: Brute Force\n");
    else if(attack == 1)
        printf("Attack Type: Phishing\n");
    else
        printf("Attack Type: Malware\n");

    printf("Mission Continue...\n");

    return 0;
}
