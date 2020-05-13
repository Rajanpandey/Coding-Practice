bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return yourLeft == friendsLeft && yourRight == friendsRight || yourRight == friendsLeft && yourLeft == friendsRight;
}
