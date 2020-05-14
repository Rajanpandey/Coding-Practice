int electionsWinners(std::vector<int> votes, int k) {
    int highestVotes = *max_element(votes.begin(), votes.end()), ans = 0;

    if (k == 0)
        return (count(votes.begin(), votes.end(), highestVotes) > 1) ? 0 : 1;

    for (auto vote : votes)
        if (vote + k > highestVotes)
            ans += 1;

    return ans;
}
