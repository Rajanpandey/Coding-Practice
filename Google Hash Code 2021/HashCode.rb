# Brute force approach
# Points: 7.88 million (Highest: 10.58 million)
FILES = Dir["**/*.txt"].freeze
FILES.each do |file|
	carsAndPath = []
	simulationDuration = noOfIntersections = noOfStreets = noOfCars = fixedPoints = startingIntersection = endingIntersection = timeTakenToCrossStreet = 0
	firstLine = streetLine = noOfStreetsCarTravelsAndPath = []
	incomingStreets = {}
	streetDuration = {}
	noOfCarsOnStreet = {}

	File.foreach(file).with_index do |line, line_num|
		if line_num == 0
			firstLine = line.chomp.split.map(&:to_i)
			simulationDuration = firstLine[0]
			noOfIntersections = firstLine[1]
			noOfStreets = firstLine[2]
			noOfCars = firstLine[3]
			fixedPoints = firstLine[4]
		end
		if (1..noOfStreets).member? (line_num)
			streetLine = line.chomp.split
			startingIntersection = streetLine[0].to_i
			endingIntersection = streetLine[1].to_i
			streetName = streetLine[2]
			timeTakenToCrossStreet = streetLine[3].to_i
			incomingStreets[endingIntersection] ||= []
			incomingStreets[endingIntersection] << streetName
			# Create a graph
			streetDuration[streetName] = timeTakenToCrossStreet
		end
		if line_num > noOfStreets
			noOfStreetsCarTravelsAndPath = line.chomp.split
			carsAndPath << noOfStreetsCarTravelsAndPath
		end
	end

	carsAndPath.each_with_index do |paths, idx|
		paths[1..-1].each do |path|
			noOfCarsOnStreet[path] ||= 0
			noOfCarsOnStreet[path] += 1
		end
	end

	noOfCarsOnStreet = Hash[noOfCarsOnStreet.sort_by{ |_, v| -v }]
	
	busiestStreets = noOfCarsOnStreet.first(noOfCarsOnStreet.count / 2).to_h
	busiestIntersections = []
	incomingStreets.each do |intersectionID, streetNames|
		streetNames.each do |streetName|
			busiestIntersections << intersectionID if busiestStreets[streetName]
		end
	end

	File.open("#{file}_output", "w+") do |f|
		f.puts (noOfIntersections)
		incomingStreets.each do |intersectionID, streetNames|
			f.puts (intersectionID)
			f.puts (streetNames.count)
			streetNames.each do |streetName|
				f.puts ("#{streetName} 1")
			end
		end
	end
end
