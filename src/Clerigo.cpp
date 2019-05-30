#include "Clerigo.h"

#define BONUS_FORCA_ATAQUE 15
#define BONUS_FORCA_DEFESA 15
#define BONUS_FORCA_HP 10
#define MODIFICADOR_INT_MP 8

Clerigo::Clerigo (std::string nome, int forca, int agilidade, int inteligencia):
                  Personagem (nome, forca, agilidade, inteligencia){
 
    //teste do modificador ao criar o player
    modifica_atributos_secundarios();
}

void Clerigo::modifica_atributos_secundarios () {
    _ataque = _forca * BONUS_FORCA_ATAQUE;
    _defesa = _forca * BONUS_FORCA_DEFESA;
    _hp = _forca * BONUS_FORCA_HP;
    _mp = _inteligencia * MODIFICADOR_INT_MP;

}