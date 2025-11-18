compilador = cc
Objetivo = main-PL403.exe
.PHONY: all clean documentos

all : $(Objetivo)
$(Objetivo) : functions-PL403.o main-PL403.o
	$(compilador) -o $@ $^ -lm
%.o : %.c
	$(compilador) -c $<
documentos:
	doxygen Doxyfile

clean:
	rm *.o
	@echo "Programa: removendo todos os ficheiros!"







