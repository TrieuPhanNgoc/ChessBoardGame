# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project's name
project(ChessBoardGame)

set(CHESS_HDR   include/KingPiece.h
                # include/Queen.h
                include/BishopPiece.h
                # include/ChessBoard.h
                # include/Knight.h
                # include/Rook.h
                # include/Pawn.h
                include/GamePiece.h
)

set(CHESS_SRC   src/main.cpp
                src/BishopPiece.cpp
                src/KingPiece.cpp
)

include_directories(include)

add_executable(chess_game  ${CHESS_HDR} ${CHESS_SRC})

# target_include_directories(include)
target_compile_options(chess_game PRIVATE -std=c++11 -Wall)