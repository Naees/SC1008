/*encodeChar
Write a function that accepts two character strings s and t, an array of structures and the
size of array as parameters, encodes the characters in s to t, and passes the encoded string t
to the caller via call by reference. During the encoding process, each source character is
converted into the corresponding code character based on the user defined rules. For other
source characters, the code will be the same as the source. In addition, write a function
createTable() that accepts two parameters, table and size. It allows users to define encoding
rules in table. For example, when the following rules 'a'→'d'; 'b'→'z'; 'z'→'a'; 'd'→'b' are
defined with size = 4, if the character string s is "abort", then the encoded string t will be
"dzort". The structure Rule is defined below:
typedef struct {
char source;
char code;
} Rule;
The function prototypes are given below:
void createTable(Rule *table, int *size);
void encodeChar(Rule *table, int size, char *s, char *t);*/

#include <stdio.h>
#include <string.h>
typedef struct {
    char source;
    char code;
} Rule;
void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);
int main()
{
    char s[80], t[80], dummychar, *p;
    int size, choice;
    Rule table[100];
    printf("Select one of the following options:\n");
    printf("1: createTable()\n");
    printf("2: printTable()\n");
    printf("3: encodeChar()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("createTable(): \n");
            createTable(table, &size);
            break;
        case 2:
            printf("printTable(): \n");
            printTable(table, size);
            break;
        case 3:
            scanf("%c",&dummychar);
            printf("Source string: \n");
            fgets(s, 80, stdin);
            if (p=strchr(s,'\n')) *p = '\0';
                encodeChar(table,size,s,t);
            printf("Encoded string: %s\n", t);
            break;
        default:
        break;
            }
        } 
        while (choice < 4);
    return 0;
}
void printTable(Rule *table, int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("%d: %c->%c\n", i+1, table->source, table->code);
        table++;
    }
}
void createTable(Rule *table, int *size)
{
    int i;
    /* Write your code here */
    printf("Enter number of rules:\n");
    scanf("%d", size);
    for (i = 0; i < *size; i++){
        printf("Enter rule %d\n", i+1);
        printf("Enter source character:\n");
        scanf(" %c", &table[i].source);
        printf("Enter code character:\n");
        scanf(" %c", &table[i].code);
    }
}
void encodeChar(Rule *table, int size, char *s, char *t)
{
    /* Write your code here */
    int i, j;
    for (i = 0; s[i]!= '\0'; i++){
        int found = 0;
        for (j = 0; j < size; j++){
            if (s[i] == table[j].source){
                t[i] = table[j].code;
                found = 1;
            }
        }
        if (found == 0)
            t[i] = s[i];
    }
    t[i] = '\0';
}