/*PigLatin
“PigLatin” is an English language game in which words are alternated based on the following
two simple rules:

Rule 1. If a word begins with one or more consonant letters (that is, any letter that is not ‘a’,
‘e’, ‘i’, ‘o’, ‘u’, or ‘y’ – ‘y’ is treated as a vowel if it is the first letter in a word), find the
substring that spans all consonants until a vowel is encountered, move this consonant
substring to the end of the word and then add “ay”. For example:

English PigLatin
simple → imples + ay → implesay
this → isth + ay → isthay
three → eethr + ay → eethray

Rule 2. If a word begins with a vowel or the letter ‘y’, then just add “ay” to the end of the
word. For example:

English PigLatin
a → aay
i → iay
apple → appleay
other → otheray
you → youay

PigLatin is often spoken when you do not want the listener to understand what you are
saying. For example, “ouray eachertay ookslay unnyfay”.

The C function PigLatin() converts English words to PigLatin based on the rules described
above. The function, PigLatin(), should convert the current English word from the pointer
parameter eword to PigLatin based on the two rules described above. The result should be
placed in the pointer parameter PLword.*/

#include <stdio.h>
#include <string.h>
void PigLatin(char *eword, char *PLword);
int main()
{
    char eword[80];
    char PLword[80];
    printf("Enter your English word: \n");
    scanf("%s", eword);
    PigLatin(eword, PLword);
    printf("PigLatin(): %s\n", PLword);
    return 0;
}
void PigLatin(char *eword, char *PLword)
{
    /* Write your code here */
    int i = 0;
    if (eword[0] == 'a'|| 
        eword[0] == 'e'||
        eword[0] == 'i'||
        eword[0] == 'o'||
        eword[0] == 'u'||
        eword[0] == 'y')
        {
            while (eword[i] != '\0'){
                PLword[i] = eword[i];
                i++;
            }
            PLword[i++] = 'a';
            PLword[i++] = 'y';
            PLword[i] = '\0';
        }
    else {
        while (eword[i] != 'a'&& 
            eword[i] != 'e'&&
            eword[i] != 'i'&&
            eword[i] != 'o'&&
            eword[i] != 'u'&&
            eword[i] != 'y')
            {
                i++;
        }
        int j = 0;
        int k = i;
        while (eword[k] != '\0'){
            PLword[j++] = eword[k++];
        }
        for (k = 0;k < i; k++){
            PLword[j++] = eword[k];
        }
        PLword[j++] = 'a';
        PLword[j++] = 'y';
        PLword[j] = '\0';
    }
}