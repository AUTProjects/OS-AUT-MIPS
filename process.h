//
// Created by pesher on 1/14/16.
//
struct trapframe;
struct context;

struct process {
    uint sz;                     // Size of process memory (bytes)
    uint* pgdir;                 // Page table
    char *kstack;                // Bottom of kernel stack for this process
  //  enum procstate state;        // Process state
    int pid;                     // Process ID
  //  struct process *parent;      // Parent process
 //   struct trapframe *tf;        // Trap frame for current syscall
 //   struct context *context;     // swtch() here to run process
    void *chan;                  // If non-zero, sleeping on chan
    int killed;                  // If non-zero, have been killed
    struct file *ofile[16];  // Open files
    struct inode *cwd;           // Current directory
    char name[16];               // Process name (debugging)
};
