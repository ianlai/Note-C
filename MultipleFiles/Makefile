CC = gcc 
CFLAGS = -Wall -g

#-------- .h files --------
IDIR = include
INCLUDES = -I$(IDIR)

#-------- .c files --------
#SRCS = test.c lib.c libbase.c
SDIR = src
SRCS = $(shell find $(SDIR) -name "*.c")

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




