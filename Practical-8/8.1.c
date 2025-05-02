//8.1.a
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("length string: %lu", strlen(str));
    return 0;
}

//8.1.b
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Uppercase: %s\n", strupr(str));
    printf("Lowercase: %s\n", strlwr(str));
    return 0;
}

//8.1.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Reversed String: %s", strrev(str));
    return 0;
}

//8.1.d
#include <stdio.h>
#include <string.h>

int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    gets(src);

    strcpy(dest, src);
    printf("Copied string = %s", dest);
    return 0;
}

//8.1.e
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}

//8.1.f
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");
    return 0;
}
