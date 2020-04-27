def serial_average(data)
    serial = data[0,4]
    n1 = data[4, 5]
    n2 = data[10, 6]
    s = ((n1.to_f + n2.to_f) / 2).round(2)
    "#{serial}#{s}"
end