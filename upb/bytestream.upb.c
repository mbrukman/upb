// This file was generated by upbc (the upb compiler).
// Do not edit -- your changes will be discarded when the file is
// regenerated.

#include "upb/def.h"

const upb_msgdef upb_bytestream_msgs[1];
const upb_fielddef upb_bytestream_fields[1];
const upb_enumdef upb_bytestream_enums[0];
const upb_tabent upb_bytestream_strentries[4];
const upb_tabent upb_bytestream_intentries[0];
const _upb_value upb_bytestream_arrays[2];

#ifdef UPB_DEBUG_REFS
static upb_inttable reftables[4];
#endif

const upb_msgdef upb_bytestream_msgs[1] = {
  UPB_MSGDEF_INIT("upb.ByteStream", UPB_INTTABLE_INIT(0, 0, UPB_CTYPE_PTR, 0, NULL, &upb_bytestream_arrays[0], 2, 1), UPB_STRTABLE_INIT(1, 3, UPB_CTYPE_PTR, 2, &upb_bytestream_strentries[0]), 5, &reftables[0], &reftables[1]),
};

const upb_fielddef upb_bytestream_fields[1] = {
  UPB_FIELDDEF_INIT(UPB_LABEL_OPTIONAL, UPB_TYPE_BYTES, 0, false, "bytes", 1, &upb_bytestream_msgs[0], NULL, 2, {0},&reftables[2], &reftables[3]),
};

const upb_enumdef upb_bytestream_enums[0] = {
};

const upb_tabent upb_bytestream_strentries[4] = {
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_NONE, UPB__VALUE_INIT_NONE, NULL},
  {UPB_TABKEY_STR("bytes"), UPB_VALUE_INIT_CONSTPTR(&upb_bytestream_fields[0]), NULL},
};

const upb_tabent upb_bytestream_intentries[0] = {
};

const _upb_value upb_bytestream_arrays[2] = {
  UPB_ARRAY_EMPTYENT,
  UPB_VALUE_INIT_CONSTPTR(&upb_bytestream_fields[0]),
};

#ifdef UPB_DEBUG_REFS
static upb_inttable reftables[4] = {
  UPB_EMPTY_INTTABLE_INIT(UPB_CTYPE_PTR),
  UPB_EMPTY_INTTABLE_INIT(UPB_CTYPE_PTR),
  UPB_EMPTY_INTTABLE_INIT(UPB_CTYPE_PTR),
  UPB_EMPTY_INTTABLE_INIT(UPB_CTYPE_PTR),
};
#endif
