section .text
	extern _malloc
	global _ft_list_push_front

_ft_list_push_front:
	push	rdi			
	push	rsi			
	mov		rdi, 16		
	call	_malloc		
	pop		rsi			
	pop		rdi			
	cmp		rax, 0		
	je		end			
	mov		[rax], rsi	 
	mov		rcx, [rdi]	
	mov		[rax + 8], rcx 
	mov		[rdi], rax	

end:	
	ret