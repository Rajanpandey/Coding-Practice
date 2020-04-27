def sum_terms(n)
    (1..n).map { |x| x**2+1 }.reduce(0, :+) if n >= 0
end