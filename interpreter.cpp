#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void RunFile(string path)
{
    ifstream file;
    file.open(path, ios::in);

    if (file.is_open())
    {
        cout << "file is open" << endl;
    }
}

void RunPrompt()
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
}

void Report(int line, string errorLocation, string message)
{
    cout << "[line: " << line << "] Error: " << errorLocation << ": " << message << endl;
}

void Error(int line, string message)
{
    Report(line, "", message);
}

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        cout << "Usage: jlox [script]" << endl;
    }
    else if (argc == 2)
    {
        RunFile(argv[1]);
    }
    else
    {
        RunPrompt();
    }
    return 0;
}
