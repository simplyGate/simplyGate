/*
 * Fichier: Image.h
 * Auteurs : JOLLIVET Matthieu / Gauthier Remi / Saliou Thomas
 * On définit ici ce qu'est une Image, composé d'une somme de pixels rouges verts et bleus
 * 
*/

#ifndef IMAGE
#define IMAGE

#include "SFML/Graphics.hpp" 
#include "iostream"




class Image {
  
  private:
    int _red;
    int _green;
    int _blue;

  public :
    Image(int r, int g, int b) : _red(r), _green(g), _blue(b) {}

    void getRGB(int& r, int& g, int& b) const 
      { r=_red; g=_green; b=_blue; }

    void setRGB(int r, int g, int b) 
      { _red=r; _green=g; _blue=b; }

      
};




#endif 
