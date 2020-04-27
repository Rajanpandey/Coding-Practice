def count_multibyte_char(string)
  string.each_char.select {|b| b.bytesize > 1 }.length
end