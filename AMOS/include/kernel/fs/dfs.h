#ifndef _KERNEL_FS_DFS_H_
#define _KERNEL_FS_DFS_H_

#include <sys/types.h>
#include <kernel/io/io.h>

#define DFS_TYPE			2

struct DFS_ENTRY
{
	struct DFS_ENTRY	* next;
	struct IO_CALLTABLE * calltable;
	char * name;
};

struct DFS_ENTRY * dfs_add( char *, struct IO_CALLTABLE * );

int dfs_remove( char * );

int dfs_init();

#endif