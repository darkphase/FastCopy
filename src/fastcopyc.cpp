#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

nt GetArgOpt(WCHAR *arg, int default_value);
BOOL MakeFileToPathArray(WCHAR *path_file, PathArray *path, BOOL is_ucs2);