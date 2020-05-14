bool bishopAndPawn(std::string bishop, std::string pawn) {
    return abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1]);
}
