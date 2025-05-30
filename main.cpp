#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int aposta=0, lances=0;
    int venceu=0;

    cout << "Quantos lances deseja fazer? ";
    cin >> lances;

    for(int i=0; i < lances; i++)
    {
        do{
            cout << "Escolha: 0 para Cara ou 1 para Coroa: ";
            cin >> aposta;
        }while(aposta != 0 && aposta != 1);

        if(rand()%2==aposta)
        {
            venceu++;
            cout << "Você venceu!"<< endl;
        }else{
            cout << "Você perdeu!" << endl;
        }
    }
}
