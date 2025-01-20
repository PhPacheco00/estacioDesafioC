
#include <stdio.h>
#include <math.h>
    float main(){

        float nota1;
        float nota2;
        float nota3;
        float media;
        float antesArredondamento;

        float arredondarNotas(){
           return media = round(media);
            }

        float mediaFinal(){
            media = (nota1 + nota2 + nota3) / 3;
            antesArredondamento = media;
            arredondarNotas();
            return media;
        }
        
        float quantoFalta(){
            return ( 7 - mediaFinal());
        }

        printf("Informe sua nota do primeiro trimestre: \n");
        scanf("%f", &nota1);
        printf("Informe sua nota do segundo trimestre: \n");
        scanf("%f", &nota2);
        printf("Informe sua nota do terceiro trimestre: \n");
        scanf("%f", &nota3);

        printf("Sua media final foi de: %.1f.\n", mediaFinal());
        printf("Sua nota antes do arredondamento foi de: %.1f \n", antesArredondamento);

        if(media >= 7){
            printf("Parabens, voce passou de ano! \n");
        }else{
            printf("Voce esta em recuperacao, faltaram %.1f pontos para alcancar a media. \n", quantoFalta());
        }

        return 0;
    }