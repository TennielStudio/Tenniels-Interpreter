#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Interpreter
{
public:
    /// @brief Opens the file at the given path
    /// @note This is still in the works
    /// @param[in] path The path to the file, passed in using a command line argument
    void RunFile(string path);

    /// @brief If no path argument is given in the command line, have the user type in a path and open the file at that path
    /// @note This is still in the works
    void RunPrompt();

    /// @brief Prints out an error message when it occurs and at what line it occurs
    /// @param[in] line The line number the error is located
    /// @param[in]  errorLocation Where in the line the error is located
    /// @param[in] message A message to desribe the error
    void Report(int line, string errorLocation, string message);

    /// @brief Placed in code to handle and report errors
    /// @param[in] line The line number the error is located
    /// @param[in] message A message to desribe the error
    void Error(int line, string message);

    /// @brief True if an error occured
    /// @note This will not allow code to execute if there is a known error
    bool hadError = false;
};