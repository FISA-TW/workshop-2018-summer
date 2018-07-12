int main(void){
	asm("\
		XOR %eax, %eax;\
		push $0x0068732f;\
		push $0x6e69622f;\
		mov %eax, %ecx;\
		mov %eax, %edx;\
		mov %esp, %ebx;\
		mov $0xb, %eax;\
		int $0x80;\
	");
}
