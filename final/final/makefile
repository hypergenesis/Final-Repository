#execute titan
#titan: titan.o CinReader.o
#	g++ -Wall -g -o titan titan.o CinReader.o 

#execute Jupiter
#jupiter: jupiter.o CinReader.o rocketship.o
#	g++ -Wall -g -o jupiter jupiter.o CinReader.o rocketship.o

#execute saturn
#saturn: saturn.o CinReader.o rocketship.o
#	g++ -Wall -g -o saturn saturn.o CinReader.o rocketship.o

#execute mars
mars: mars.o CinReader.o rocketship.o specialrocketship.o
	g++ -Wall -g -o mars mars.o CinReader.o rocketship.o specialrocketship.o

#create rocketship object
rocketship: rocketship.cpp rocketship.h
	g++ -Wall -g -c rocketship.cpp

#create specialrocketship object
specialrocketship: specialrocketship.cpp specialrocketship.h
	g++ -Wall -g -c specialrocketship.cpp

#cleans up old .o files	
clean:
	rm *.o *test 

#KEYS ARE DOWN HERE	
	#key: 1535
	#jupiter key: 53789052
	#mars key: 207461506