segment .text
	global _ft_strcmp

_ft_strcmp:
	xor		rcx, rcx
	jmp		str

moving:
	cmp		rax, byte 0
	je		return
	inc		rcx

str:
	movzx	rax, byte[rdi + rcx]
	movzx	rbx, byte[rsi + rcx]
	cmp		rax, rbx
	je		moving
	jg		return_more
	jl		return_less

return:
	xor		rax, rax
	ret

return_more:
	mov		rax, 1
	ret

return_less:
	mov		rax, -1
	ret