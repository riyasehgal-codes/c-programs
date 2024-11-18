#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalidrome(char str);
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Taking string input (no spaces)

    // Call the function and check the result
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;  // Not a palindrome
        }
        left++;
        right--;
    }

    return 1;  // It's a palindrome
}

  



// #include <stdio.h>
// #include<string.h>
// #include<ctype.h>

// int palendrome( char britney);

// int main(){
//     char britney[100];
//     printf("enter string without space");
//     scanf("%s", &britney);

//     if (palendrome(britney))
//         printf("palendrome");
//     else    
//         printf("NOt palendrome");

// }

// int palendrome( char britney) {
//     left=0;
//     right= strlen(britney)-1;
    
//     while ( left<right) {
//          if (str[right]!= str[left] ) 
//             return 0;
//         left++;
//         right--;
        
            
//     }
//     return 0;
// }

