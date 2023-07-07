#include <iostream>
#include <conio.h> // Для функции _getch() в Windows
// #include <curses.h> // Для функции getch() в Linux/Mac

int main() {
    const int width = 20; // Ширина игрового поля
    const int height = 10; // Высота игрового поля

    int playerX = width / 2; // Начальное положение игрока по горизонтали
    int playerY = height - 1; // Начальное положение игрока по вертикали

    bool gameOver = false; // Флаг окончания игры

    while (!gameOver) {
        // Отрисовка игрового поля
        system("cls"); // Очистка экрана в Windows
        // system("clear"); // Очистка экрана в Linux/Mac

        for (int i = 0; i < width + 2; i++) {
            std::cout << "#";
        }
        std::cout << std::endl;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (x == playerX && y == playerY) {
                    std::cout << "P"; // Игрок
                }
                else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < width + 2; i++) {
            std::cout << "#";
        }
        std::cout << std::endl;

        // Обработка ввода пользователя
        char input;
        // input = _getch(); // Чтение символа в Windows
        input = getch(); // Чтение символа в Linux/Mac

        switch (input) {
        case 'a': // Движение влево
            playerX--;
            break;
        case 'd': // Движение вправо
            playerX++;
            break;
        case 'w': // Прыжок
            playerY--;
            break;
        case 's': // Приседание
            playerY++;
            break;
        case 'q': // Завершение игры
            gameOver = true;
            break;
        }
    }

    return 0;
}