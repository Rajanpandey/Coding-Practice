int chessKnight(std::string c) {
    int ans = 0;

    for(int i = -2; i < 3; i++)
        for(int j = -2; j < 3; j++)
            if (abs(i) + abs(j) == 3)
                ans += c[0] + i >= 'a' && c[0] + i <= 'h' && c[1] + j >= '1' && c[1] + j <= '8';

    return ans;
}
