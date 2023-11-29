#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define WIDTH 120
#define HEIGHT 30
#define PIPE_WIDTH 10
#define PIPE_GAP 150
#define PIPE_SPEED 2
#define BIRD_SIZE 5
#define GRAVITY 1

typedef struct
{
    int x, y, gapY;
    bool scored;
} Pipe;

int birdY = HEIGHT / 2;
int BIRD_X = 10;

int gameSpeed = 0;
int score = 0;
bool gameOver = false;

void drawBird(int x, int y, int size, int color)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                gotoxy(x + i, y + j);
                printf("%c", 219);
            }
        }
    }
}

void drawPipe(Pipe pipe)
{
    for (int i = 0; i < HEIGHT; i++)
    {
        if (i < pipe.gapY || i > pipe.gapY + PIPE_GAP)
        {
            gotoxy(pipe.x, i);
            printf("%c", 178);
            gotoxy(pipe.x + PIPE_WIDTH, i);
            printf("%c", 178);
        }
    }
}

void updatePipes(Pipe pipes[], int *pipeCount)
{
    for (int i = 0; i < *pipeCount; i++)
    {
        pipes[i].x -= PIPE_SPEED;
        if (pipes[i].x + PIPE_WIDTH < 0)
        {
            pipes[i] = pipes[*pipeCount - 1];
            pipes[i].x += WIDTH;
            pipes[i].gapY = rand() % (HEIGHT - PIPE_GAP - BIRD_SIZE);
            (*pipeCount)--;
        }
    }
}

void updateBird()
{
    birdY += gameSpeed;
    gameSpeed += GRAVITY;
}

void updateScore(Pipe pipes[], int *pipeCount)
{
    if (pipes[0].x + PIPE_WIDTH < BIRD_X && !pipes[0].scored)
    {
        score++;
        pipes[0].scored = true;
    }
}

bool checkCollision(Pipe pipes[], int pipeCount)
{
    for (int i = 0; i < pipeCount; i++)
    {
        if (birdY < pipes[i].gapY || birdY + BIRD_SIZE > pipes[i].gapY + PIPE_GAP)
        {
            if (BIRD_X + BIRD_SIZE > pipes[i].x && BIRD_X < pipes[i].x + PIPE_WIDTH)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    system("cls");
    srand(time(NULL));

    while (!gameOver)
    {
        system("cls");

        for (int i = 0; i < score + 1; i++)
        {
            printf(" ");
        }
        printf("SCORE: %d\n", score);

        updatePipes(canos, &pipeCount);
        updateBird();
        updateScore(canos, &pipeCount);

        drawBird(BIRD_X, birdY, BIRD_SIZE, WHITE);
        for (int i = 0; i < pipeCount; i++)
        {
            drawPipe(canos[i]);
        }