#include <iostream>
#include <string.h>
#include "Token.hpp"
#include <sstream>
using namespace std;

Token::Token(TokenType type, string lexeme, LiteralType literal, int lineNumber) : m_tokenType(type), m_lexeme(lexeme), m_literal(literal), m_lineNumber(lineNumber)
{
}

string Token::ToString()
{
    stringstream ss;
    ss << m_tokenType << " " << m_lexeme << " " << m_literal;

    return ss.str();
}