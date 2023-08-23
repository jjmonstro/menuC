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
            
        	
        	case 7:{
        			printf("Exercicio 7\n");
           		int v[]={45, -89, 32, -12, 33}, i, n;

				for(i=0; i<5; i++){
					n=i%2;
					if(n!=0)
					printf(">> %d\n", v[i]);
					
				}
				break;
			}
            
        	
        	case 8:{
        			printf("Exercicio 8\n");
           		    int v[] = {45, -89, 32, -12, 33}, n, i, a = 0;

    				printf("Insira um valor:\n");
    				scanf("%d", &n);

    					for (i = 0; i < 5; i++) {
        					if (v[i] == n) {
           					 a = 1;
            				break; // Se encontrou, não precisa continuar buscando
        					}
   	 					}

    					if (a == 1) {
        					printf("True\n");
    					} else {
        					printf("False\n");
        					
    					}
				break;
			}
        	
        	
        	case 9:{
        		printf("Exercicio 9\n");
            		int i, n, v[] = {45,-89,32,-12,33}, help, j;
	
					i = 0;
					help = v[i];
	
					for(i=0; i<=5; i++){
						for( int j=0; j<5; j++)
					{	
		
						if(v[i] < v[j]){
							help = v[i];
							v[i] = v[j];
							v[j] = help;
						}
			
					}
			
					}
					break;	
        	}
        	case 10:{
        		printf("Exercicio 10\n");
            	int v1[]={41, 72, 39, 4, 35}, v2[]={0, 0, 0, 0, 0}, i;
	
				for(i=0; i<5; i++){
					v2[i]=v1[i];
				}
	
				printf("v1\n");
				for(i=0; i<5; i++)
					printf("%d ", v1[i]);
		
				printf("\n\nv2\n");
				for(i=0; i<5; i++)
					printf("%d ", v2[i]);
				break;
			}

        	
        	case 11:{
        		printf("Exercicio 11\n");
            	int v1[]={41, 72, 39, 4, 35}, v2[]={0, 0, 0, 0, 0}, n=4, i;
		
				printf(" v1\n");
				for(i=0; i<5; i++){
					printf(" %d ", v1[i]);
				}
		
				printf("\n");
		
				for(i=0; i<5; i++){
					v2[i]=v1[n];
					n--;
				}
		
				printf("\n v2\n");
		
				for(i=0; i<5; i++)
					printf(" %d ", v2[i]);
				break;
			}

        	
        	case 12:{
        			printf("Exercicio 12\n");
            	int v[]={41, 72, 39, 4, 35}, i, n, j, help;
	
				i = 0;
				help = v[i];
	
				for(i=0; i<=5; i++){	
					for( int j=0; j<5; j++){
						if(v[i] < v[j]){
					
						help = v[i];
						v[i] = v[j];
						v[j] = help;
						}
			
					}
				}
				printf(" %d\n %d\n %d\n %d\n %d\n ", v[0], v[1], v[2], v[3], v[4]);
				break;
			}

        	
        	case 13:{
        		printf("Exercicio 13\n");
            	int v[]={41, 72, 39, 4, 35}, i, n, j, help;
	
				i = 0;
				help = v[i];
	
				for(i=0; i<=5; i++){
	
					for( int j=0; j<5; j++){
						if(v[i] > v[j]){
							help = v[i];
							v[i] = v[j];
							v[j] = help;
					}
			
					}
				}
				printf(" %d\n %d\n %d\n %d\n %d\n ", v[0], v[1], v[2], v[3], v[4]);
				break;
			}

        	
        	case 14:{
        		printf("Exercicio 14\n");
            	char e;

    			printf("De que forma voce deseja organizar o vetor?\n(d = decrescente)\n(c = crescente)\n");
   				scanf(" %c", &e); 

    			if (e == 'd') {
        			int v[] = {41, 72, 39, 4, 35}, i, j, help;

        			for (i = 0; i < 5; i++) {
            			for (j = i + 1; j < 5; j++) {
               				 if (v[i] < v[j]) {
               			     help = v[i];
               			     v[i] = v[j];
                		    v[j] = help;
                			}
            			}
        			}
        
       			 printf("%d\n%d\n%d\n%d\n%d\n", v[0], v[1], v[2], v[3], v[4]);
    			} else if (e == 'c') {
        			int v[] = {41, 72, 39, 4, 35}, i, j, help;

       				 for (i = 0; i < 5; i++) {
            			for (j = i + 1; j < 5; j++) {
            			    if (v[i] > v[j]) {
              			    help = v[i];
              	      		v[i] = v[j];
                    		v[j] = help;
                			}
            			}
        			}
        
        			printf("%d\n%d\n%d\n%d\n%d\n", v[0], v[1], v[2], v[3], v[4]);
    				} else {
        				printf("ERRO!!\n");
    				}

				break;
			}

        	
        	case 15:{
        		printf("Exercicio 2\n");
            	int v1[]={41, 72, 39, 4, 35}, i, n;
	
				for(i=0; i<5; i++){
					n = v1[i]%2;
		
					if(n==0)                                                                                                                 
					printf(" %d ", v1[i]);
				}
	
				for(i=0; i<5; i++){
					n = v1[i]%2;
		
					if(n!=0)
					printf(" %d ", v1[i]);
				}
				break;
			}

        	
        	case 16:{
        			printf("Exercicio 15\n");
            	int v1[]={41, 72, 39, 4, 35}, a, i, m, cont=0;
	
				for(i=0; i<5; i++){
					m = v1[i] + m;
				}
	
				m=m/5;
	
				for(i=0; i<5; i++){
					if(v1[i] > m){
						printf(" %d ", v1[i]);
						cont++;
					}
				}
				printf("%d vetores estao acima da media", cont);
				break;
			}

        	
            case 17:{
            	printf("Exercicio 16\n");
                int v1[]={41, 39, 72, 4, 35}, i, z=1, p=v1[1];
		
				for(i=0; i<5; i++){
					z=i-1;
			
					if(v1[z] > v1[i]){
						p = v1[z];
					}
			
				}
				printf("%d", p);
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


