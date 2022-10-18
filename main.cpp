#include<iostream>
#include "Retangulo.hpp"

 
int main(){
	
	float lado1,lado2;
	std::cout << "Digite os valores dos lados do retângulo: " << std::endl;
	std::cin >> lado1 >> lado2;
	while ((lado1<=0) || (lado2<=0)){
		std::cout <<"Digite valores maiores que 0"<< std::endl;
		std::cin >> lado1 >> lado2;
	}
	Retangulo r1{lado1, lado2};
	//r1.setLado1(lado1);
	//r1.setLado2(lado2);
        std::cout<<"Retangulo que acessa o construtor com parametros definido pelo usuário" << std::endl;	
	std::cout<<"Area = " << r1.getArea() << std::endl;
        std::cout<<"Perimetro = " << r1.getPerimetro() << std::endl;
	
	Retangulo r2{};
	std::cout<<"Retangulo que acessa o construtor defult preenchido com zeros" << std::endl;
	std::cout<<"Area = " << r2.getArea() << std::endl;
        std::cout<<"Perimetro = " << r2.getPerimetro() << std::endl;

	//Testando o Retangulo do exercicio 2
	Retangulo r3{5.5, 12.5};

	std::cout<<"Retangulo que acessa o construtor com parâmetros fixos conforme slicitado no exercio 2 b" << std::endl;
	std::cout<<"Area = " << r3.getArea() << std::endl;
        std::cout<<"Perimetro = " << r3.getPerimetro() << std::endl;

	return 0;
}
