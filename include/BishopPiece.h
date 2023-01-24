#ifndef BISHOP_H
#define BISHOP_H

#include "GamePiece.h"

namespace chess {
    class BishopPiece : public GamePiece {
        public:
            BishopPiece(const ColorOfPiece &color, const Piece &piece);
            virtual ~BishopPiece();
            ColorOfPiece getColor();
            Piece getPiece();

    };
};

#endif