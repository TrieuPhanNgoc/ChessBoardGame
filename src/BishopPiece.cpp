#include "BishopPiece.h"
namespace chess
{
    BishopPiece::BishopPiece(const ColorOfPiece &color, const Piece &piece) : GamePiece(color, piece) {}

    BishopPiece::~BishopPiece() {}

    ColorOfPiece BishopPiece::getColor()
    {
        return this->m_color;
    }

    Piece BishopPiece::getPiece()
    {
        return this->m_piece;
    }
}