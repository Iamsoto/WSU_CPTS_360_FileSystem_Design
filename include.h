#ifndef INCLUDE_H
#define INCLUDE_H

#include <time.h>
#include "type.h"

typedef unsigned int u32;

extern int dev;
extern int ninodes;

extern char **BrokenDownPath(char *path, int *count);
extern int print_dir_entries(MINODE *mip);
extern MINODE *iget(int dev, int ino, int bg_inode_table);
extern int get_block(int fd, int blk, char buf[ ]);
//extern int search_inode(INODE * inodePtr, char *directory_name);
extern int search_minode(MINODE *mip, char *directory_name);
extern MINODE *iget(int dev, int ino, int bg_inode_table);
extern int fd;
extern MINODE *root;
extern PROC *running;
extern u32 bg_inode_table;
extern int put_block(int fd, int blk, char buf[ ]);
extern int ialloc(int dev, int bg_inode_table);

extern char buf[BLOCK_SIZE];
MINODE minode[NMINODES];

#endif








