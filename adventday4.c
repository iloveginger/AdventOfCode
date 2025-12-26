#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char arr[11][4] = {"13","-6","-10","19","14","6","+","-5","C","20","C"};
    int arr2[11] = {0};
    int currpos = 0;
    int total = 0;

    for (int i = 0; i < 11; i++) {
        int num = atoi(arr[i]);
        if (strcmp(arr[i], "+")==0) {
            arr2[currpos] = arr2[currpos - 1] + arr2[currpos - 2];
            currpos++;
        }
        else if (strcmp(arr[i], "C")==0) {
            arr2[currpos] = 0;
            currpos--;
        }
        else if(strcmp(arr[i], "D")==0){
            arr2[currpos] = arr2[currpos]*2;
            currpos++;
        }
        else {
            arr2[currpos++] = num;
        }
    }

    for (int i = 0; i < 11; i++) {
        printf("%d\n",arr2[i]);
    }
    for (int i = 0; i < currpos; i++) {
        total += arr2[i];
    }

    printf("Result: %d\n", total);
    return 0;
}
