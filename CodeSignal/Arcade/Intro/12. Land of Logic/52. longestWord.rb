def longestWord(text)
    text.scan(/[A-Za-z]+/).max_by(&:length)
end
