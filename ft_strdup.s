section	.text
	global _ft_strdup
	extern _malloc
	extern _ft_strcpy
	extern _ft_strlen
	

_ft_strdup:
	push 	rdi
	call 	_ft_strlen
	inc 	rax
	mov 	rdi, rax
	call 	_malloc
	pop 	rdi
	cmp 	rax, byte 0
	je 		exit
	mov 	rsi, rdi
	mov 	rdi, rax
	call 	_ft_strcpy
	ret

exit:
	xor 	rax, rax
	ret