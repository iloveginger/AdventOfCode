#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int count = 0;
    char s[]="ffxkVZQtqMnMcLR";
   
    for(int i = 0; i<sizeof(s)-2; i++){
        if(toupper(s[i])!=toupper(s[i+1])){
            count++;
        }
    }
    
    printf("The change of key is: %d", count);
    
}