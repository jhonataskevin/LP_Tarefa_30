#include <stdio.h>

typedef struct f{
	
	int ladoA;
	int ladoB;
	int perimetro;
	int area;
	
}Figura;

int main(){
	
	Figura retangulo;
	
	while(1){
		
		scanf("%d %d", &retangulo.ladoA, &retangulo.ladoB);
		
		if(retangulo.ladoA == 0 || retangulo.ladoB == 0){
			break;
		}
		
		retangulo.perimetro = retangulo.ladoA*2 + retangulo.ladoB*2;
		retangulo.area = retangulo.ladoA * retangulo.ladoB;
		
		printf("Area = %d - Perimetro = %d", retangulo.area, retangulo.perimetro);
		
	}
	
	return 0;
}
