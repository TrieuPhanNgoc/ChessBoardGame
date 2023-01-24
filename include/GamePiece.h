#ifndef _GAME_PIECE_H
#define _GAME_PIECE_H

#include "common.h"

namespace chess
{
    typedef enum
    {
        eWhite = 0,
        eBlack
    } ColorOfPiece;

    typedef enum
    {
        King = 0,
        Queen,
        Pawn,
        Bishop,
        Rook,
        Knight
    } Piece;

    class GamePiece
    {
        public:
            GamePiece(const ColorOfPiece &color, const Piece &piece) : m_color(color), m_piece(piece) {}
            ~GamePiece() {}
            virtual ColorOfPiece getColor() = 0;
            virtual Piece getPiece() = 0;

        protected:
            ColorOfPiece m_color;
            Piece m_piece;
    };

    // class KingPiece : public GamePiece {
    //     public:
    //         KingPiece(const ColorOfPiece& color, const Piece& piece);
    //         virtual ~KingPiece();
    //         ColorOfPiece getColor();
    // };
}

#endif