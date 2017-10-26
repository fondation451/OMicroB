#define OCAML_STACK_WOSIZE              1
#define OCAML_HEAP_WOSIZE               1
#define OCAML_HEAP_INITIAL_WOSIZE       0
#define OCAML_STACK_INITIAL_WOSIZE      0
#define OCAML_GLOBDATA_NUMBER           0
#define OCAML_BYTECODE_BSIZE            1
#define OCAML_PRIMITIVE_NUMBER          0
#define OCAML_VIRTUAL_ARCH             32

#include </Users/arcadium/github/OMicroB/src/byterun/values.h>

#define OCAML_STOP                      0

val_t ocaml_heap[OCAML_HEAP_WOSIZE * 2] = {
};

const val_t* ocaml_heap1 = ocaml_heap;
const val_t* ocaml_heap2 = ocaml_heap + OCAML_HEAP_WOSIZE;

val_t acc = Val_int(0);

val_t ocaml_stack[OCAML_STACK_WOSIZE] = {
  /* 0 */  Val_int(0)
};

val_t ocaml_global_data[OCAML_GLOBDATA_NUMBER] = {
};

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /* 0 */  OCAML_STOP
};

#include </Users/arcadium/github/OMicroB/src/byterun/runtime.c>

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
};
