#include <stdio.h>
#include <string.h>

void view(char* tabuleiro[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(j == 9){
                printf("%s \n", tabuleiro[i][j]);
            }else{
                printf("%s", tabuleiro[i][j]);
            }
                
        } 
    }


}

int main(){
   
    char * TabuleiroNaval[10][10] = {
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "}
};
    //Navios
    char * NavioH1[3] = {" 3 ", " 3 ", " 3 "}; //I-> 2; J-> 2 - 4 
    char * NavioV2[3] = {" 3 ", " 3 ", " 3 "}; ;//I-> 4-; J-> 6
    char * NavioD1[3] = {" 3 ", " 3 ", " 3 "};
    char * NavioD2[3] = {" 3 ", " 3 ", " 3 "};

    //coordenadas navio 1
    int linhaNavio1 = 9; //Diz em qual linha irá se inserir o navio horizontal
    int colunaNavio1 = 7;
    
    if(linhaNavio1 <= 9 && colunaNavio1 <= 7){
        //inserir navio 1
            for (int i = 0; i < 10; i++)
            {
            for (int j = 0; j < 10; j++)
            {
                    if(i == linhaNavio1 && j == colunaNavio1){
                        TabuleiroNaval[i][j] = NavioH1[0];
                        TabuleiroNaval[i][j+1] = NavioH1[1];
                        TabuleiroNaval[i][j+2] = NavioH1[2];
                    }
            }
            }

             
    }else{
        
        printf("Coordenada do navio invalida. Para a linha do primeiro navio, insira um numero menor ou igual a 9. Para a coluna do navio, insira um numero menor ou igual a 7. \n");
    } 


        //coordenas navio 2
        int linhaNavio2 = 1;
        int colunaNavio2 = 3;

        if(linhaNavio2 <=7 && colunaNavio2 <= 9){
            //inserir navio 2
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    if(i == linhaNavio2 && j == colunaNavio2){

                        if (
                            strcmp(TabuleiroNaval[i][j], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i+1][j], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i+2][j], " 0 ") == 0
                        ){
                            TabuleiroNaval[i][j] = NavioV2[0];
                            TabuleiroNaval[i+1][j] = NavioV2[1];
                            TabuleiroNaval[i+2][j] = NavioV2[2];
                        }else{
                            printf("Posição do segundo navio inválida. O navio sobrepôs com o primeiro navio, selecione outra coordenada. \n");
                        }
                    }
                }

            }
        } else {
            printf("Coordenadas do navio invalida. Para a linha do segundo navio, selecione um numero menor ou igual a 7. Para a coluna, selecione um numero menor ou igual a 9. \n");
        }

        //coordenadas navioD1
        int linhaN3 = 5;
        int colunaN3 = 3;

        if(linhaN3 <= 7 && colunaN3 <= 7){
            //inserir navio
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){

                    if (linhaN3 == i && colunaN3 == j){
                        if (
                            strcmp(TabuleiroNaval[i][j], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i+1][j+1], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i+2][j+2], " 0 ") == 0
                        ){

                            TabuleiroNaval[i][j] = NavioD1[0];
                            TabuleiroNaval[i+1][j+1] = NavioD1[1];
                            TabuleiroNaval[i+2][j+2] = NavioD1[0];
                        } else { 
                            printf("Coordenadas invalidas, o navio 3 esta se sobrepondo \n");
                        }
                    }
                }
            }
        }else {
            printf("Coordenadas invalidas. Fugiu da tabela \n");
        }

    

        //coordenadas navioD2
        int linhaN4 = 4;
        int colunaN4 = 3;

        if((linhaN4 <= 9 && linhaN4 >= 2) && (colunaN4 <= 9 && colunaN4 >= 2)){
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    if(linhaN4 == i && colunaN4 == j){
                        if (
                            strcmp(TabuleiroNaval[i][j], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i-1][j-1], " 0 ") == 0 &&
                            strcmp(TabuleiroNaval[i-2][j-2], " 0 ") == 0
                        ){

                            TabuleiroNaval[i][j] = NavioD2[0];
                            TabuleiroNaval[i-1][j-1] = NavioD2[1];
                            TabuleiroNaval[i-2][j-2] = NavioD2[0];
                        } else { 
                            printf("Coordenadas invalidas, o navio 4  estao se sobrepondo \n");
                        }
                    }
                }
            }
        }else {
            printf("Coordenadas invalidas. Fugiu da tabela \n");
        }

    

        view(TabuleiroNaval);

    return 0;
}
