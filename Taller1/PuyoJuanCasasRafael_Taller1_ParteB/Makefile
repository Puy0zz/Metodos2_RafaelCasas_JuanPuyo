all: main.o microwave.o remotecontrol.o output

main.o: main.cpp ; g++ -c main.cpp

microwave.o: microwave.cpp microwave.h remotecontrol.h ; g++ -c microwave.cpp

remotecontrol.o: remotecontrol.cpp remotecontrol.h microwave.h ; g++ -c remotecontrol.cpp

output: main.cpp microwave.cpp remotecontrol.cpp ; g++  main.o microwave.o remotecontrol.o -o output

clean: ; rm *.o output
