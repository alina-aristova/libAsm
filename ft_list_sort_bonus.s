
section .text
	global _ft_list_sort

_ft_list_sort:
	mov		r10, [rdi]	
	mov		rdi, [rdi]	

loop:
	mov		r11, [rdi+8]
	cmp		r11, 0		
	je		end			
	push	rdi			
	push	rsi			
	mov		rcx, rsi	
	mov		rsi, [rdi+8]
	mov		rsi, [rsi]	
	mov		rdi, [rdi]	
	call	rcx			
	pop		rsi			
	pop		rdi			
	cmp		rax, 0		
	jg		unsorted
	jmp		sort
		

unsorted:
	mov		r12, [r11]	
	mov		r13, [rdi]
	mov		[rdi], r12	
	mov		[r11], r13	
	mov		rdi, r10	
	jmp		loop
sort:	
	mov		rdi, [rdi+8]
	jmp		loop		
end:
	ret

