

#include "Geometric.h"
//draw rectangle with either a fill or an outline on a SDL_Renderer object.

void Gemometric::RenderRectange(const GeometricFormat& geo_size, const ColorData& color, SDL_Renderer* screen)
{
    SDL_Rect fillRect = {geo_size.left_, geo_size.top_, geo_size.width_, geo_size.height_};
    SDL_SetRenderDrawColor(screen, color.red_, color.green_, color.blue_, 0xFF);
    SDL_RenderFillRect(screen, &fillRect );//draw a filled rectangle on the screen with the specified position, size, color
}

void Gemometric::RenderOutline(const GeometricFormat& geo_size, const ColorData& color, SDL_Renderer* screen)
{
    SDL_Rect outlineRect = {geo_size.left_, geo_size.top_, geo_size.width_, geo_size.height_};
    SDL_SetRenderDrawColor(screen, color.red_, color.green_, color.blue_, 0xFF);
    SDL_RenderDrawRect(screen, &outlineRect ); //draw an outline of a rectangle on the screen
}
