#ifndef _CHECHKBOARD_H_
#define _CHECHKBOARD_H_

#include "common.h"
#include "GamePiece.h"
#include "KingPiece.h"
#include "BishopPiece.h"

namespace chess {
    class ChessBoard;

    class Pattern {
        
    };

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
            ChessBoard();
            ~ChessBoard();

            void initialize();
            void createBoard();
            void updateBoard();
            void deleteBoard();
        
        protected:
            GamePiece* MainGameBoard[8][8];
            Pattern m_pattern;

        private:
            std::string* m_name;
    };
};

#endif