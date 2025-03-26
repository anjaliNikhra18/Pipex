# Pipex
UNIX Pipe Implementation in C

Recreated core functionality of shell pipes (cmd1 | cmd2) from scratch, handling process forking, file descriptors, and command execution with error management.

🔹 Key Features:

Implemented multi-process piping with fork(), pipe(), dup2(), and execve()

Supports absolute/relative paths and environment PATH lookup

Robust error handling (file access, command validity, pipe failures)

Bonus: Extended to handle multiple pipes (like cmd1 | cmd2 | cmd3)

🔹 Technical Skills:

Deep understanding of UNIX process management

Low-level file descriptor manipulation

Memory leak-free implementation (valgrind-checked)

42's strict Norminette-compliant C code

🔹 Relevance:

Demonstrates systems programming expertise

Foundation for understanding SAP job scheduling or DevOps pipelines

Proves ability to work with constrained environments
