class Solution
    # @param a : string
    # @return a string
    def simplifyPath(a)
        stack = []
        arr = a.strip.split("/")
        arr = arr[0..-2] if arr.last == "/"
        arr.each do |item|
            if item == ".."
                stack.pop
            elsif item != "." and item != ""
                stack.push item
            end
            
        end 
        "/" + stack.join("/")
    end
end