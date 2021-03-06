#ifndef GAMEMAP2_H
#define GAMEMAP2_H

#include "MapCell.h"

class GameMap2
{
protected:

    void LoadMapFromFile();
    
public:

    GameMap2();

    MapCell* PlayerCell;
    MapCell Cells [30][50];

    void Draw();

    void DrawSndlevel();

    void DrawVictory();

    //Esta funcion tiene las cordenadas de player y actualiza el mapa
    bool SetPlayerCell(int PlayerX, int PlayerY);
    
    bool isGameOver = false;

    char id;
    

};

#endif // MAPCELL_H