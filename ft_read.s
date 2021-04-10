global _ft_read
section .text
extern ___error

_ft_read:
    mov rax, 0x2000003
    syscall
    jc error_found
    ret

error_found:
    push r10
    mov r10,rax
    call ___error
    mov [rax],r10
    pop r10
    mov rax,-1
    ret
