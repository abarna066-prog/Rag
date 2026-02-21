#include <stdio.h>
#include <string.h>
int main() {
    char username[20];
    char correct_username[] = "admin";
    int password;

    printf("Enter Username: ");
    scanf("%19s", username);   // Prevent buffer overflow

    printf("Enter Password: ");
    scanf("%d", &password);

    if(strcmp(username, correct_username) == 0 && password == 1234) {
        printf("\nLogin Successful");
    } else {
        printf("\nInvalid Username or Password");
    }

    return 0;
}
