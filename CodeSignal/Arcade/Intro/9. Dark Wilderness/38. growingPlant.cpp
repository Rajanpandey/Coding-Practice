int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    if (desiredHeight <= upSpeed) return 1;
    return (desiredHeight - upSpeed - 1) / (upSpeed - downSpeed) + 2;
}
