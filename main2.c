#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;  

    printf("Enter contact name: ");
    scanf("%s", c.name);

    printf("Enter phone number: ");
    scanf("%s", c.phone);

    printf("\n--- Contact Saved ---\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);

    return 0;
}

