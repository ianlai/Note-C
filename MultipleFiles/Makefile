CC = gcc 
CFLAGS = -Wall -g

#-------- .h files --------
IDIR = include
INCLUDES = -I$(IDIR)

#-------- .c files --------
SDIR = src
#SRCS = $(SDIR)/test.c $(SDIR)/lib.c $(SDIR)/libbase.c  #static 
SRCS = $(shell find $(SDIR) -name "*.c")                #dynamic 

OBJS = $(SRCS:.c=.o)

#-------- Executable --------
MAIN = run

all:$(MAIN) 
	@echo Line for all. 	

$(MAIN): $(OBJS)
	@echo Line for second target. 	
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	rm -f $(MAIN) $(OBJS)


