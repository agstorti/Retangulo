#include "Retangulo.hpp"
#include <iostream>

Retangulo::Retangulo():x{0}, y{0}{

}

Retangulo::Retangulo(float lado1, float lado2):x{lado1}, y{lado2}{
}

void Retangulo::setLado1(float lado1){
	x = lado1;	
}

void Retangulo::setLado2(float lado2){
	y = lado2;
}

float Retangulo::getArea(){
	return x*y; 
}
float Retangulo::getPerimetro(){
	return 2*(x+y);
}
