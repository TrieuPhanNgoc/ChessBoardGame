#ifndef KING_H
#define KING_H

#include "GamePiece.h"

namespace chess
{
    class KingPiece : public GamePiece
    {
        public:
            KingPiece(const ColorOfPiece &color, const Piece &piece);
            virtual ~KingPiece();
            ColorOfPiece getColor();
            Piece getPiece();
            bool is_valid_for_move();
    };
};

#endif