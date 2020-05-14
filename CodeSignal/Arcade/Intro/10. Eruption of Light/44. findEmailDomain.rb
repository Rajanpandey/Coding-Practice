def findEmailDomain(address)
    address.gsub(/.+@([^.]+)/, '\1')
end
