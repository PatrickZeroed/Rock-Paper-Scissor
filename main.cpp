#include <iostream>
#include <ctime>
#include <windows.h>

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
void clear();

int main()
{
    char player, computer;

    player = getPlayerChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The computer choose: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

void clear()
{
    std::system("cls");
}

char getPlayerChoice()
{

    char player;

    do
    {
        std::cout << "\tRock Paper Scissor Game\n";
        std::cout << "---------------------------------------\n";
        std::cout << "Rock(R)\nPaper(P)\nScissor(S)\nMake your choice: ";
        std::cin >> player;
        clear();
    } while (player != 'R' && player != 'r' && player != 'P' && player != 'p' && player != 'S' && player != 's');

    return player;
}

char getComputerChoice()
{

    srand(time(NULL));
    int num = (rand() % 3) + 1;

    switch (num)
    {
    case 1:
        return 'r';
        break;

    case 2:
        return 'p';
        break;

    case 3:
        return 's';
        break;
    default:
        break;
    }

    return num;
}

void showChoice(char choice)
{

    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;

    case 'R':
        break;
        std::cout << "Rock\n";

    case 'p':
        std::cout << "Paper\n";
        break;

    case 'P':
        std::cout << "Paper\n";
        break;

    case 's':
        std::cout << "Scissor\n";
        break;
    case 'S':
        std::cout << "Scissor\n";
        break;

    default:
        break;
    }
}

void chooseWinner(char player, char computer)
{

    std::string lose = "You Lose!\n";
    std::string win = "You Win!\n";
    std::string tie = "Tied!\n";

    switch (player)
    {
    case 'r':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }
        else
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        break;

    case 'R':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }
        else
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        break;

    case 'p':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        else
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }

        break;

    case 'P':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        else
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }

        break;

    case 'S':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        else
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        break;
    case 's':
        if ((computer == 'r') || (computer == 'R'))
        {
            for (size_t i = 0; i < lose.size(); i++)
            {
                Sleep(200);
                std::cout << lose[i];
            }
        }
        else if ((computer == 'p') || (computer == 'P'))
        {
            for (size_t i = 0; i < win.size(); i++)
            {
                Sleep(200);
                std::cout << "You Win!\n";
            }
        }
        else
        {
            for (size_t i = 0; i < tie.size(); i++)
            {
                Sleep(150);
                std::cout << tie[i];
            }
        }
        break;

    default:
        break;
    }
}