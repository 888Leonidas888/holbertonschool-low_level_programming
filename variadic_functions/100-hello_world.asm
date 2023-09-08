section .text
	global _start
_start:

	mov rax, 1
	mov rdi, 1
	lea rsi, [hello]
	mov rdx, 14

	syscall

	mov rax, 60
	xor rdi, rdi

	syscall

section .data

	hello db "Hello world!", 10
