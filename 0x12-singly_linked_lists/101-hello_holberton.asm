section		.text   
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
section 	.data
	msg db `Hello, Holberton\n`,0

