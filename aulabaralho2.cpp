#include <iostream>
#include <vector>
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

vector <jogador> v(2);
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

//mao[0] = baralho[15];
//mao[1] = baralho[13];
//mao[2] = baralho[22];
//mao[3] = baralho[51];

v[0].jogador1 = "Qualquer1";
v[0].j1 = baralho[34];
v[0].j2 = baralho[1];

v[1].jogador1 = "Qualquer2";
v[1].j1 = baralho[24];
v[1].j2 = baralho[13];

cout << "Mao do jogador1: \n";
cout << baralho[34].valor << " de " << baralho[34]. naipe << endl;
cout << baralho[1].valor << " de " << baralho[1]. naipe << endl;

cout << "Mao do jogador2: \n";
cout << baralho[24].valor << " de " << baralho[24].naipe << endl;
cout << baralho[13].valor << " de " << baralho[13].naipe << endl;
do{
cout << "Há mais jogadores?(sim ou nao)" << endl;
cin >> resposta;
if(resposta == "sim"){
    
v.resize(v.size() + 1);
v[v.size() - 1].jogador1 = "Qualquer";
v[v.size() - 1].j1 = baralho[51];
v[v.size() - 1].j2 = baralho[48];

cout << "Mao do jogador: \n";
cout << baralho[51].valor << " de " << baralho[51]. naipe << endl;
cout << baralho[48].valor << " de " << baralho[48]. naipe << endl;
    
}
}while(resposta=="sim"); 
return 0;
}