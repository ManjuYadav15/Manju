#include <stdio.h>
int main()
{
    char c
    int isLVowel, isUVowel;
     scanf("%c",&c);
        isLVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        isUVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
       if (isLVowel || isUVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
