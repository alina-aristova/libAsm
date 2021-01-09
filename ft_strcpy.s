segment .text
	global _ft_strcpy

_ft_strcpy:
	xor		rcx, rcx
	cmp		rsi, 0
	je		exit

else:
	mov 	ah, byte[rsi + rcx]
	mov		byte[rdi + rcx], ah
	cmp		byte[rsi + rcx], 0
	je		exit
	inc		rcx
	jmp		else

exit:
	mov		rax, rdi
	ret