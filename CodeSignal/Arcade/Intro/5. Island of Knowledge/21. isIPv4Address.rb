def is_integer?
    self.to_i.to_s == self
end

def isIPv4Address(inputString)
    inputString.count('.') == 3 && inputString.split('.').all? { |s| s.is_integer? && s.to_i >= 0 && s.to_i < 256 }
end
