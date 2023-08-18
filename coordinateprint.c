#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=20;
    c.Y=8;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    gotoxy(40,8);
    printf("hello");
    getch();
}
