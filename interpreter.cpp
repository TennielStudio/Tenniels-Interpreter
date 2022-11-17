#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void runFile(string path)
{
    ifstream image;
    image.open(path, ios::in);
}

void runPrompt()
{
    // todo
}

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        cout << "Usage: jlox [script]" << endl;
    }
    else if (argc == 2)
    {
        runFile(argv[1]);
    }
    else
    {
        runPrompt();
    }
    return 0;
}
