EFILES= printmyname forkexecv forkexecl
all: $(EFILES)

printmyname: printmyname.o
forkexecv: forkexecv.o
forkexecl: forkexecl.o

clean:
	rm -f *.o $(EFILES)
