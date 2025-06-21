#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float num1=0, num2=0, result=0;
    char op;

    while(true){
        setlocale(LC_ALL, "Portuguese");

        cout << "Escolha um número: " << endl;
        cin >> num1;
        cout << "Escolha o OPERADOR(+,-,x,/[divisão],^[potência],V[raiz quadrada]):" << endl;
        cin >> op;
        if(op == 'V' || op == 'v'){
            result = sqrt(num1);
            cout << endl;
        }
        else{
            cout << "Escolha outro número:" << endl;
            cin >> num2;
            switch (op){
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case 'x':
                case 'X':
                    result = num1 * num2;
                    break;
                case '/':
                    if(result != 0){
                        result = num1 / num2;
                    }
                    else{
                        cout << "ERRO\n Divisão pkr zero ";
                        continue;
                    }
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
                default:
                    cout << "Operador inválido!" << endl;
                    continue;
                break;
            }
            
        }
        cout << "Resposta: ";
        cout << result << endl << endl;

    }
    return 0;
}