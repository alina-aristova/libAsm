section .text
	global _ft_list_size

_ft_list_size:
	xor		rax, rax		
moving:
	cmp		rdi, 0		
	je		return		
	mov		rdi, [rdi + 8]
	inc		rax			
	jmp		moving		
return:
	ret