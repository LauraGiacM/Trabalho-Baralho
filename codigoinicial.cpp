#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef struct{
string valor; //valores das cartas (A, 2, 3, 4, 5, 6, 7, 8, 9, 10, Q, J, K)
string naipe; //naipe das cartas (paus, copa, espada e ouro)
} Carta;

typedef struct{
string jogador1;
Carta j1;
Carta j2;
} jogador;

void embaralhar(Carta *baralho, int n){
for (int i=0; i < n; i++){
int l = rand() %n;
Carta temporaria = baralho[i];
baralho[i]=baralho[l];
baralho[l]=temporaria;
}
}

int main(){

srand(time(NULL));
Carta mao[4];
string resposta;


string valores[]= {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string naipes[]= {"Ouro", "Espadas", "Copas", "Paus"};

Carta baralho[52];
int k = 0;
for (int i=0; i<13; i++){
for (int j = 0; j < 4; j++){
baralho[k].valor = valores[i];
baralho[k].naipe = naipes[j];
k++;
}}

embaralhar(baralho, 52);

mao[0] = baralho[15];
mao[1] = baralho[13];
mao[2] = baralho[22];
mao[3] = baralho[51];

cout << "Mao do jogador1: \n";
cout << mao[0].valor << " de " << mao[0]. naipe << endl;
cout << mao[1].valor << " de " << mao[1]. naipe << endl;

cout << "Mao do jogador2: \n";
cout << mao[2].valor << " de " << mao[2].naipe << endl;
cout << mao[3].valor << " de " << mao[3].naipe << endl;

return 0;
}