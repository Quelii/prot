#include <stdio.h>
#include <stdlib.h>

//prot�tipo da fun��o
int multiplicar(int pn1, int pn2);


//in�cio da main
int main(void)
{
	int v1, v2, resultado; 
		
	  printf("Digite o primeiro valor:");
	  scanf("%d", &v1);
	  printf("Digite o segundo valor:");
	  scanf("%d", &v2);
	 
	  //chama a fun��o e recebe o retorno
	  resultado = multiplicar(v1,v2);
	  
	  printf("Resultado = %d\n\n", resultado);  
      
	system("pause");//somente para Windows
	return 0;
}
//final da main

//�rea de fun��es
int multiplicar(int pn1, int pn2) //multiplica recebe n1,n2 e retorna um int
{
  int res;
  res = pn1 * pn2;
  return(res); //retornando o valor para main
}


	