bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int k, l;
    bool firstError = true, secondError = true;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            if(firstError) {
                k = a[i];
                l = b[i];
                firstError = false;
                continue;
            }
            if(secondError) {
                if(a[i] != l || b[i] != k) {
                    return false;
                }
                secondError = false;
                continue;
            }
            if(!firstError && !secondError) {
                return false;
            }
        }
    }
    return true;
}

// Ruby sol:
// def areSimilar(a, b)
//   a.sort == b.sort && a.each.count { |item| a.index(item) != b.index(item) } <= 2
// end
