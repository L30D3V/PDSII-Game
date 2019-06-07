#ifndef PDS2_DRUIDA_H
#define PDS2_DRUIDA_H

#include "Personagem.h"
#include <iostream>

class Druida : public Personagem{
    private:
    public:
        //Construtor
        Druida (std::string, int, int, int);
        ~Druida();

        int ataque_basico(Personagem*) override;
        std::string get_habilidade(int) override;
        std::string usa_habilidade(int, std::vector<Personagem*>, std::vector<Personagem*>) override;        
};

#endif