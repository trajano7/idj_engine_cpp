#include "TileSet.h"

TileSet::TileSet(int tileWidth,int tileHeight, string file)  : tileSet(file, *(new GameObject)) {

    this->tileWidth = tileWidth;
    this->tileHeight = tileHeight;

    //Find how many tiles the texture in Sprite has
    this->columns = (int) tileSet.GetWidth() / tileWidth;
    this->rows = tileSet.GetHeight() / tileHeight;

}

void TileSet::RenderTile(unsigned int index, float x, float y) {

    int indexRow, indexColumn;

    indexRow = index / columns;
    indexColumn = index % columns;

    //Check if the index is a valid tile
    if (index >= 0 && index <= (rows*columns - 1)) {
        tileSet.SetClip(indexColumn*tileWidth,indexRow*tileHeight,tileWidth,tileHeight);
        tileSet.Render(x,y);
    }

    return;

}

int TileSet::GetTileWidth() {

    return tileWidth;

}

int TileSet::GetTileHeight() {

    return tileHeight;

}
