#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int v[50];
	float s, c;
	for (int i = 0; i < 50; i++)
	{
		printf("Digite um valor para a posição %d da matriz: ", i);
		scanf("%d", &v[i]);
		if(v[i] > 10 and v[i] < 150)
		{
			s+=v[i];
			c++;
		}
	}
	printf("A média dos números maiores que 10 e menores que 150 é: %f", s/c);
}
