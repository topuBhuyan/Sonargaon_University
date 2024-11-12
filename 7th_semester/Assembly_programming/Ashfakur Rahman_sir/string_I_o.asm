.model small                  ; Defines the memory model for the program as 'small'.

.stack 100h                   ; Reserves 256 bytes for the stack.

.data                         ; Data segment for storing variables.
    userString db 100         ; Buffer capacity for string input.
    db 0                      ; Byte for actual number of characters input.
    db 100 dup('$')           ; Initializes buffer space for input characters with '$'.
    msg db "Enter a string: $"; Prompt message with end-of-string marker '$'.
    newline db 13, 10, '$'    ; Newline (carriage return and line feed) and string terminator.

.code                         ; Code segment.
main proc                     ; Main procedure starts.

    mov ax, @data             ; Load the data segment address into AX.
    mov ds, ax                ; Set DS register to point to the data segment.

    ; Display prompt.
    mov ah, 9
    mov dx, offset msg
    int 21h                   ; Print the string "Enter a string: ".

    ; Input string.
    mov ah, 0Ah
    lea dx, userString
    int 21h                   ; Read string into userString.

    ; Print newline.
    mov ah, 9
    mov dx, offset newline
    int 21h                   ; Output newline and carriage return before the string.

    ; Output the entered string.
    mov ah, 9
    lea dx, [userString+2]
    int 21h                   ; Print the string entered by the user.

    ; Exit program.
    mov ah, 4ch
    int 21h                   ; Terminate the program.

main endp                     ; End of main procedure.
end main                      ; End of program, with start at 'main'.
