/*
 * Fichier: Interface.h
 * Auteurs : JOLLIVET Matthieu / Gauthier Remi / Saliou Thomas
 * On définit ici la fenetre d'interface du programme : 
 * la fenetre, ses propriétés et ses particularités
 * 
*/

#ifndef INTERFACE
#define INTERFACE

#include "SFML/Graphics.hpp" 


class Interface {
  
  private:
    
    //dimensions de la fenetre principale
    int width_win;
    int height_win;
    
    
    //definition de l'horloge selon la bibliothèque SFML
    sf::Clock clock;
    //definition de la fenetre selon la bibliothèque SFML
    sf::RenderWindow* _win;

    
  public :
      
    //constructeur de la fenetre
    Interface(int widthw, int heightw):width_win(widthw),height_win(heightw), state_game(true),  _win(new sf::RenderWindow(sf::VideoMode(width_win, height_win),"Pong")){}
    //destruction de la fenetre et des objets s'y trouvant
    ~Interface(void);
    
    
      
};



#endif
