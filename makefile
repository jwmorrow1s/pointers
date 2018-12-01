pointers = impls/pointers.c
main = src/main.c
test = tests/main.c
app: ${pointers}
	gcc -o app ${main} ${pointers} -I modules 
clean:
	if [ -e app ]; then rm app; fi
	if [ -e test1 ]; then rm test1; fi
tests: ${test}
	gcc -o test1 ${test} ${pointers} -I modules
run:
	@bash scripts/run.sh
