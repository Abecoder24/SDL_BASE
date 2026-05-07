// version 1.1
#include<SDL3/SDL.h>
#include<stdbool.h>

// Preprocessor Directive
// Make sure you don't teminate the lines

#define CELL_SIZE 50
#define GRID_WIDTH 20
#define GRID_HEIGHT 14
#define MAX_LENGTH (GRID_WIDTH * GRID_HEIGHT)

// Custom Datatype
typedef struct {
    int x,y;
}Segment;

typedef struct {
    int length;
    Segment body [MAX_LENGTH];
} Snake;

//Initialize Snake/Spawn Snake

void initSnake(Snake* snake) {
    //Set the length
    snake->length=1;
    // //set the segment for the head
    // snake ->body[0].x = 0;
    // snake ->body[0].y = 0;

    // Set teh segments position/dynamic
    for (int i=0; i<snake->length; i++) {
        snake ->body[i].x = snake->length - i;
        snake ->body[i].y = 0;
    }
}

// Render Snake
void renderSnake(SDL_Renderer * renderer, Snake* snake) {
    // Change the window Background
    SDL_SetRenderDrawColor(renderer, 233, 233,233,255);
    // clear the window
    SDL_RenderClear(renderer);

    //color for the Rectangle/SnakeSegment
    SDL_SetRenderDrawColor(renderer,0,0,0,255);
    //this will only render the head part of the segment
    // SDL_FRect rect = {
    //    snake->body[0]. x * CELL_SIZE,
    //    snake->body[0].y * CELL_SIZE,
    //     CELL_SIZE,
    //     CELL_SIZE
    // };
    // SDL_RenderFillRect(renderer,&rect);

    //Render the Dynamic/All snake Body segments
    for (int i=0; i < snake->length; i++) {
        SDL_FRect rect = {
           snake->body[i]. x * CELL_SIZE,
           snake->body[i].y * CELL_SIZE,
            CELL_SIZE,
            CELL_SIZE
        };
        SDL_RenderFillRect(renderer,&rect);

    }
}
//Handle Snake movements
void handleSnakeMove(SDL_Event event, Snake* snake) {
    // Make the tail follow the head
    for (int i = snake ->length -1; i> 0;i--) {
        snake ->body[i].x = snake->body[i-1].x;
        snake ->body[i].y = snake->body[i-1].y;

    }
    switch (event.key.scancode){
        case SDL_SCANCODE_W:
            SDL_Log("GO UP");
            snake ->body[0].y--;
            break;
        case SDL_SCANCODE_S:
            SDL_Log("GO Down");
            snake ->body[0].y++;
            break;
        case SDL_SCANCODE_A:
            SDL_Log("GO Left");
            snake ->body[0].x--;
            break;
        case SDL_SCANCODE_D:
            SDL_Log("GO Right");
            snake ->body[0].x++;
            break;
        case SDL_SCANCODE_X:
            snake ->length ++;
    }
}

//Default main function

int main(int argc, char* argv[]) {
    //creating a snake variable
    //dataType varName = value;
    Snake snake;

    SDL_Window* window = SDL_CreateWindow("Snake Game", GRID_WIDTH*CELL_SIZE , GRID_HEIGHT*CELL_SIZE,0);
    //create a SDL_Renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);



    //Initialize snake
    initSnake(&snake);

    // render the snakezz
    renderSnake(renderer, &snake);

    //Present your Renderer
    SDL_RenderPresent(renderer);

  // loop to keep the window open
    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {


        if (event.type == SDL_EVENT_QUIT) {
            running =false;
        } else if (event.type == SDL_EVENT_KEY_DOWN) {
            handleSnakeMove(event, &snake);
            }
        }
        // render the snakezz
        renderSnake(renderer, &snake);

        //Present your Renderer
        SDL_RenderPresent(renderer);
    } SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

}































