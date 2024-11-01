/*
 * CS1111 strings.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 11/1/2024
 */




#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Start the code
int main(){

        //Declare the char strings and other variables  
        int i,j,count;
        char *buffer = malloc(1024);
        char temp[25];

        //Scans for amount of imputs
        scanf("%d",&count);

        //Buffers
        char **str = malloc(sizeof(char*)*count);

        //For loop for buffering string
        for(int i = 0; i < count+1; i++)
        {
        fgets(buffer, 1024, stdin);
        buffer[strnlen(buffer, 1024) - 1] = 0;
        str[i] = malloc(strnlen(buffer, 1024) + 1);

        if(!str[i])
        {
            printf("Failed to allocate!\n");
            return -1;
        }

        strncpy(str[i], buffer, strnlen(buffer, 1024) + 1);
         }

        //Prints out the input
        for(int i = 0; i < count+1; i++)
         {
        printf("%s\n", str[i]);
         }

        //Sorts the string in alpha order
        for(i=0;i<=count+1;i++)
           for(j=i+1;j<=count;j++){
              if(strcmp(str[i],str[j])>0){
               strcpy(temp,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],temp);
         }
      }

        //Prints out alpha order
        printf("Order of Sorted Strings:");
        for(i=0;i<=count;i++)
             puts(str[i]);

   return 0;
}
~                                                                                                                                                                                                                                             
                                                                                                                                                                                                                            58,1-8        Bot

