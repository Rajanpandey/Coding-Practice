#!/usr/bin/ruby

# Get all folders and remove the dotfiles
list_of_folders = Dir.entries(__dir__).select {|entry| File.directory? File.join(__dir__,entry) and !(entry =='.' || entry == '..') }.reject! {|folder_name| folder_name.include?('.')}

# folder_file_count hash stores folders and number of files inside it
folder_file_count = {}
list_of_folders.map { |folder_name| folder_file_count[folder_name] = Dir[File.join(folder_name, '**', '*')].count { |file| File.file?(file) } }

# README.md body
readme_body = "
# Coding-Practice

## About

This repository contains solutions of different coding problems from various websites and books, created with the intent to help someone with their coding practice or interview preparation.

## Contents

| Folder Name | Number of Codes |
|    :---     |      :---:      |
"
folder_file_count.each { |folder_name, file_count| readme_body += "| #{folder_name} | #{file_count} |\n" }
readme_body +=
"
## Languages

The codes are mostly written in C++. Some are in Ruby and Python also.

## My Profiles

[InterviewBit Profile](https://www.interviewbit.com/profile/rajan-pandey)

[HackerRank Profile](https://www.hackerrank.com/RajanPandey)

[LeetCode Profile](https://leetcode.com/rkpandey/)

[CodeChef Profile](https://www.codechef.com/users/rkpandey)

## How To Contribute

1. Fork the repository 
2. Do the desired changes (add/delete/modify)
3. Write the link of the problem as the commit message
4. Make a pull request
5. Mention about the modifications clear"

# Write the README.md body in README.md file
File.open("#{__dir__}/README.md", 'w') { |file| file.write(readme_body) }

