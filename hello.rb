#!/usr/bin/env ruby
def sayHello
	print("What's your name? ")
	input = gets.chomp()
	puts("Hello, " + input)
end

sayHello
