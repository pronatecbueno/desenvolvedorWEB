#include <stdio.h>

int main()
{
    float nota1=0, nota2=0, media=0;//Declaração de variáveis
    int resposta;
    
    do{//inicio da repetição
        printf("Digite a primeira nota: ");//inclui os valores das notas
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        media = (nota1+nota2)/2;//calculo da média das notas
        printf("A média do aluno é %.2f pontos\n", media);//Exibe a média do aluno
        
        //Estrutura de condição para verificar se o aluno foi aprovado ou reprovado.
        if(media>=6 && media<=10){
            printf("Aluno Aprovado. \n");
        }
        else if(media>=0 && media<6)
        {
            printf("Aluno Reprovado! \n");
        }
        else
        {
            printf("Dados fornecidos incorreto. \n");
        }
        
        printf("Digite 1 para calcular outra média ou 2 para sair do programa \n\n");
        scanf("%d", &resposta);//verifica se deseja calcular novamente as médias
        
    }while(resposta==1);//Condição para o laço

    return 0;
}