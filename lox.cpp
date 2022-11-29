#include <iostream>
#include <string>
#include <fstream>
#include "interpreter.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Interpreter interpreter;
    if (argc > 2)
    {
        cout << "Usage: jlox [script]" << endl;
    }
    else if (argc == 2)
    {
        interpreter.RunFile(argv[1]);
    }
    else
    {
        interpreter.RunPrompt();
    }
    return 0;
}
