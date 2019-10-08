#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
   
   
    int k = atoi(argv[1]); //key


    if (argc == 2 & k > 0)
    {
        printf("Success\n");
         printf("%i\n",k);

        printf("plaintext: ");
        string s = get_string("");
        printf("ciphertext: ");        
        for (int i = 0; i < strlen(s); i++)
        { 
             if (isalpha(s[i]))
            {
               if (isupper(s[i]))
               {
                    printf("%c", (((s[i] - 'A') + k) % 26) + 'A');
               }
               else
               {
                    printf("%c", (((s[i] - 'a') + k) % 26) + 'a');
                }
           }
     
       }
          printf(" \n");

    
    }
    
 
    else
    {
        printf("Usage: ./caesar key\n");
    }

    
    
     
    
    
}
