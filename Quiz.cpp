
 /* 
    Nome do Programa: Quiz
    
    Descri��o do Programa: O programa eexibe tr�s perguntas, com tr�s alternativas cada.
    Cada vez que o usu�rio acerta, ele pontua, e ao final recebe o valor da pontua��o total.
    Autor: Mauro Cesar Yaga Junior 
    Data: 
 */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
  
	setlocale(LC_ALL, "Portuguese_Brazil");

	int pont1, pont2, pont3, pontuacao, opcao;
	
	printf("=====================\n");
	printf("|    VAMOS JOGAR    |\n");
	printf("=====================\n");
	
	printf("\nEste jogo tem 3 perguntas relacionadas a tecnologia, com tr�s op��es cada!\n");
	printf("\nA cada pergunta certa voc� pontua!\n");
	printf("\nA 1 vale 10 pontos!\n");
	printf("\nA 2 vale 20 pontos!\n");
	printf("\nA 3 vale 30 pontos!\n");
	
	printf("\nVamos ver do que � capaz? Boa sorte!\n");
	
	system("\pause");
	
	printf("=====================\n");
	printf("|     PERGUNTA 1    |\n");
	printf("=====================\n\n");
	
	printf("Quem foi George Boole?\n");
	
	
	printf("==================================\n");
	printf("|1.Criador da l�gica de circuitos|\n");
	printf("|2.Inventor da impressora        |\n");
	printf("|3.Criador do mouse              |\n");
	printf("==================================\n");
	
	printf("\nDigite a op��o da sua resposta:");
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 1:
			printf("Parab�ns, resposta certa! 10 pontos!!!\n");
			pont1 = 10;
			break;
		default :
			printf("Errou! Mas calma, as pr�ximas valem mais\n");
			pont2 = 0;
			break;
	} /*fim switch 1*/
	
		system("pause");
		
	printf("=====================\n");
	printf("|     PERGUNTA 2    |\n");
	printf("=====================\n\n");
	
	printf("Por que � utilizado silicio nos circuitos integrados?\n");
	
	
	printf("=================================\n");
	printf("|1.Porque s�o super condutores  |\n");
	printf("|2.Porque s�o semicondutores    |\n");
	printf("|3.Porque s�o resistores        |\n");
	printf("=================================\n");
	
	printf("\nDigite a op��o da sua resposta: \n");
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 2:
			printf("Parab�ns, resposta certa! 20 pontos!!!\n");
			pont2 = 20;
			break;
		default :
			printf("Errou! Utima chance, A pr�xima tem que acertar\n");
			pont2 = 0;
			break;
			
	} /*fim switch 2*/
	
			system("pause");
		
	printf("=====================\n");
	printf("|     PERGUNTA 3    |\n");
	printf("=====================\n\n");
	
	printf("Quantos Bytes tem em 100 Megabytes\n");
	
	
	printf("==========================\n");
	printf("|1.10.000 de Bytes       |\n");
	printf("|2.100.000 de Bytes      |\n");
	printf("|3.100.000.000 de Bytes  |\n");
	printf("==========================\n");
	
	printf("\nDigite a op��o da sua resposta: \n");
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 3:
			printf("Parab�ns, resposta certa! 30 pontos!!!\n");
			printf("Yoooou Winnnnn!!!\n");
			
			pont3 = 30;
			break;
		default :
			printf("Errou!, Desta vez n�o deu!\n");
			pont3 = 0;
			break;
			
	} /*fim switch 3*/	
	
	pontuacao = pont1+pont2+pont3;
	
	printf("Sua pontua��o foi: %d\n", pontuacao);
	
system("pause");	                            
return 0;                                         
  
} /* end main */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     					
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */
