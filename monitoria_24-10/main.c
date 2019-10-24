#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void imprimirAa();
void tamanhoString();
void quantLetras();
void aceitaOuNao();
void stringNaString();
void ponteiros();
void lerData();
void verificarProduto();

int main()
{
    verificarProduto();
    return 0;
}

void verificarProduto(){
    int m[50][50];
    srand(time(NULL));
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            m[i][j]=1+rand()%10;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void lerData(){
    char data[12];
    int dia,mes,ano;
    fgets(data,sizeof(data),stdin);
    if (data[2]=='/' && data[5]=='/'){
        dia=(data[0]-48)*10+data[1]-48;
        mes=(data[3]-48)*10+data[4]-48;
        ano=(data[6]-48)*1000+(data[7]-48)*100+(data[8]-48)*10+data[9]-48;

        if(dia>=1 && dia<=31 && mes>=1 && mes<=12 && ano>=0){
            printf("DATA VALIDA!\n");
        }else
            printf("DATA INVALIDA!\n");
    }else
        printf("DATA INVALIDA!\n");
}
void ponteiros(){
    int a,b,*p1, *p2;
    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    printf("%d\n\n",*p2);
    *p2 = *p1 + 3;
    printf("%d\n",*p1);
    printf("%d\n",*p2);
    printf("%d\n\n",a);
    b = b * (*p1);
    printf("%d\n",b);
    (*p2)++;
    p1 = &b;
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);
}
void stringNaString(){
    char s1[10], s2[10];
    int cont,vezes=0;
    printf("Informe duas strings:\n");
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    for(int i=0;i<strlen(s1)-1;i++){
        cont=0;
        for(int j=0;j<strlen(s2)-1;j++){
            if(s1[i+j]==s2[j])
                cont++;
        }
        if(cont==strlen(s2)-1)
            vezes++;
    }
    printf("%d vez(es)\n",vezes);
}
void aceitaOuNao(){
    char nome[10], sexo;
    int idade;
    printf("Informe seu nome:\n");
    fgets(nome,sizeof(nome),stdin);
    fflush(stdin);
    printf("Informe seu sexo(M/F):\n");
    scanf("%c",&sexo);
    fflush(stdin);
    printf("Informe sua idade:\n");
    scanf("%d",&idade);
    if(sexo=='F' && idade<25)
        printf("ACEITA\n");
    else
        printf("NAO ACEITA\n");
}
void imprimirAa(){
    char s[10];
    printf("Informe uma palavra:\n");
    fgets(s,sizeof(s),stdin);
    if(s[0]=='a' || s[0]=='A')
        printf("%s\n",s);
}
void tamanhoString(){
    char s[10];
    int c=0;
    printf("Informe uma palavra:\n");
    fgets(s,sizeof(s),stdin);
    while(s[c]!='\0'){
        c++;
    }
    printf("Tamanho: %d\n",c-1);
}
void quantLetras(){
    char s[10];
    int c=0;
    printf("Informe uma palavra:\n");
    fgets(s,sizeof(s),stdin);
    while(s[c]!='\n'){
        if(s[c]!='\0')
            c++;
    }
    printf("Quantidade: %d\n",c-1);
}
