// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
//     printf("Reversed array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     int evenCount = 0, oddCount = 0;
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     printf("Number of even numbers: %d\n", evenCount);
//     printf("Number of odd numbers: %d\n", oddCount);
//     return 0;
// }

#include <stdio.h>
int main() {
    char str[100];
    int i, v = 0, c = 0;
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                v++;
            else
                c++;
        }
    }
    
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    
    return 0;
}