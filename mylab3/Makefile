CC = gcc
CFLAGS = -O0 -g
NAME = rdparser

$(NAME):lrparser.tab.c lex.yy.c ast.c main.c
	$(CC) lrparser.tab.c lex.yy.c ast.c main.c -o $(NAME) $(CFLAGS) 

lrparser.tab.c:lrparser.y
	bison -d lrparser.y

lex.yy.c:lrlex.l
	flex lrlex.l

.PHONY: clean
clean:
	$(RM) *.o *.exe lrparser.tab.c y.tab.h lex.yy.c y.output $(NAME)
