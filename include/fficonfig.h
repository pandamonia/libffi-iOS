#define EH_FRAME_FLAGS "aw"
#define HAVE_ALLOCA 1
#define HAVE_ALLOCA_H 1
#define HAVE_DLFCN_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_MEMCPY 1
#define HAVE_MEMORY_H 1
#define HAVE_MMAP 1
#define HAVE_MMAP_ANON 1
#define HAVE_MMAP_FILE 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_MMAN_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define SIZEOF_DOUBLE 8
#define STDC_HEADERS 1

#ifdef HAVE_HIDDEN_VISIBILITY_ATTRIBUTE
#ifdef LIBFFI_ASM
#define FFI_HIDDEN(name) .hidden name
#else
#define FFI_HIDDEN __attribute__ ((visibility ("hidden")))
#endif
#else
#ifdef LIBFFI_ASM
#define FFI_HIDDEN(name)
#else
#define FFI_HIDDEN
#endif
#endif

#include <TargetConditionals.h>

#if (TARGET_OS_MAC || TARGET_IPHONE_SIMULATOR)

#define FFI_MMAP_EXEC_WRIT 1
#undef FFI_EXEC_TRAMPOLINE_TABLE
#define HAVE_AS_CFI_PSEUDO_OP 1
#define HAVE_LONG_DOUBLE 1
#define SIZEOF_LONG_DOUBLE 16

#else

#undef FFI_MMAP_EXEC_WRIT
#define FFI_EXEC_TRAMPOLINE_TABLE 1
#undef HAVE_AS_CFI_PSEUDO_OP
#undef HAVE_LONG_DOUBLE
#define SIZEOF_LONG_DOUBLE 8

#endif