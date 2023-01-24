#include "ChessBoard.h"

namespace chess {
    ChessBoard::ChessBoard() {
        createBoard();
    }
    
    ChessBoard::~ChessBoard() {
        deleteBoard();
    }

    void ChessBoard::createBoard() {
        for (int i = 0; i < 8; i++) {
            // Create the black Team under rooks
            MainGameBoard[0][i] = new KingPiece(ColorOfPiece::eBlack, Piece::King);

            // Creating the Rooks of black team
            MainGameBoard[1][i] = new KingPiece(ColorOfPiece::eBlack, Piece::King);


            // Create the Rooks of the white team
            MainGameBoard[6][i] = new BishopPiece(ColorOfPiece::eWhite, Piece::Bishop);

            // Create the white team under rooks
            MainGameBoard[7][i] = new KingPiece(ColorOfPiece::eWhite, Piece::Bishop);
        }
    }

    void ChessBoard::updateBoard() {

    }

    void ChessBoard::deleteBoard() {
        for (int i = 0; i < 8; ++i) {

            for (int j = 0; j < 8; ++j) {
                // Remove the board if any position exist
                if (MainGameBoard[i][j]) {
                    delete MainGameBoard[i][j];
                    MainGameBoard[i][j] = nullptr;
                }
            }
        }
    }
}