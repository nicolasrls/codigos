#ifndef jogodaforca_h

#define jogodaforca_h

int mostrar_erros(int chances, int erros){
    int dif = 0

     while(chances <= erros){
        if(chances != 5){
            dif = chances - erros;
            break;
        }
        if(dif == 0){
            cout << "Você perdeu o jogo. Tentar novamente?"<< endl;
        }
    }
    cout << "Você tem " << dif << " chances" << endl;
}

string escolher_palavra(string palavra){

ifstream arquivo;
arquivo.open("input.txt", ios::app);



}





#endif