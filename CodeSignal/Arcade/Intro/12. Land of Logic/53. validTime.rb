def validTime(time)
    time[2] == ':' && (00..23).member?(time[0..1].to_i) && (00..59).member?(time[3..4].to_i)
end
