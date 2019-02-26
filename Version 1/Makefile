# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CC = gcc                        # compiler to use
LINKERFLAG = -ll -ly
objects = y.tab.c lex.yy.c

SRCS_L := $(wildcard *.l)
SRCS_Y := $(wildcard *.y)

exec: $(objects)
	${CC} -o exec $(objects) $(LINKERFLAG)

y.tab.c: $(SRCS_Y)
	@echo "Checking.."
	yacc -d $<

lex.yy.c: $(SRCS_L)
	@echo "Creating object.."
	lex $< 

clean:
	@echo "Cleaning up..."
	rm exec lex.yy.c y.tab.*