#include "GamePiece.h"
#include "KingPiece.h"
#include "BishopPiece.h"

using namespace chess;

int main() {
    GamePiece* new_Piece[2];
    new_Piece[0] = new KingPiece(chess::ColorOfPiece::eBlack, chess::Piece::King);
    new_Piece[1] = new BishopPiece(chess::ColorOfPiece::eWhite, chess::Piece::Bishop);

    if (new_Piece) {
        for (auto elem : new_Piece) {
            delete elem;
            elem = nullptr;
        }
    }
    return 0;
};