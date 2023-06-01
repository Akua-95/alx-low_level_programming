global   main
	extern    printf
main:
	;prepare arguments for printf
	mov   edi, format
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
format: db `Hello, Holberton\n`,0
