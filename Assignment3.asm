.include "m328Pdef.inc"

Start:
	ldi r17, 0b11000011 ; identifying input pins 10,11,12,13
	out DDRD,r17		; declaring pins as input
	ldi r17, 0b11111111 ;
	out PORTD,r17		; activating internal pullup for pins 10,11,12,13  
	in r17,PIND
	
	ldi r20,0b00000010
	rcall loopr
	;21,22,23 and 24 are the inputs
	
	ldi r21,0b00000001
	and r21,r17 ;I
	lsr r17
	ldi r22,0b00000001
	and r22,r17 ;C
	lsr r17
	ldi r23,0b00000001
	and r23,r17 ;F
	lsr r17
	ldi r24,0b00000001
	and r24,r17 ;A

	ldi r25,0b00000001
	
    ldi r26,0b00000001 
	ldi r27,0b00000001 
    ldi r28,0b00000001 
	ldi r29,0b00000001
	
	;Mov all inputs to other registers
	mov r26,r21 ; I
    mov r27,r22 ; C
    mov r28,r23 ; F
    mov r29,r24 ; A
    
    ;Compliment all the inputs   
    eor r21, r25 ; I'
    eor r22, r25 ; C'
    eor r23, r25 ; F'
    eor r24, r25 ; A'
    
    and r29,r23;
    and r27,r24;
    and r24,r26;
    
    or r29,r27;
    or r24,r29;
    
       
        ldi r20,0b00000101
	rcall loopl

	ldi r16, 0b00100000 ;identifying output pins 2,3,4,5
	out DDRB,r16		;declaring pins as output
	out PORTB,r24		;writing output to pins 2,3,4,5
	

	rjmp Start

loopr:	lsr r17
	dec r20
	brne loopr
	ret

loopl:	lsl r24
	dec r20
	brne loopl
	ret
