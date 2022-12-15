#include "Scanner.hpp"

using namespace std;

Scanner::Scanner(string source) : m_sources(source)
{
}

vector<Token> Scanner::ScanTokens()
{
    while (!IsAtEnd())
    {
        m_start = m_current;
        ScanToken();
    }

    Token newToken(ENDOFFILE, "", m_line);
    m_tokens.push_back(newToken);
    return m_tokens;
}

void Scanner::ScanToken()
{
    char c = Advance();
    switch (c)
    {
    case '(':
        AddToken(LEFT_PAREN);
        break;
    case ')':
        AddToken(RIGHT_PAREN);
        break;
    case '{':
        AddToken(LEFT_BRACE);
        break;
    case '}':
        AddToken(RIGHT_BRACE);
        break;
    case ',':
        AddToken(COMMA);
        break;
    case '.':
        AddToken(DOT);
        break;
    case '-':
        AddToken(MINUS);
        break;
    case '+':
        AddToken(PLUS);
        break;
    case ';':
        AddToken(SEMICOLON);
        break;
    case '*':
        AddToken(STAR);
        break;
    }
}

char Scanner::Advance()
{
    return m_sources[m_current++];
}

void Scanner::AddToken(TokenType type)
{
    string text = m_sources.substr(m_start, m_current);
    Token newToken(type, text, m_line);
    m_tokens.push_back(newToken);
}

bool Scanner::IsAtEnd()
{
    return m_current >= m_sources.length();
}