/* String inversa */
#include <stdio.h>
#include <string.h>

main(){
    int cnt=0, count, i;
    char str1[100], str2[100];
    puts("Insira uma frase a ser invertida: ");
    gets(str1);
    for (count=strlen(str1);count>=0; count--)
    {
      str2[cnt]=str1[count];
      //printf("%c\n",str2[cnt]);
      cnt++;
    }
    str2[cnt]='\0';
    for(i=0;i<cnt;i++)
    {
       printf("%c",str2[i]);
    }
    printf("\n");
    return (0);
}
