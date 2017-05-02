#include <windows.h>

// Функция устанавливает курсор в позицию x,y
// где x - номер столбца
// y - номер строки
// нумерация строк и столбцов идет с 0
void setCursorPosition(int x, int y)
{
    COORD position = {x,y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, position);
}