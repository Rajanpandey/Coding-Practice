# Total score = 4,323,572

BLD_array = gets.chomp.split
B = BLD_array[0].to_i
L = BLD_array[1].to_i
D = BLD_array[2].to_i

score = gets.chomp.split

libraries = {}
for i in 0..L-1
    BSS_array = gets.chomp.split
    libraries[i] = {}
    libraries[i]['no_of_books'] = BSS_array[0]
    libraries[i]['days_to_signup'] = BSS_array[1]
    libraries[i]['books_scanned_per_day'] = BSS_array[2]
    libraries[i]['books_id'] = gets.chomp.split
end

#find days to days_to_signup in ascending order
library_and_days_to_signup = {}
libraries.each do |key, value| 
    library_and_days_to_signup[value['days_to_signup']] = key
end
library_and_days_to_signup = library_and_days_to_signup.sort.to_h

scanning_day = 0
answer = {}
library_and_days_to_signup.each do |key, value|
    scanning_day += key.to_i
    answer[value] = libraries[value]['books_id'].sort.reverse
    answer[value] = answer[value][0..((D-scanning_day)*libraries[value]['days_to_signup'].to_i)]
end

p answer.size
answer.each do |key, value|
    puts "#{key} #{value.size}"
    puts value.join(' ')
end
