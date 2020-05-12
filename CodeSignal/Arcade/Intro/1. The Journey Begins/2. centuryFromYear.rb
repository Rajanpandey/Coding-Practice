def centuryFromYear(year)
    return 1 if year <= 100
    return year/100 if year % 100 == 0
    (year / 100) + 1
end
