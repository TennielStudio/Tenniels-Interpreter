#include <string.h>
#include "TokenType.hpp"

using namespace std;
class Token
{
public:
    /// @brief Default constructor
    Token(TokenType type, string lexeme, LiteralType literal, int lineNumber);

    /// @brief Creates string that displays the token type lexeme and literal
    /// @return Returns the token type, lexeme, and literal in a string
    string ToString();

private:
    /// @brief The type of lexeme the lexeme represents - changes for each keyword, operator, punctuation
    TokenType m_tokenType;
    /// @brief A group of the smallest sequences that represent something in a list of characters
    string m_lexeme;
    /// @brief Represents umbers, strings, etc.
    LiteralType m_literal;
    /// @brief Notes which line the token appears on
    int m_lineNumber;
};