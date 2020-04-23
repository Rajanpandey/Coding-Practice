# @param {String} s
# @param {String} t
# @return {Boolean}
def backspace_compare(s, t)
     applyBackspace(s) == applyBackspace(t)
end

def applyBackspace(str)
    stack = []
    str.each_char { |char| char != '#' ? stack.push(char) : stack.pop }
    stack.join(', ')
end
