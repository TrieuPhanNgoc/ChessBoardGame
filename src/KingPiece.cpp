#include "KingPiece.h"

namespace chess
{
    KingPiece::KingPiece(const ColorOfPiece &color, const Piece& piece) : GamePiece(color, piece){}

    KingPiece::~KingPiece() {}

    ColorOfPiece KingPiece::getColor()
    {
        return this->m_color;
    }

    Piece KingPiece::getPiece() {
        return this->m_piece;
    }
}