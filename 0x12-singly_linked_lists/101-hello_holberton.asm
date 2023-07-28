section .data
    hello db "Hello, Holberton", 0

section .bss
    buffer resb 32   ; Reserve a buffer to hold the format string

section .text
    global _start

    extern printf   ; Declare the external reference to the printf function

_start:
    ; Copy the format string to the buffer
    mov rsi, hello  ; Source address (hello string)
    mov rdi, buffer ; Destination address (buffer)
    call strcpy     ; Call the custom strcpy function

    ; Set up the arguments for printf
    mov rdi, buffer ; Use the buffer as the format string
    xor rax, rax    ; RAX = 0 to align with the SysV AMD64 calling convention
    call printf

    ; Exit the program (exit code 0) using the Linux syscall
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; exit code 0
    syscall

section .text
    ; Custom implementation of strcpy function
    ; void strcpy(char *dest, const char *src)
    strcpy:
        push rsi            ; Save the source pointer
        mov rsi, rdi        ; Copy the destination pointer to RSI
    .copy_loop:
        mov al, byte [rsi]  ; Load a byte from the source string
        mov byte [rdi], al  ; Store the byte to the destination string
        test al, al         ; Check if it's the null terminator
        jz .copy_done       ; If it is, we're done
        inc rsi             ; Move to the next byte in the source string
        inc rdi             ; Move to the next byte in the destination string
        jmp .copy_loop      ; Repeat the loop
    .copy_done:
        pop rsi             ; Restore the source pointer
        ret                 ; Return

