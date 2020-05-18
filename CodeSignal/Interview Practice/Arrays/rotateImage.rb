def rotateImage(a)
    a.transpose.map { |row| row.reverse }
end
