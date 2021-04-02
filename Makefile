all.exe:unity/unity.c src/sum.c test/test_sum.c
	gcc -I inc -I unity src/sum.c test/test_sum.c unity/unity.c -o all.exe

run:all.exe	
	all.exe

coverage:
	-fprofile-arcs -ftest-coverage main.c -o all.exe
	gcov main.c

clean:
	del /q *.exe