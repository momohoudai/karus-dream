#include "utils.h"

namespace yuu {

	SDL_Texture * SDL_CreateTextureFromSurfaceX(SDL_Renderer * renderer, SDL_Surface * surface, SDL_BlendMode blendMode)
	{
		auto texture = SDL_CreateTextureFromSurface(renderer, surface);
		SDL_SetTextureBlendMode(texture, blendMode);
		return texture;
	}
	SDL_Texture* SDL_CreateTextureFromPathX(SDL_Renderer * renderer, const char * path, SDL_BlendMode blendMode)
	{
		auto surface = IMG_Load(path);
		if (surface == nullptr) {
			SDL_Log(IMG_GetError());
			return nullptr;
		}
		auto texture = SDL_CreateTextureFromSurfaceX(renderer, surface, blendMode);
		SDL_FreeSurface(surface);
		return texture;
	}

	SDL_Surface * SDL_CreateSurfaceFromPathX(SDL_Renderer * renderer, const char * path)
	{
		return nullptr;
	}



}

