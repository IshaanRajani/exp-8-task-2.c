/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

  wap to check if the entered string is palindrome or not*/
#include <stdio.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = 0;

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0'; 
            break;
        }
        i++;
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
/*output:
        Enter a string: rude
The string is not a palindrome.
*/