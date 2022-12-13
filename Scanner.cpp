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
        // ScanToken();
    }
    // TODO: add tokens to vector
    return {};
}

bool Scanner::IsAtEnd()
{
    return m_current >= m_sources.length();
}