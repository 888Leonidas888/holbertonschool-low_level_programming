section .text
	global main

main:
	mov eax, 4
	mov ebx, 1
	mov ecx, jhony
	mov edx, 13
	int 0x80

	mov eax, 1
	mov ebx, 0
	int 0x80

section .data

	jhony db 72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 10
