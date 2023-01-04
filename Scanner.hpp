#include <string>
#include <vector>
#include "Token.hpp"

using namespace std;

class Scanner
{
private:
    /// @brief Scan a single token
    void ScanToken();

    /// @brief Consumes the next character in the source file
    char Advance();

    /// @brief Grabs the text of the current lexeme and creates a new token for it
    void AddToken(TokenType type);

    /// @brief The raw source code is stored as a string
    string m_sources;
    /// @brief Existing tokens
    vector<Token> m_tokens;
    /// @brief Points to the first character in the lexeme to be scanned
    int m_start = 0;
    /// @brief Points at the character currently considered
    int m_current = 0;
    /// @brief Tracks what source line m_current is on so we can produce tokens that know their location
    int m_line = 0;

public:
    /// @brief default constructor
    Scanner(string source);

    /// @brief Scan for tokens
    vector<Token> ScanTokens();

    /// @brief Only consumed the current character if it's what we're looking for
    bool Match(char expected);

    /// @brief Tells us if we've consumed all the characters
    /// @return True if consumed all characters, false otherwise
    bool IsAtEnd();
};
