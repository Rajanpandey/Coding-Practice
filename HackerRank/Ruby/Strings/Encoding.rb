def transcode(str)
    return str if str.encoding.name == "UTF-8"
    str.force_encoding(Encoding::UTF_8)
end