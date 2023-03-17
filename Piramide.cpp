#include "Piramide.h"

void Piramide::setBase(float base)
{
    if(base<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero");
    }

    this->base=base;
}

void Piramide::setAltura(float altura)
{
    if(altura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero");
    }

    this->altura=altura;
}

Piramide::Piramide(float base,float altura)
{
    setBase(base);
    setAltura(altura);
}