//Criar um programa que inclua retângulos em um retângulo maior
//Alunos: Cairo Martins e Leonardo Thimoteo, 07.02.2016
//Status: incompleto


//********************************************************
// C++ INCLUDES
//********************************************************
#include <cstdlib>
#include <Ponto2D.h>
#include <Retangulo.h>


//********************************************************
// protótipos de funções
//********************************************************
int soma (const Retangulo&);

//********************************************************
// variáveis locais
//********************************************************

//Declarando sala
Retangulo sala (10,10);



//********************************************************
// MAIN FUNCTION
//********************************************************
int main() {
    
    
//Encontrando demais pontos da sala 
    std :: cout << "P1= " << sala.PTR () << std :: endl;
    std :: cout << "P2= " << PontosRetNO(sala) << std :: endl;
    std :: cout << "P3= " << PontosRetNE(sala) << std :: endl;
    std :: cout << "P4= " << PontosRetSE(sala) << std :: endl;
    
//Testando se um ponto qualquer pertence à sala
    Ponto2D p5(5,-2);
    
    if (Intercep (p5, sala)) {
        std :: cout << "está inserido\n\n\n";
    }
    else std :: cout << "asjndsn\n\n\n";
    
    Retangulo tapete (2,20,p5);    
    
    std:: cout << "Soma:" << soma(tapete); 
    
    
    
    
    
    return 0;
}




//********************************************************
// declaração de funções
//********************************************************

int soma (const Retangulo&_ret){
    int soma;
    soma= (1*Intercep(_ret.PTR(), sala) + 2*(Intercep(PontosRetNO(_ret), sala)) + 
                4*(Intercep(PontosRetNE(_ret), sala)) + 8*(Intercep (PontosRetSE(_ret), sala)));
 
    if (soma==0)
    {
        if ((sala.PTR().Y() < _ret.PTR().Y() && _ret.PTR().Y() < PontosRetNO(sala).Y()) && //tapete transversal horizontal
                (sala.PTR().X() > _ret.PTR().X() && PontosRetSE(_ret).X() > PontosRetSE(sala).X()))
        {
            soma=17;
        }
            else if ((_ret.PTR().Y() < sala.PTR().Y() && sala.PTR().Y() < PontosRetNO(_ret).Y()) && //tapete transversal horizontal
                (_ret.PTR().X() > sala.PTR().X() && PontosRetSE(sala).X() > PontosRetSE(_ret).X()))
            {
                soma=17;
            }
                else if ((1*Intercep(sala.PTR(), _ret) + 2*(Intercep(PontosRetNO(sala), _ret)) + 
                      4*(Intercep(PontosRetNE(sala), _ret)) + 8*(Intercep (PontosRetSE(sala), _ret))) == 15)
                {
                    soma=16;
                }
                    else
                    {
                        soma=18;
                    }
    }
    
        return soma;
    }   
//    A soma diz respeito AO TAPETE, não à sala
