segment .text
	global _ft_strlen

_ft_strlen:
	xor 	rax, rax 				
	jmp		len						

len:
	cmp		byte[rdi + rax], byte 0		
	je		exit 					
	inc		rax						
	jmp		len						

exit:
	ret 							