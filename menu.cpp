#include<stdio.h>
int main(){
	
    int escolha;
    char reiniciar;

    do {
        printf("Escolha um exercicio de 1 a 17 (ou 0 para sair):\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:{
            	printf("Exercicio 1\n");
                // Código para o exercício 1
				break;
			}
                
            case 2:{
                printf("Exercicio 2\n");
                // Código para o exercício 2
                break;
                }
           	case 3:{
				
			  
            	printf("Exercicio 3\n");
            	// Código para o exercício 3
        		break;
        	 	}
        		
        	case 4:{
			
			
            	printf("Exercicio 4\n");
            	// Código para o exercício 4
        		break;
        	}
        	
        	case 5:{
        		printf("Exercicio 5\n");
           		 // Código para o exercício 5
				break;
			}
            
        	case 6:{
        			printf("Exercicio 6\n");
            	// Código para o exercício 6
        		break;
			}
        
            case 0:
                printf("Encerrando o programa.\n");
                break;
                
            default:
                printf("Opcao invalida. Escolha novamente.\n");
                break;
        }

        if (escolha != 0) {
            printf("Deseja reiniciar? (S para sim, qualquer tecla para sair): ");
            scanf(" %c", &reiniciar);
        }
    } while (escolha != 0 && (reiniciar == 'S' || reiniciar == 's'));

    return 0;
}


