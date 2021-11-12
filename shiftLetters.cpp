#include <iostream>

using namespace std;

int letraValor(char letra){
    int valor;
    switch(letra){
        case 'A':
            valor = 0;
            break;
        case 'a':
            valor = 0;
            break;
        case 'B':
            valor = 1;
            break;
        case 'b':
            valor = 1;
            break;
        case 'C':
            valor = 2;
            break;
        case 'c':
            valor = 2;
            break;
        case 'D':
            valor = 3;
            break;
        case 'd':
            valor = 3;
            break;
        case 'E':
            valor = 4;
            break;
        case 'e':
            valor = 4;
            break;
        case 'F':
            valor = 5;
            break;
        case 'f':
            valor = 5;
            break;
        case 'G':
            valor = 6;
            break;
        case 'g':
            valor = 6;
            break;
        case 'H':
            valor = 7;
            break;
        case 'h':
            valor = 7;
            break;
        case 'I':
            valor = 8;
            break;
        case 'i':
            valor = 8;
            break;
        case 'J':
            valor = 9;
            break;
        case 'j':
            valor = 9;
            break;
        case 'K':
            valor = 10;
            break;
        case 'k':
            valor = 10;
            break;
        case 'L':
            valor = 11;
            break;
        case 'l':
            valor = 11;
            break;
        case 'M':
            valor = 12;
            break;
        case 'm':
            valor = 12;
            break;
        case 'N':
            valor = 13;
            break;
        case 'n':
            valor = 13;
            break;
        case 'O':
            valor = 14;
            break;
        case 'o':
            valor = 14;
            break;
        case 'P':
            valor = 15;
            break;
        case 'p':
            valor = 15;
            break;
        case 'Q':
            valor = 16;
            break;
        case 'q':
            valor = 16;
            break;
        case 'R':
            valor = 17;
            break;
        case 'r':
            valor = 17;
            break;
        case 'S':
            valor = 18;
            break;
        case 's':
            valor = 18;
            break;
        case 'T':
            valor = 19;
            break;
        case 't':
            valor = 19;
            break;
        case 'U':
            valor = 20;
            break;
        case 'u':
            valor = 20;
            break;
        case 'V':
            valor = 21;
            break;
        case 'v':
            valor = 21;
            break;
        case 'w':
            valor = 22;
            break;
        case 'W':
            valor = 22;
            break;
        case 'X':
            valor = 23;
            break;
        case 'x':
            valor = 23;
            break;
        case 'Y':
            valor = 24;
            break;
        case 'y':
            valor = 24;
            break;
        case 'Z':
            valor = 25;
            break;
        case 'z':
            valor = 25;
            break;
    }
    return valor;
}

char valorLetra(int valor){
    char letra;
    while(valor < 0){
        valor+=26;
    }
    switch(valor){
        case 0:
            letra = 'a';
            break;
        case 1:
            letra = 'b';
            break;
        case 2:
            letra = 'c';
            break;
        case 3:
            letra = 'd';
            break;
        case 4:
            letra = 'e';
            break;
        case 5:
            letra = 'f';
            break;
        case 6:
            letra = 'g';
            break;
        case 7:
            letra = 'h';
            break;
        case 8:
            letra = 'i';
            break;
        case 9:
            letra = 'j';
            break;
        case 10:
            letra = 'k';
            break;
        case 11:
            letra = 'l';
            break;
        case 12:
            letra = 'm';
            break;
        case 13:
            letra = 'n';
            break;
        case 14:
            letra = 'o';
            break;
        case 15:
            letra = 'p';
            break;
        case 16:
            letra = 'q';
            break;
        case 17:
            letra = 'r';
            break;
        case 18:
            letra = 's';
            break;
        case 19:
            letra = 't';
            break;
        case 20:
            letra = 'u';
            break;
        case 21:
            letra = 'v';
            break;
        case 22:
            letra = 'w';
            break;
        case 23:
            letra = 'x';
            break;
        case 24:
            letra = 'y';
            break;
        case 25:
            letra = 'z';
            break;
    }
    return letra;
}

int main(int argc, char* argv[]){
    try {
        string shift = argv[1];
        int shiftint = stoi(shift);
        /*for (int i = 1; i < argc; ++i){
            cout << argv[i] << " ";
        }
        cout << endl;*/
        for (int i = 2; i < argc; ++i){
            string nuevastring = argv[i];
            int aenteros[nuevastring.size()];
            for(int j = 0; j < nuevastring.size(); ++j){
                aenteros[j] = letraValor(nuevastring[j]);
                aenteros[j] = (aenteros[j] + shiftint) % 26 ;
                cout << valorLetra(aenteros[j] % 26);
            }
            cout << " ";
        }
        cout << endl;
        return 0;
    } catch (exception &err) {
        cout << "[ERROR] " << err.what() << endl;
        return 1;
    }
}