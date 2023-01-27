global    main
	extern    printf

	section .text
main:
	mov   edi, format
	xor   eax, eax
	call  printf
	mov 	eax, 0
	ret
message:   db "Hello, Holberton", 0
format:    db "%s", 10, 0
