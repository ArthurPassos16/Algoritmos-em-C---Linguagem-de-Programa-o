#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversaoMaiusculas(char *s){
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]>='a' && s[i]<='z')
            s[i]-='a'-'A';
    }
    printf("%s\n",s);
}

void main()
{
    char s[20];
    printf("Informe uma palavra:\n");
    fgets(s,sizeof(s),stdin);
    conversaoMaiusculas(s);
}
