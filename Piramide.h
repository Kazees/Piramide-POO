#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include <stdexcept>

using std::invalid_argument;


class Piramide
{
    private:
        float base;
        float altura;
    public:
    Piramide(float base,float altura); //Construtor - Inicializador
    
    
    //Set's
    void setBase(float base);
    void setAltura(float altura);

    //Get's
    float getBase()const {return base;} 
    float getAltura()const {return altura;}

    //Função
    float calcularVolume()const {return (1.0/3)*base*altura;}
};

#endif