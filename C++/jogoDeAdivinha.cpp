#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numComputador;
    int numUsuario;
    int tentativas = 0;
    int jogarNovamente;
    srand(time (0));

    do{
        tentativas = 0;
        numComputador = rand() % 100;
        cout << "Escolhi um número entre 0 e 100 Adivnhe qual é este número"<< endl;
        cout << "Qual o seu chute: ";

        do{
            cin >> numUsuario;
            cout << endl;
            if (numUsuario < numComputador){
                cout << "O número que escolhi é maior que este"<< endl;
                cout << "Tente outra vez"<< endl;
            }
            else if(numUsuario > numComputador){
                cout << "O numero que escolhi é menor que este"<< endl;
                cout << "Tente outra vez"<< endl;
            }

            tentativas ++;
        }while (numUsuario != numComputador);

        cout << "PARABÉNS!!!\n Você acertou" << endl;
        cout << "Número de tentativas: "<<tentativas << " tentativas!" << endl;
        
        cout << "Deseja jogar novamente(sim = 0 || não = 1)??"<< endl;
        cin >> jogarNovamente;
        if(jogarNovamente == 1){
            cout << "Certo!"<< endl;
            cout << "Jogamos novamente outra hora. Tchau!!";
        }
        if(jogarNovamente < 0 && jogarNovamente > 1){
            cout << "RESPOSTA INVÁLIDA\n O PROGRAMA ENCERRARÁ";
            break;
        }
        

    }while(jogarNovamente == 0);
}