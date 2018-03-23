CXXFLAGS:=-std=gnu++11 -Wall -O2 -MMD -MP -ggdb

PROGRAMS = nbits

all: $(PROGRAMS)

clean:
	rm -f *~ *.o *.d test $(PROGRAMS)

#check: mtests
#	./mtests

-include *.d

nbits: nbits.o 
	g++ -std=gnu++11 $^ -o $@ -lsodium
