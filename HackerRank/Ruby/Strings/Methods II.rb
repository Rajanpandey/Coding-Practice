def mask_article(text, ele)
  ele.each {|a| text.gsub!(a,strike(a))}
  text
end

def strike s
  "<strike>#{s}</strike>"
end
