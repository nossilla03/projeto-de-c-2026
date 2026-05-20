// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
    
    for(i = 0; i < 8; i++){
        printf ("Digites sua nota: \n");
        scanf("%f", &notas[i]);
        printf("Digite sua frequencia: \n");
        scanf("%f", &frequencia);
        
        if(notas[i] > 7 && frequencia > 75){
            aprovados++;
        }
        else{
            reprovados++;
       }

    }
    
printf("aprovados: %d\n", aprovados);
printf("reprovados: %d\n", reprovados);
    return 0;
}
