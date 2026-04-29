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

    float screenHeight = 400;
    float screenWidth = 800;

    //let create a window.
    SDL_Window* window =SDL_CreateWindow("SDL WINDOW", screenWidth, screenHeight,0);

    // now that we have created our window(our canvas)  we need to painter which is RENDERER

    //SDL_CreateRenderer(window, graphics)
    SDL_Renderer * renderer = SDL_CreateRenderer(window, NULL);


    /// PART 1 FINISH but we have a problem we cant see our window or so we need a loop!

    //loop
    float x = 50;
    float y = 50;
    bool running =true;
    SDL_Event event;
    while (running) {
        // lets check for events
        while (SDL_PollEvent(&event)) {
            //check for the close event;
            if (event.type==SDL_EVENT_QUIT) {
                running = false;
            }else if (event.type == SDL_EVENT_KEY_DOWN){

                switch (event.key.scancode) {
                    case SDL_SCANCODE_A:
                        if (x>0) {
                            x -= 50;
                        } else {
                            x =screenWidth -50;
                        }
                       break;
                    case SDL_SCANCODE_D:
                        if (x<screenWidth-50) {
                            x += 50;
                        } else {
                            x =0;
                        }
                        break;
                    case SDL_SCANCODE_W:
                        if (y>0) {
                            y -= 50;
                        } else {
                            y = screenHeight-50;
                        }

                        break;
                    case SDL_SCANCODE_S:
                        if (y <screenHeight -50) {
                            y += 50;
                        } else {
                            y=0;
                        }

                    default:
                        SDL_Log("This key is not mapped");
                }
            }
        } // lets change the color with setRenderColor(renderer, rd, grn, blu, visibility)

        SDL_SetRenderDrawColor(renderer, 255,255,255,255);
        SDL_RenderClear(renderer);

        //RECTANGLE/SQUARE
        // SDL_RenderRect(renderer, x,y,width, height) let save the last 4 arguments in a variable;
        SDL_FRect rect = {x,y,50,50};
        SDL_SetRenderDrawColor (renderer, 0,0,0,255);
        SDL_RenderRect(renderer, &rect);
        SDL_RenderFillRect(renderer, &rect);


        // now lets Present or show our painting!
        SDL_RenderPresent(renderer);

    }
    // Close the window.
    SDL_DestroyWindow(window);
    SDL_Quit();
}