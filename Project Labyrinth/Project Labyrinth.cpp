#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

class Labyrynth 
{
public:
    void GenerateLabyrynth(int inputLabSize)
    {
        // Задаём размер из возможного диапазона
        int SIZE = clamp(inputLabSize, 10, 100);
        vector<vector<int>> LABYRYNTH(SIZE, vector<int>(SIZE));

        // ВХОД - ВЫХОД
        LABYRYNTH[0][0] = 2;
        LABYRYNTH[SIZE][SIZE] = 2;

        //Генерация путей и стенок
    }
};

int main()
{
    cout << "Hello World!\n";
}
