#ifndef PDS2_PERSONAGEM_H
#define PDS2_PERSONAGEM_H

#include <string>

class Personagem {
    protected:
        //nome do personagem
        std::string _nome;

        //nome da classe do personagem
        std::string _nome_classe;

        //atributos principais: 
        //determina dano do ataque basico e defesa
        int _forca;

        //determina chance de ataque critico, esquiva e ordem da rodada
        int _agilidade;

        //determina quantidade de mp
        int _inteligencia;

        //atributos derivados
        int _ataque;
        int _defesa;
        int _hp;
        int _mp;

        //estado do personagem
        bool _vivo;

        //grupo ao qual ele pertence
        char _grupo;

    public:
        Personagem();
        Personagem(std::string,int, int, int);

        std::string get_nome();
        virtual std::string get_nome_classe();

        int get_forca();
        int get_agilidade();
        int get_inteligencia();
        int get_ataque();
        int get_defesa();
        char get_grupo();
        bool get_vivo();
        int get_hp();
        int get_mp();

        void set_hp(int);
        void set_grupo(char);


        //imprime atributos do personagem
        void imprime();

        //ataque basico contra outro personagem
        virtual int ataque_basico(Personagem*);

        //recebe um ataque fisico
        int recebe_ataque_fisico(int);

        //confere se o personagem já morreu
        std::string morreu();
};

#endif