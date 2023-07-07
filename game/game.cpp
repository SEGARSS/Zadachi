#include <iostream>
#include <conio.h> // ��� ������� _getch() � Windows
// #include <curses.h> // ��� ������� getch() � Linux/Mac

int main() {
    const int width = 20; // ������ �������� ����
    const int height = 10; // ������ �������� ����

    int playerX = width / 2; // ��������� ��������� ������ �� �����������
    int playerY = height - 1; // ��������� ��������� ������ �� ���������

    bool gameOver = false; // ���� ��������� ����

    while (!gameOver) {
        // ��������� �������� ����
        system("cls"); // ������� ������ � Windows
        // system("clear"); // ������� ������ � Linux/Mac

        for (int i = 0; i < width + 2; i++) {
            std::cout << "#";
        }
        std::cout << std::endl;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (x == playerX && y == playerY) {
                    std::cout << "P"; // �����
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

        // ��������� ����� ������������
        char input;
        // input = _getch(); // ������ ������� � Windows
        input = getch(); // ������ ������� � Linux/Mac

        switch (input) {
        case 'a': // �������� �����
            playerX--;
            break;
        case 'd': // �������� ������
            playerX++;
            break;
        case 'w': // ������
            playerY--;
            break;
        case 's': // ����������
            playerY++;
            break;
        case 'q': // ���������� ����
            gameOver = true;
            break;
        }
    }

    return 0;
}