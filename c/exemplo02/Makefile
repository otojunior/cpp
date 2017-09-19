CC				=	gcc

all:
	make debug
	make release

initdebug:
	@echo "[MAKE] (init debug...)"
	$(eval CFLAGS := -O0 -g3 -Wall)
	$(eval OUTPUT = Debug)
	mkdir -pv $(OUTPUT)
	
initrelease:
	@echo "[MAKE] (init release...)"
	$(eval CFLAGS := -O3 -Wall)
	$(eval OUTPUT = Release)
	mkdir -pv $(OUTPUT)
	
build:
	@echo "[MAKE] (building...)"
	rm -rf $(OUTPUT)/*
	$(CC) $(CFLAGS) -c src/calculadora.c -o $(OUTPUT)/calculadora.o
	$(CC) $(CFLAGS) -c src/exemplo02.c -o $(OUTPUT)/exemplo02.o
	$(CC) $(OUTPUT)/*.o -o $(OUTPUT)/exemplo02
	
debug: initdebug build

release: initrelease build
	
clean:
	@echo "[MAKE] (cleaning...)"
	rm -rf Debug/*
	rm -rf Release/*