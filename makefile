compilador = cc
Objetivo = main-PL403.exe
.PHONY: all clean

all : $(Objetivo)
$(Objetivo) : functions-PL403.o main-PL403.o
	$(compilador) -o $@ $^ -lm
%.o : %.c
	$(compilador) -c $<
clean:
	rm *.o
	@echo "Programa: removendo todos os ficheiros!"







