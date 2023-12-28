#include <stdio.h>

void printStr(char arr[]);

int main(){
    char firstName[] = "Amit";
    char lastName[] = "Biswas";
    printf("printed this name using for loop > ");
    printStr(firstName);
    printStr(lastName);

    //taking inputs and then printing them using "%s"
    char fullName[50];
    printf("\n");
    scanf("%s", fullName);
    printf("printed name using string format specifier > %s", fullName);

    //taking intput using fgets and giving output using puts
    char para[110];
    gets(para);
    puts(para);

    return 0;
}
//printing strings using a function 
void printStr(char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf(" ");
}