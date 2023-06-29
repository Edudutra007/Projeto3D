#include <iostream>
#include <cstdlib>
#include "Sculptor.h"
#include <fstream>
#include <string>

int main()
{
    //Exemplo
    Sculptor exemplo(60,60,60);

    exemplo.setColor(1.0, 0.79, 0.85, 1.0);

    exemplo.putVoxel(1, 2, 3);
    exemplo.cutVoxel(1, 2, 3);
    exemplo.putBox(15,20,36,40,30,36);
    exemplo.cutBox(17,19,38,40,30,32);
  
    exemplo.setColor(0.78, 0.63, 0.78, 1.0);
    exemplo.putEllipsoid(5, 25,30 ,6 ,10 ,6);
    exemplo.cutEllipsoid(5, 30, 30, 6, 10, 6);
  
    exemplo.setColor(1.0, 0.0 ,1.0 , 0.5);
    exemplo.putSphere(29, 30, 30, 10); 
    exemplo.cutSphere(29, 35, 30, 10);
 	
    exemplo.writeOFF((char*)"exemplo.off");

  
    Sculptor bola(60,60,60);
  
    bola.setColor(1.0, 0.6 ,0 , 1.0);
    bola.putSphere(29, 30, 30, 10); 
   
    bola.writeOFF((const char*)"BolaBasquete.off");

    std::cout << "Concluído\n";

    getchar();
    return 0;
}