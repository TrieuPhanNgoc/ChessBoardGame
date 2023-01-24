#ifndef _CHECHKBOARD_H_
#define _CHECHKBOARD_H_

#include "common.h"
#include "GamePiece.h"

namespace chess {
    class ChessBoard;

    class ChessBoard { 
        public:
            typedef enum {
                Asterisk    =   0,
            } BoardType;

            typedef enum {
                eValid      =   0,
                eInvalid,
            } LocationState;

        public:
            // static ChessBoard& getInstance();
            ChessBoard() {
            }

            ~ChessBoard();

            void createBoard();
            void updateBoard();
        
        protected:
            GamePiece MainGameBoard[8][8];
    };
};

#endif