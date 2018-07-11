echo "set disassembly-flavor intel" > ~/.gdbinit
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
gcc -m32 -fno-stack-protector -z execstack