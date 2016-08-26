#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h> //malloc
#include <algorithm>
using namespace std;
int main(){
char espelho[31],tent[31];
string pali;
int i,y,b,tamanho,tam;
y=0;
cout<<"Tente um pali: "<<endl;
getline(cin,pali);
tamanho = pali.length();
char* pala = (char*)malloc( sizeof( char ) *(pali.length() +1) );
strcpy( pala, pali.c_str() );
for (i=tamanho-1;i>=0;i--){
espelho[y] = pala[i];
y++;
}
espelho[y] = '\0';
cout<<"Sem espaço: "<<pala<<endl;
cout<<"Invertido : "<<espelho<<endl;
cout<<"Tamanho   : "<<tamanho<<endl;
if(strcmp(pala,espelho)==0){
cout<<"Palindromo"<<"\a"<<endl;
}
else{
cout<<"Nao e Palindromo"<<endl;
}
return 0;
}
