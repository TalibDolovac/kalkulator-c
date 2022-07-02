#include<stdio.h>
#include<math.h>

int main() 
{
	float a, b, c;
	char znak;

	printf("Unesite prvi broj: ");
	scanf("%f", &a);
	
	printf("Unesite drugi broj: ");
	scanf("%f", &b);
	
	printf("Unesite racunsku operaciju: ");
	scanf("%c", &znak);
	
	znak = getchar();

	if(b == 0 && znak == '/' || a == 0 && znak == '/') {
		printf("Nema smisla deliti sa nulom.");
	}
	else{
		
		switch(znak) {
			
			case '+':
				c = a + b;
				printf("Zbir ova dva broja je: %0.f ", c);
			break;
			
			case '-':
				c = a - b;
				printf("Razlika ova dva broja je: %0.f ", c);
			break;
			
			case '*':
				c = a * b;
				printf("Proizvod ova dva broja je: %f ", c);
			break;
			
			case '/':
				c = a / b;
				printf("Kolicnik ova dva broja je: %f ", c);
			break;
		}
		
	}
	return 0;
}
