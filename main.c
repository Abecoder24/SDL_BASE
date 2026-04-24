#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

int main(int argv, char* argc[]) {
    //checking SDL.h init
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL.h initialisation Error, %s", SDL_GetError());
        return -1;
    }

    //checking SDL_ttf.h init
    if (!TTF_Init()) {
        SDL_Log("SDL.h initialisation Error, %s", SDL_GetError());
        return -1;
    }

    //Sucess
    SDL_Log("Yes :) - SDL.h and SDL_ttf.h Initialized Successfully");

    //let create a window.
    SDL_Window* window =SDL_CreateWindow("SDL WINDOW", 800, 400,0);

    // now that we have created our window(our canvas)  we need to painter which is RENDERER

    //SDL_CreateRenderer(window, graphics)
    SDL_Renderer * renderer = SDL_CreateRenderer(window, NULL);

    // now lets Present or show our painting!

    SDL_RenderPresent(renderer);
    /// PART 1 FINISH but we have a problem we cant see our window or so we need a loop!

    //loop
    bool running =true;
    SDL_Event event;
    while (running) {
        // lets check for events
        while (SDL_PollEvent(&event)) {
            //check for the close event;
            if (event.type=SDL_EVENT_QUIT) {
                running = false;
            }
        }
    }
    // Close the window.
    SDL_DestroyWindow(window);
    SDL_Quit();
}