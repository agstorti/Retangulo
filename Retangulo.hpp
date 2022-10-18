#ifndef RETANGULO_HPP
#define RETANGULO_HPP
#pragma once	

class Retangulo{
	public:
		Retangulo();
		
		Retangulo(float lado1, float lado2);

		
		void setLado1(float x);
		void setLado2(float y);
		
		float getArea();
		float getPerimetro();
	
	private:
		float x, y;
};
#endif
