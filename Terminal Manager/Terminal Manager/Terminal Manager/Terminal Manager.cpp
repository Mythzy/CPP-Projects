#include <iostream>
#include <Windows.h>
#include <shellapi.h>

int main()
{
    std::cout << "Menu loading...\n";
    Sleep(1000);
    std::cout << "10%\n";
    Sleep(1000);
    std::cout << "20%\n";
    Sleep(1000);
    std::cout << "30%\n";
    Sleep(1000);
    std::cout << "40%\n";
    Sleep(1000);
    std::cout << "50%\n";
    Sleep(1000);
    std::cout << "60%\n";
    Sleep(1000);
    std::cout << "70%\n";
    Sleep(1000);
    std::cout << "80%\n";
    Sleep(1000);
    std::cout << "90%\n";
    Sleep(1000);
    std::cout << "100%\n";
    Sleep(1000);
    std::cout << "Loading Complete.\n";
    Sleep(1000);
    system("cls");
    std::cout << "Enter menu name here.\n";
    std::cout << "\n";
    Sleep(1000);
    std::cout << "Option 1 (F1): \n";
    std::cout << "Option 2 (F2): \n";
    std::cout << "Option 3 (F3): \n";
    std::cout << "Option 4 (F4): \n";

    
    while (true)
    {
        if (GetAsyncKeyState(VK_F1) & 1)
        {
            ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);
            
        }
        if (GetAsyncKeyState(VK_F2) & 1)
        {
            ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);

        }
        if (GetAsyncKeyState(VK_F3) & 1)
        {
            ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);

        }
        if (GetAsyncKeyState(VK_F4) & 1)
        {
            ShellExecute(0, 0, L"http://www.google.com", 0, 0, SW_SHOW);

        }
    }
}

