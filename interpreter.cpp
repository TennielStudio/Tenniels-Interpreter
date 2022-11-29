#include <iostream>
#include <string>
#include <fstream>
#include "interpreter.hpp"

using namespace std;

void Interpreter::RunFile(string path)
{
    ifstream file;
    file.open(path, ios::in);

    if (file.is_open())
    {
        cout << "file is open" << endl;
    }

    if (hadError)
    {
        exit(3);
    }
}

void Interpreter::RunPrompt()
{
    string filePath = "";
    cout << "> ";
    cin >> filePath;
    ifstream file;
    file.open(filePath, ios::in);
    if (file.is_open())
    {
        cout << "file is open" << endl;
    }

    hadError = false;
}

void Interpreter::Report(int line, string errorLocation, string message)
{
    cout << "[line: " << line << "] Error: " << errorLocation << ": " << message << endl;
}

void Interpreter::Error(int line, string message)
{
    Report(line, "", message);

    hadError = true;
}