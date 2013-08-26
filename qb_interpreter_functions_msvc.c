/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2012 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Chung Leong <cleong@cal.berkeley.edu>                        |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "qb.h"
#include "qb_interpreter_msvc.h"

int qb_compare_ascending_F32(const void *a, const void *b) {
	if(*((float32_t *) a) < *((float32_t *) b)) {
		return -1;
	} else if(*((float32_t *) a) > *((float32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_F32_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_F32((float32_t *) a, len, (float32_t *) b, len);
}

int qb_compare_ascending_F64(const void *a, const void *b) {
	if(*((float64_t *) a) < *((float64_t *) b)) {
		return -1;
	} else if(*((float64_t *) a) > *((float64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_F64_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_F64((float64_t *) a, len, (float64_t *) b, len);
}

int qb_compare_ascending_S08(const void *a, const void *b) {
	if(*((int8_t *) a) < *((int8_t *) b)) {
		return -1;
	} else if(*((int8_t *) a) > *((int8_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_S08_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S08((int8_t *) a, len, (int8_t *) b, len);
}

int qb_compare_ascending_S16(const void *a, const void *b) {
	if(*((int16_t *) a) < *((int16_t *) b)) {
		return -1;
	} else if(*((int16_t *) a) > *((int16_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_S16_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S16((int16_t *) a, len, (int16_t *) b, len);
}

int qb_compare_ascending_S32(const void *a, const void *b) {
	if(*((int32_t *) a) < *((int32_t *) b)) {
		return -1;
	} else if(*((int32_t *) a) > *((int32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_S32_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S32((int32_t *) a, len, (int32_t *) b, len);
}

int qb_compare_ascending_S64(const void *a, const void *b) {
	if(*((int64_t *) a) < *((int64_t *) b)) {
		return -1;
	} else if(*((int64_t *) a) > *((int64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_S64_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S64((int64_t *) a, len, (int64_t *) b, len);
}

int qb_compare_ascending_U08(const void *a, const void *b) {
	if(*((uint8_t *) a) < *((uint8_t *) b)) {
		return -1;
	} else if(*((uint8_t *) a) > *((uint8_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_U08_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U08((uint8_t *) a, len, (uint8_t *) b, len);
}

int qb_compare_ascending_U16(const void *a, const void *b) {
	if(*((uint16_t *) a) < *((uint16_t *) b)) {
		return -1;
	} else if(*((uint16_t *) a) > *((uint16_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_U16_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U16((uint16_t *) a, len, (uint16_t *) b, len);
}

int qb_compare_ascending_U32(const void *a, const void *b) {
	if(*((uint32_t *) a) < *((uint32_t *) b)) {
		return -1;
	} else if(*((uint32_t *) a) > *((uint32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_U32_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U32((uint32_t *) a, len, (uint32_t *) b, len);
}

int qb_compare_ascending_U64(const void *a, const void *b) {
	if(*((uint64_t *) a) < *((uint64_t *) b)) {
		return -1;
	} else if(*((uint64_t *) a) > *((uint64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_ascending_U64_array(void *extra, const void *a, const void *b) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U64((uint64_t *) a, len, (uint64_t *) b, len);
}

int qb_compare_descending_F32(const void *b, const void *a) {
	if(*((float32_t *) a) < *((float32_t *) b)) {
		return -1;
	} else if(*((float32_t *) a) > *((float32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_F32_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_F32((float32_t *) a, len, (float32_t *) b, len);
}

int qb_compare_descending_F64(const void *b, const void *a) {
	if(*((float64_t *) a) < *((float64_t *) b)) {
		return -1;
	} else if(*((float64_t *) a) > *((float64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_F64_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_F64((float64_t *) a, len, (float64_t *) b, len);
}

int qb_compare_descending_S08(const void *b, const void *a) {
	if(*((int8_t *) a) < *((int8_t *) b)) {
		return -1;
	} else if(*((int8_t *) a) > *((int8_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_S08_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S08((int8_t *) a, len, (int8_t *) b, len);
}

int qb_compare_descending_S16(const void *b, const void *a) {
	if(*((int16_t *) a) < *((int16_t *) b)) {
		return -1;
	} else if(*((int16_t *) a) > *((int16_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_S16_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S16((int16_t *) a, len, (int16_t *) b, len);
}

int qb_compare_descending_S32(const void *b, const void *a) {
	if(*((int32_t *) a) < *((int32_t *) b)) {
		return -1;
	} else if(*((int32_t *) a) > *((int32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_S32_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S32((int32_t *) a, len, (int32_t *) b, len);
}

int qb_compare_descending_S64(const void *b, const void *a) {
	if(*((int64_t *) a) < *((int64_t *) b)) {
		return -1;
	} else if(*((int64_t *) a) > *((int64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_S64_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_S64((int64_t *) a, len, (int64_t *) b, len);
}

int qb_compare_descending_U08(const void *b, const void *a) {
	if(*((uint8_t *) a) < *((uint8_t *) b)) {
		return -1;
	} else if(*((uint8_t *) a) > *((uint8_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_U08_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U08((uint8_t *) a, len, (uint8_t *) b, len);
}

int qb_compare_descending_U16(const void *b, const void *a) {
	if(*((uint16_t *) a) < *((uint16_t *) b)) {
		return -1;
	} else if(*((uint16_t *) a) > *((uint16_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_U16_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U16((uint16_t *) a, len, (uint16_t *) b, len);
}

int qb_compare_descending_U32(const void *b, const void *a) {
	if(*((uint32_t *) a) < *((uint32_t *) b)) {
		return -1;
	} else if(*((uint32_t *) a) > *((uint32_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_U32_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U32((uint32_t *) a, len, (uint32_t *) b, len);
}

int qb_compare_descending_U64(const void *b, const void *a) {
	if(*((uint64_t *) a) < *((uint64_t *) b)) {
		return -1;
	} else if(*((uint64_t *) a) > *((uint64_t *) b)) {
		return 1;
	} else {
		return 0;
	}
}

int qb_compare_descending_U64_array(void *extra, const void *b, const void *a) {
	uint32_t len = *((const uint32_t *) extra);
	return qb_compare_array_U64((uint64_t *) a, len, (uint64_t *) b, len);
}

int32_t ZEND_FASTCALL qb_compare_array_F32(float32_t * __restrict op1_ptr, uint32_t op1_count, float32_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_F64(float64_t * __restrict op1_ptr, uint32_t op1_count, float64_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_S08(int8_t * __restrict op1_ptr, uint32_t op1_count, int8_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_S16(int16_t * __restrict op1_ptr, uint32_t op1_count, int16_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_S32(int32_t * __restrict op1_ptr, uint32_t op1_count, int32_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_S64(int64_t * __restrict op1_ptr, uint32_t op1_count, int64_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_U08(uint8_t * __restrict op1_ptr, uint32_t op1_count, uint8_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_U16(uint16_t * __restrict op1_ptr, uint32_t op1_count, uint16_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_U32(uint32_t * __restrict op1_ptr, uint32_t op1_count, uint32_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

int32_t ZEND_FASTCALL qb_compare_array_U64(uint64_t * __restrict op1_ptr, uint32_t op1_count, uint64_t * __restrict op2_ptr, uint32_t op2_count) {
	if(op1_count && op2_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t end1 = 0, end2 = 0;
		while(1) {
			if(*op1_ptr > *op2_ptr) {
				return 1;
			} else if(*op1_ptr < *op2_ptr) {
				return -1;
			}
			op1_ptr++;
			if(op1_ptr == op1_end) {
				if(end2) {
					break;
				}
				op1_ptr = op1_start;
				end1 = 1;
			}
			op2_ptr++;
			if(op2_ptr == op2_end) {
				if(end1) {
					break;
				}
				op2_ptr = op2_start;
				end2 = 1;
			}
		}
	} else if(op2_count) {
		return -1;
	} else if(op1_count) {
		return 1;
	}
	return 0;
}

uint32_t ZEND_FASTCALL qb_decode_fcall_mix_operand(qb_interpreter_context *__restrict cxt, int8_t *__restrict *segments, uint32_t *__restrict operands) {
	uint32_t operand_count = 0;
	uint32_t operand1 = operands[operand_count++];
	uint32_t type = operand1 & 0x00FF;
	uint32_t dimension = (operand1 >> 8) & 0x00FF;
	uint32_t flags = operand1 >> 16;
	if(dimension > 0) {
		uint32_t vec_operand2 = operands[operand_count++];
		uint32_t selector = vec_operand2 & 0x00FF;
		uint32_t index_index = (vec_operand2 >> 8) & 0x03FF;
		uint32_t array_start_index = ((uint32_t *) segments[0])[index_index];
		uint32_t j;
		cxt->argument_address = &cxt->array_address;
		cxt->array_address.segment_selector = selector;
		cxt->array_address.segment_offset = array_start_index << type_size_shifts[type];
		cxt->array_address.type = type;
		cxt->array_address.flags = flags;
		cxt->array_address.dimension_count = dimension;
		for(j = 0; j < dimension; j++) {
			// the size and dimension always share the same set of flags
			uint32_t flags = operands[operand_count++];
			uint32_t dimension_index = operands[operand_count++];
			uint32_t size_index = operands[operand_count++];
			cxt->array_address.dimension_addresses[j]->flags = flags >> 16;
			cxt->array_address.dimension_addresses[j]->segment_offset = dimension_index * sizeof(uint32_t);
			cxt->array_address.array_size_addresses[j]->flags = flags >> 16;
			cxt->array_address.array_size_addresses[j]->segment_offset = size_index * sizeof(uint32_t);
		}
	} else {
		uint32_t elv_operand2 = operands[operand_count++];
		uint32_t selector = elv_operand2 & 0x00FF;
		uint32_t index_index = elv_operand2 >> 8;
		uint32_t index = ((uint32_t *) segments[0])[index_index];
		cxt->argument_address = &cxt->value_address;
		cxt->value_address.type = type;
		cxt->value_address.flags = flags;
		cxt->value_address.segment_selector = selector;
		cxt->value_address.segment_offset = index << type_size_shifts[type];
	}
	return operand_count;
}

uint32_t ZEND_FASTCALL qb_decode_fcall_variable_operand(qb_interpreter_context *__restrict cxt, int8_t *__restrict *segments, uint32_t *__restrict operands) {
	uint32_t operand1 = operands[0];
	uint32_t var_operand2 = operands[1];
	uint32_t type = operand1 & 0x00FF;
	uint32_t flags = operand1 >> 16;
	uint32_t index = var_operand2;
	cxt->value_address.type = type;
	cxt->value_address.flags = flags;
	cxt->value_address.segment_offset = index << type_size_shifts[type];
	return 2;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		float32_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		float64_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		int8_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		int16_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		int32_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		int64_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		uint8_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		uint16_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		uint32_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_array_sprintf_length_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count) {
	uint32_t total = 0;
	if(op1_count) {
		uint64_t *op1_end = op1_ptr + op1_count;
		while(op1_ptr < op1_end) {
			char sprintf_buffer[64];
			uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
			total += len;
			op1_ptr++;
		}
		total += op1_count * 2;
	} else {
		total = 2;
	}
	return total;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_F32(qb_interpreter_context *cxt, float32_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_F64(qb_interpreter_context *cxt, float64_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_S08(qb_interpreter_context *cxt, int8_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_S16(qb_interpreter_context *cxt, int16_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_S32(qb_interpreter_context *cxt, int32_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_S64(qb_interpreter_context *cxt, int64_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_U08(qb_interpreter_context *cxt, uint8_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_U16(qb_interpreter_context *cxt, uint16_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_U32(qb_interpreter_context *cxt, uint32_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_scalar_sprintf_length_U64(qb_interpreter_context *cxt, uint64_t op1) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, op1);
	return len;
}

uint32_t ZEND_FASTCALL qb_get_utf8_codepoint_count(uint8_t *op1_ptr, uint32_t op1_count) {
	uint32_t codepoint, state = 0, count = 0, i;
	for(i = 0; i < op1_count; i++) {
		if(!decode(&state, &codepoint, op1_ptr[i])) {
			count++;
		}
	}
	return count;
}

uint32_t ZEND_FASTCALL qb_get_utf8_encoded_length_U16(uint16_t *op1_ptr, uint32_t op1_count) {
	uint32_t length = 0, i;
	uint8_t buffer[4];
	for(i = 0; i < op1_count; i++) {
		length += encode(op1_ptr[i], buffer);
	}
	return length;
}

uint32_t ZEND_FASTCALL qb_get_utf8_encoded_length_U32(uint32_t *op1_ptr, uint32_t op1_count) {
	uint32_t length = 0, i;
	uint8_t buffer[4];
	for(i = 0; i < op1_count; i++) {
		length += encode(op1_ptr[i], buffer);
	}
	return length;
}

uint32_t qb_get_multidimensional_array_sprintf_length_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	float32_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	float64_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	int8_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	int16_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	int32_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	int64_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	uint8_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	uint16_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	uint32_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_multidimensional_array_sprintf_length_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	uint64_t *op1_end = op1_ptr + op1_count;
	uint32_t *op2_end = op2_ptr + op2_count;
	uint32_t total = 0, multiplier = 1;
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
		total += len;
		op1_ptr++;
	}
	while(op2_ptr < op2_end) {
		total += multiplier * *op2_ptr * 2;
		multiplier *= *op2_ptr;
		op2_ptr++;
	}
	return total;
}

uint32_t qb_get_range_length_F32(float32_t op1, float32_t op2, float32_t op3) {
	float32_t count;
	float32_t distance;
	float32_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	if(count > 4294967295) {
		count = 4294967295;
	}
	return (uint32_t) count;
}

uint32_t qb_get_range_length_F64(float64_t op1, float64_t op2, float64_t op3) {
	float64_t count;
	float64_t distance;
	float64_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	if(count > 4294967295) {
		count = 4294967295;
	}
	return (uint32_t) count;
}

uint32_t qb_get_range_length_S08(int8_t op1, int8_t op2, int8_t op3) {
	int8_t count;
	int8_t distance;
	int8_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_S16(int16_t op1, int16_t op2, int16_t op3) {
	int16_t count;
	int16_t distance;
	int16_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_S32(int32_t op1, int32_t op2, int32_t op3) {
	int32_t count;
	int32_t distance;
	int32_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_S64(int64_t op1, int64_t op2, int64_t op3) {
	int64_t count;
	int64_t distance;
	int64_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_U08(uint8_t op1, uint8_t op2, int8_t op3) {
	uint8_t count;
	uint8_t distance;
	uint8_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_U16(uint16_t op1, uint16_t op2, int16_t op3) {
	uint16_t count;
	uint16_t distance;
	uint16_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_U32(uint32_t op1, uint32_t op2, int32_t op3) {
	uint32_t count;
	uint32_t distance;
	uint32_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	return (uint32_t) count;
}

uint32_t qb_get_range_length_U64(uint64_t op1, uint64_t op2, int64_t op3) {
	uint64_t count;
	uint64_t distance;
	uint64_t interval;
	if(op3 > 0 && op2 >= op1) {
		distance = op2 - op1;
		interval = op3;
	} else if(op3 < 0 && op1 >= op2) {
		distance = op1 - op2;
		interval = -op3;
	} else {
		distance = 0;
		interval = 1;
	}
	distance += interval;
	count = (interval != 1) ? distance / interval : distance;
	if(count > 4294967295) {
		count = 4294967295;
	}
	return (uint32_t) count;
}

uint32_t qb_get_unique_element_count_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

uint32_t qb_get_unique_element_count_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

uint32_t qb_get_unique_element_count_I08(int8_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

uint32_t qb_get_unique_element_count_I16(int16_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

uint32_t qb_get_unique_element_count_I32(int32_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

uint32_t qb_get_unique_element_count_I64(int64_t *op1_ptr, uint32_t op1_count, uint32_t op2) {
	uint32_t count = 0;
	uint32_t i, j, k;
	if(op2 == 1) {
		for(i = 0; i < op1_count; i++) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j++) {
				if(op1_ptr[j] == op1_ptr[i]) {
					repeat = TRUE;
					break;
				}
			}
			if(!repeat) {
				count++;
			}
		}
	} else {
		for(i = 0; i < op1_count; i += op2) {
			int32_t repeat = FALSE;
			for(j = 0; j < i; j += op2) {
				if(op1_ptr[j] == op1_ptr[i]) {
					int32_t match = TRUE;
					for(k = 1; k < op2; k++) {
						if(op1_ptr[j + k] == op1_ptr[i + k]) {
							match = FALSE;
							break;
						}
					}
					if(match) {
						repeat = TRUE;
						break;
					}
				}
			}
			if(!repeat) {
				count += op2;
			}
		}
	}
	return count;
}

void ZEND_FASTCALL qb_do_abs_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) fabsf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_abs_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) fabs((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_abs_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) abs((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_abs_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) abs((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_abs_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) abs((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_abs_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) llabs((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_acos_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) acosf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_acos_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) acos((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_acosh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = acoshf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_acosh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = acosh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			res_ptr[2] = op1_ptr[2] + op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			res_ptr[2] = op1_ptr[2] + op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			res_ptr[2] = op1_ptr[2] + op2_ptr[2];
			res_ptr[3] = op1_ptr[3] + op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + op2_ptr[0];
			res_ptr[1] = op1_ptr[1] + op2_ptr[1];
			res_ptr[2] = op1_ptr[2] + op2_ptr[2];
			res_ptr[3] = op1_ptr[3] + op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_add_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_all_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	int32_t *op1_end = op1_ptr + op1_count;
	(*res_ptr) = 1;
	while(op1_ptr != op1_end) {
		if(!(*op1_ptr)) {
			(*res_ptr) = 0;
			break;
		}
		op1_ptr++;
	}
}

void ZEND_FASTCALL qb_do_alpha_blend_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			float32_t a2 = op2_ptr[3];
			if(a2 != 0) {
				float32_t a1 = op1_ptr[3];
				if(a1 != 0) {
					float32_t r1 = op1_ptr[0];
					float32_t g1 = op1_ptr[1];
					float32_t b1 = op1_ptr[2];
					float32_t r2 = op2_ptr[0];
					float32_t g2 = op2_ptr[1];
					float32_t b2 = op2_ptr[2];
					float32_t af = a2 + a1 * (1 - a2);
					float32_t iaf = 1 / af;
					res_ptr[0] = (r2 * a2 * iaf) + (r1 * a1 * iaf) * (1 - a2);
					res_ptr[1] = (g2 * a2 * iaf) + (g1 * a1 * iaf) * (1 - a2);
					res_ptr[2] = (b2 * a2 * iaf) + (b1 * a1 * iaf) * (1 - a2);
					res_ptr[3] = af;
				} else {
					res_ptr[0] = op2_ptr[0];
					res_ptr[1] = op2_ptr[1];
					res_ptr[2] = op2_ptr[2];
					res_ptr[3] = op2_ptr[3];
				}
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_alpha_blend_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			float64_t a2 = op2_ptr[3];
			if(a2 != 0) {
				float64_t a1 = op1_ptr[3];
				if(a1 != 0) {
					float64_t r1 = op1_ptr[0];
					float64_t g1 = op1_ptr[1];
					float64_t b1 = op1_ptr[2];
					float64_t r2 = op2_ptr[0];
					float64_t g2 = op2_ptr[1];
					float64_t b2 = op2_ptr[2];
					float64_t af = a2 + a1 * (1 - a2);
					float64_t iaf = 1 / af;
					res_ptr[0] = (r2 * a2 * iaf) + (r1 * a1 * iaf) * (1 - a2);
					res_ptr[1] = (g2 * a2 * iaf) + (g1 * a1 * iaf) * (1 - a2);
					res_ptr[2] = (b2 * a2 * iaf) + (b1 * a1 * iaf) * (1 - a2);
					res_ptr[3] = af;
				} else {
					res_ptr[0] = op2_ptr[0];
					res_ptr[1] = op2_ptr[1];
					res_ptr[2] = op2_ptr[2];
					res_ptr[3] = op2_ptr[3];
				}
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_any_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	int32_t *op1_end = op1_ptr + op1_count;
	(*res_ptr) = 0;
	while(op1_ptr != op1_end) {
		if((*op1_ptr)) {
			(*res_ptr) = 1;
			break;
		}
		op1_ptr++;
	}
}

void ZEND_FASTCALL qb_do_apply_premultiplication_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			float32_t a = op1_ptr[3];
			if(a != 1) {
				res_ptr[0] = op1_ptr[0] * a;
				res_ptr[1] = op1_ptr[1] * a;
				res_ptr[2] = op1_ptr[2] * a;
				res_ptr[3] = op1_ptr[3];
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_apply_premultiplication_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			float64_t a = op1_ptr[3];
			if(a != 1) {
				res_ptr[0] = op1_ptr[0] * a;
				res_ptr[1] = op1_ptr[1] * a;
				res_ptr[2] = op1_ptr[2] * a;
				res_ptr[3] = op1_ptr[3];
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_array_max_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		float32_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		float64_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int8_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int16_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int32_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int64_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint8_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint16_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint32_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_max_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint64_t biggest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] > biggest) {
				biggest = op1_ptr[i];
			}
		}
		(*res_ptr) = biggest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		float32_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		float64_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int8_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int16_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int32_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		int64_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint8_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint16_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint32_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_min_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	if(op1_count > 0) {
		uint32_t i;
		uint64_t smallest = op1_ptr[0];
		for(i = 1; i < op1_count; i++) {
			if(op1_ptr[i] < smallest) {
				smallest = op1_ptr[i];
			}
		}
		(*res_ptr) = smallest;
	} else {
		(*res_ptr) = 0;
	}
}

void ZEND_FASTCALL qb_do_array_product_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	uint32_t i;
	float32_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	uint32_t i;
	float64_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	uint32_t i;
	int8_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	uint32_t i;
	int16_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	uint32_t i;
	int32_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	uint32_t i;
	int64_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	uint32_t i;
	uint8_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	uint32_t i;
	uint16_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	uint32_t i;
	uint32_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_product_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	uint32_t i;
	uint64_t product = 1;
	for(i = 0; i < op1_count; i++) {
		product *= op1_ptr[i];
	}
	(*res_ptr) = product;
}

void ZEND_FASTCALL qb_do_array_random(uint32_t op1, uint32_t op2, uint32_t *res_ptr, uint32_t res_count) {
	uint32_t num_key = 0, num_req = op2, num_avail = op1;
	while(num_req > 0) {
		double randval = php_rand(TSRMLS_C);
		if ((double) (randval / (PHP_RAND_MAX + 1.0)) < (double) num_req / (double) num_avail) {
			*res_ptr = num_key;
			res_ptr++;
			num_req--;
		}
		num_avail--;
		if(num_key < op1 - 1) {
			num_key++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_reverse_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, float32_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			float32_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		float32_t *t = do_alloca(op2 * sizeof(float32_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(float32_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(float32_t));
			memcpy(res_ptr + j, t, op2 * sizeof(float32_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_reverse_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, float64_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			float64_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		float64_t *t = do_alloca(op2 * sizeof(float64_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(float64_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(float64_t));
			memcpy(res_ptr + j, t, op2 * sizeof(float64_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_reverse_I08(int8_t *op1_ptr, uint32_t op1_count, uint32_t op2, int8_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			int8_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		int8_t *t = do_alloca(op2 * sizeof(int8_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(int8_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(int8_t));
			memcpy(res_ptr + j, t, op2 * sizeof(int8_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_reverse_I16(int16_t *op1_ptr, uint32_t op1_count, uint32_t op2, int16_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			int16_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		int16_t *t = do_alloca(op2 * sizeof(int16_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(int16_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(int16_t));
			memcpy(res_ptr + j, t, op2 * sizeof(int16_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_reverse_I32(int32_t *op1_ptr, uint32_t op1_count, uint32_t op2, int32_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			int32_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		int32_t *t = do_alloca(op2 * sizeof(int32_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(int32_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(int32_t));
			memcpy(res_ptr + j, t, op2 * sizeof(int32_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_reverse_I64(int64_t *op1_ptr, uint32_t op1_count, uint32_t op2, int64_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	if(op2 == 1) {
		for(i = 0, j = op1_count - 1; i <= j; i++, j--) {
			int64_t t = op1_ptr[i];
			res_ptr[i] = op1_ptr[j];
			res_ptr[j] = t;
		}
	} else {
		ALLOCA_FLAG(use_heap)
		int64_t *t = do_alloca(op2 * sizeof(int64_t), use_heap);
		for(i = 0, j = op1_count - op2; i <= j; i += op2, j -= op2) {
			memcpy(t, op1_ptr + i, op2 * sizeof(int64_t));
			memcpy(res_ptr + i, op1_ptr + j, op2 * sizeof(int64_t));
			memcpy(res_ptr + j, t, op2 * sizeof(int64_t));
		}
		free_alloca(t, use_heap);
	}
}

void ZEND_FASTCALL qb_do_array_search_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t op2, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i;
	for(i = 0; i < op1_count; i++) {
		if(op1_ptr[i] == op2) {
			index = i;
			break;
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_search_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index = -1;
	uint32_t i, j, k;
	for(i = 0, j = 0; j < op1_count; i++, j += op2_count) {
		if(op1_ptr[j] == op2_ptr[0]) {
			for(k = 1; k < op2_count; k++) {
				if(op1_ptr[j + k] != op2_ptr[k]) {
					break;
				}
			}
			if(k == op2_count) {
				index = i;
				break;
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_array_sum_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	uint32_t i;
	float32_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	uint32_t i;
	float64_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	uint32_t i;
	int8_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	uint32_t i;
	int16_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	uint32_t i;
	int32_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	uint32_t i;
	int64_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	uint32_t i;
	uint8_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	uint32_t i;
	uint16_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	uint32_t i;
	uint32_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_sum_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	uint32_t i;
	uint64_t sum = 0;
	for(i = 0; i < op1_count; i++) {
		sum += op1_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_array_unique_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, float32_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_unique_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, float64_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_unique_I08(int8_t *op1_ptr, uint32_t op1_count, uint32_t op2, int8_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_unique_I16(int16_t *op1_ptr, uint32_t op1_count, uint32_t op2, int16_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_unique_I32(int32_t *op1_ptr, uint32_t op1_count, uint32_t op2, int32_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_array_unique_I64(int64_t *op1_ptr, uint32_t op1_count, uint32_t op2, int64_t *res_ptr, uint32_t res_count) {
	uint32_t i, j;
	for(i = 0; i < op1_count; i++) {
		int32_t repeat = FALSE;
		for(j = 0; j < i; j++) {
			if(op1_ptr[j] == op1_ptr[i]) {
				repeat = TRUE;
				break;
			}
		}
		if(!repeat) {
			*res_ptr = op1_ptr[i];
			res_ptr++;
		}
	}
}

void ZEND_FASTCALL qb_do_asin_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = asinf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_asin_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = asin((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_asinh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = asinhf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_asinh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = asinh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atan2_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atan2f((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atan2_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atan2((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atan_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atanf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atan_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atan((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atanh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atanhf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_atanh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = atanh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_and_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) & (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_and_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) & (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_and_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) & (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_and_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) & (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_not_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ~(*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_not_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ~(*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_not_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ~(*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_not_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ~(*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_or_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) | (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_or_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) | (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_or_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) | (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_or_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) | (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_xor_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) ^ (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_xor_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) ^ (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_xor_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) ^ (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_bitwise_xor_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) ^ (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_boolean_cast_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = !(!((*op1_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_F64(float32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_S08(float32_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_S16(float32_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_S32(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_S64(float32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_U08(float32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_U16(float32_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_U32(float32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F32_U64(float32_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_F32(float64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_S08(float64_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_S16(float64_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_S32(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_S64(float64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_U08(float64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_U16(float64_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_U32(float64_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_F64_U64(float64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (uint64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I16_I08(int16_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I32_I08(int32_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I32_I16(int32_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I64_I08(int64_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int8_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I64_I16(int64_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_I64_I32(int64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S08_F32(int8_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S08_F64(int8_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S08_I16(int8_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S08_I32(int8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S08_I64(int8_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S16_F32(int16_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S16_F64(int16_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S16_I32(int16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S16_I64(int16_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S32_F32(int32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S32_F64(int32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S32_I64(int32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S64_F32(int64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_S64_F64(int64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U08_F32(uint8_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U08_F64(uint8_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U08_I16(uint8_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int16_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U08_I32(uint8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U08_I64(uint8_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U16_F32(uint16_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U16_F64(uint16_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U16_I32(uint16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U16_I64(uint16_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U32_F32(uint32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U32_F64(uint32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U32_I64(uint32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (int64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U64_F32(uint64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cast_multiple_times_U64_F64(uint64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_ceil_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ceilf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_ceil_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ceil((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_clamp_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_clamp_F32((*op1_ptr), (*op2_ptr), (*op3_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_clamp_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_clamp_F64((*op1_ptr), (*op2_ptr), (*op3_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_abs_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	res_ptr[0] = (float64_t) sqrt(op1_ptr[0] * op1_ptr[0] + op1_ptr[1] * op1_ptr[1]);
}

void ZEND_FASTCALL qb_do_complex_abs_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = (float32_t) sqrt(op1_ptr[0] * op1_ptr[0] + op1_ptr[1] * op1_ptr[1]);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_abs_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_abs_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_argument_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	res_ptr[0] = (float64_t) atan2(op1_ptr[1], op1_ptr[0]);
}

void ZEND_FASTCALL qb_do_complex_argument_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = (float32_t) atan2(op1_ptr[1], op1_ptr[0]);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_argument_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_argument_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_cos_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t r = cos(op1_ptr[0]) * cosh(op1_ptr[1]);
	float64_t i = -sin(op1_ptr[0]) * sinh(op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_cos_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_cos_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_cos_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_cos_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_cosh_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t r = cosh(op1_ptr[0]) * cos(op1_ptr[1]);
	float64_t i = sinh(op1_ptr[0]) * sin(op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_cosh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_cosh_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_cosh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_cosh_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_divide_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t w = op2_ptr[0] * op2_ptr[0] + op2_ptr[1] * op2_ptr[1];
	float64_t r = ((op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1])) / w;
	float64_t i = ((op1_ptr[1] * op2_ptr[0]) - (op1_ptr[0] * op2_ptr[1])) / w;
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_divide_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_divide_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_divide_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_divide_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_exp_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t w = exp(op1_ptr[0]);
	float64_t r = w * cos(op1_ptr[1]);
	float64_t i = w * sin(op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_exp_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_exp_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_exp_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_exp_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_log_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t w = sqrt(op1_ptr[0] * op1_ptr[0] + op1_ptr[1] * op1_ptr[1]);
	float64_t r = log(w);
	float64_t i = atan2(op1_ptr[1], op1_ptr[0]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_log_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_log_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_log_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_log_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_multiply_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t r = (op1_ptr[0] * op2_ptr[0]) - (op1_ptr[1] * op2_ptr[1]);
	float64_t i = (op1_ptr[0] * op2_ptr[1]) + (op1_ptr[1] * op2_ptr[0]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_multiply_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_multiply_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_multiply_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_multiply_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_pow_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t u = atan2(op1_ptr[1], op1_ptr[0]);
	float64_t v = op1_ptr[0] * op1_ptr[0] + op1_ptr[1] * op1_ptr[1];
	float64_t w = 1;
	float64_t x = pow(v, 0.5 * op2_ptr[0]);
	float64_t y = op2_ptr[0] * u;
	float64_t z = 0;
	if(op2_ptr[1] != 0) {
		z = 0.5 * op2_ptr[1] * log(v);
		w = exp(-op2_ptr[1] * u);
	}
	res_ptr[0] = x * w * cos(y + z);
	res_ptr[1] = x * w * sin(y + z);
}

void ZEND_FASTCALL qb_do_complex_pow_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_pow_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_pow_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_pow_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_sin_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t r = sin(op1_ptr[0]) * cosh(op1_ptr[1]);
	float64_t i = cos(op1_ptr[0]) * sinh(op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_sin_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_sin_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_sin_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_sin_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_sinh_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t r = sinh(op1_ptr[0]) * cos(op1_ptr[1]);
	float64_t i = cosh(op1_ptr[0]) * sin(op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_sinh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_sinh_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_sinh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_sinh_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_square_root_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t s = (op1_ptr[1] > 0 ? 1.0 : ((op1_ptr[1] < 0 ? -1.0 : 0.0)));
	float64_t w = sqrt(op1_ptr[0] * op1_ptr[0] + op1_ptr[1] * op1_ptr[1]);
	float64_t r = sqrt(0.5 * (op1_ptr[0] + w));
	float64_t i = (s) ? s * sqrt(0.5 * (-op1_ptr[0] + w)) : 0;
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_square_root_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_square_root_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_square_root_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_square_root_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_tan_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t w = 1 / (cos(2.0 * op1_ptr[0]) + cosh(2.0 * op1_ptr[1]));
	float64_t r = w * sin(2.0 * op1_ptr[0]);
	float64_t i = w * sinh(2.0 * op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_tan_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_tan_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_tan_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_tan_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_tanh_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	float64_t w = 1 / (cosh(2.0 * op1_ptr[0]) + cos(2.0 * op1_ptr[1]));
	float64_t r = w * sinh(2.0 * op1_ptr[0]);
	float64_t i = w * sin(2.0 * op1_ptr[1]);
	res_ptr[0] = r;
	res_ptr[1] = i;
}

void ZEND_FASTCALL qb_do_complex_tanh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_tanh_F32(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_complex_tanh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_complex_tanh_F64(op1_ptr, op1_count, res_ptr, res_count);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	float32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	float64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	int8_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	int16_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	int32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	int64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	uint8_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	uint16_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	uint32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_multidimensional_variable_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	USE_TSRM
	uint64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, pos = 0;
	uint32_t counts[64];
	memset(counts, 0, sizeof(uint32_t) * op2_count);
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				res_ptr[pos++] = ',';
				res_ptr[pos++] = ' ';
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
				memcpy(res_ptr + pos, sprintf_buffer, len);
				pos += len;
				op1_ptr++;
				counts[depth]++;
			} else {
				res_ptr[pos++] = '[';
				depth++;
			}
		} else {
			res_ptr[pos++] = ']';
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_F32(qb_interpreter_context *cxt, float32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_F64(qb_interpreter_context *cxt, float64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_S08(qb_interpreter_context *cxt, int8_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_S16(qb_interpreter_context *cxt, int16_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_S32(qb_interpreter_context *cxt, int32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_S64(qb_interpreter_context *cxt, int64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_U08(qb_interpreter_context *cxt, uint8_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_U16(qb_interpreter_context *cxt, uint16_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_U32(qb_interpreter_context *cxt, uint32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_U64(qb_interpreter_context *cxt, uint64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, op1);
	memcpy(res_ptr + res_count_before, sprintf_buffer, len);
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	float32_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	float64_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	int8_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	int16_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	int32_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	int64_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	uint8_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	uint16_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	uint32_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_concat_variable_multiple_times_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	uint32_t pos = res_count_before;
	uint64_t *op1_end = op1_ptr + op1_count;
	res_ptr[pos++] = '[';
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
		memcpy(res_ptr + pos, sprintf_buffer, len);
		pos += len;
		op1_ptr++;
		if(op1_ptr != op1_end) {
			res_ptr[pos++] = ',';
			res_ptr[pos++] = ' ';
		}
	}
	res_ptr[pos++] = ']';
}

void ZEND_FASTCALL qb_do_copy_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			res_ptr[2] = op1_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			res_ptr[2] = op1_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			res_ptr[2] = op1_ptr[2];
			res_ptr[3] = op1_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0];
			res_ptr[1] = op1_ptr[1];
			res_ptr[2] = op1_ptr[2];
			res_ptr[3] = op1_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_copy_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cos_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = cosf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cos_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = cos((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cosh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = coshf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cosh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = cosh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t k = (op1_ptr[0] * op2_ptr[1]) - (op1_ptr[1] * op2_ptr[0]);
	res_ptr[0] = k;
	res_ptr[1] = k;
}

void ZEND_FASTCALL qb_do_cross_product_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t i = (op1_ptr[1] * op2_ptr[2]) - (op1_ptr[2] * op2_ptr[1]);
	float64_t j = (op1_ptr[2] * op2_ptr[0]) - (op1_ptr[0] * op2_ptr[2]);
	float64_t k = (op1_ptr[0] * op2_ptr[1]) - (op1_ptr[1] * op2_ptr[0]);
	res_ptr[0] = i;
	res_ptr[1] = j;
	res_ptr[2] = k;
}

void ZEND_FASTCALL qb_do_cross_product_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_4x_F32(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *op3_ptr, float32_t *res_ptr) {
	float32_t i = op1_ptr[1] * ((op2_ptr[2] * op3_ptr[3]) - (op3_ptr[2] * op2_ptr[3])) - op1_ptr[2] * ((op2_ptr[1] * op3_ptr[3]) - (op3_ptr[1] * op2_ptr[3])) + op1_ptr[3] * ((op2_ptr[1] * op3_ptr[2]) - (op3_ptr[1] * op2_ptr[2]));
	float32_t j = op1_ptr[0] * ((op3_ptr[2] * op2_ptr[3]) - (op2_ptr[2] * op3_ptr[3])) - op1_ptr[2] * ((op3_ptr[0] * op2_ptr[3]) - (op2_ptr[0] * op3_ptr[3])) + op1_ptr[3] * ((op3_ptr[0] * op2_ptr[2]) - (op2_ptr[0] * op3_ptr[2]));
	float32_t k = op1_ptr[0] * ((op2_ptr[1] * op3_ptr[3]) - (op3_ptr[1] * op2_ptr[3])) - op1_ptr[1] * ((op2_ptr[0] * op3_ptr[3]) - (op3_ptr[0] * op2_ptr[3])) + op1_ptr[3] * ((op2_ptr[0] * op3_ptr[1]) - (op3_ptr[0] * op2_ptr[1]));
	float32_t m = op1_ptr[0] * ((op3_ptr[1] * op2_ptr[2]) - (op2_ptr[1] * op3_ptr[2])) - op1_ptr[1] * ((op3_ptr[0] * op2_ptr[2]) - (op2_ptr[0] * op3_ptr[2])) + op1_ptr[2] * ((op3_ptr[0] * op2_ptr[1]) - (op2_ptr[0] * op3_ptr[1]));
	res_ptr[0] = i;
	res_ptr[1] = j;
	res_ptr[2] = k;
	res_ptr[3] = m;
}

void ZEND_FASTCALL qb_do_cross_product_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *op3_ptr, float64_t *res_ptr) {
	float64_t i = op1_ptr[1] * ((op2_ptr[2] * op3_ptr[3]) - (op3_ptr[2] * op2_ptr[3])) - op1_ptr[2] * ((op2_ptr[1] * op3_ptr[3]) - (op3_ptr[1] * op2_ptr[3])) + op1_ptr[3] * ((op2_ptr[1] * op3_ptr[2]) - (op3_ptr[1] * op2_ptr[2]));
	float64_t j = op1_ptr[0] * ((op3_ptr[2] * op2_ptr[3]) - (op2_ptr[2] * op3_ptr[3])) - op1_ptr[2] * ((op3_ptr[0] * op2_ptr[3]) - (op2_ptr[0] * op3_ptr[3])) + op1_ptr[3] * ((op3_ptr[0] * op2_ptr[2]) - (op2_ptr[0] * op3_ptr[2]));
	float64_t k = op1_ptr[0] * ((op2_ptr[1] * op3_ptr[3]) - (op3_ptr[1] * op2_ptr[3])) - op1_ptr[1] * ((op2_ptr[0] * op3_ptr[3]) - (op3_ptr[0] * op2_ptr[3])) + op1_ptr[3] * ((op2_ptr[0] * op3_ptr[1]) - (op3_ptr[0] * op2_ptr[1]));
	float64_t m = op1_ptr[0] * ((op3_ptr[1] * op2_ptr[2]) - (op2_ptr[1] * op3_ptr[2])) - op1_ptr[1] * ((op3_ptr[0] * op2_ptr[2]) - (op2_ptr[0] * op3_ptr[2])) + op1_ptr[2] * ((op3_ptr[0] * op2_ptr[1]) - (op2_ptr[0] * op3_ptr[1]));
	res_ptr[0] = i;
	res_ptr[1] = j;
	res_ptr[2] = k;
	res_ptr[3] = m;
}

void ZEND_FASTCALL qb_do_cross_product_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_4x_F32(op1_ptr, op2_ptr, op3_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			op3_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_cross_product_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_cross_product_4x_F64(op1_ptr, op2_ptr, op3_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			op3_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_2x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			
			res_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_2x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			
			res_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_3x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			--res_ptr[2];
			
			res_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_3x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			--res_ptr[2];
			
			res_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_4x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			--res_ptr[2];
			--res_ptr[3];
			
			res_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_4x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			--res_ptr[0];
			--res_ptr[1];
			--res_ptr[2];
			--res_ptr[3];
			
			res_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_I08(int8_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_I16(int16_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_I32(int32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_decrement_multiple_times_I64(int64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			--(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_degree_to_radian_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * ((float32_t) (M_PI / 180.0));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_degree_to_radian_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * ((float64_t) (M_PI / 180.0));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_2x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	(*res_ptr) = (op1_ptr[0 * 2 + 0] * op1_ptr[1 * 2 + 1]) - (op1_ptr[0 * 2 + 1] * op1_ptr[1 * 2 + 0]);
}

void ZEND_FASTCALL qb_do_determinant_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (op1_ptr[0 * 2 + 0] * op1_ptr[1 * 2 + 1]) - (op1_ptr[0 * 2 + 1] * op1_ptr[1 * 2 + 0]);
			
			res_ptr += 1;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_2x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_3x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	(*res_ptr) =	 (op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 2]) -
	(op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 1]) +
	(op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 0]) -
	(op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 2]) +
	(op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 1]) -
	(op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 0]);
}

void ZEND_FASTCALL qb_do_determinant_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_3x_F32(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_3x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_4x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	(*res_ptr) = 	 ((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0])) - ((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0])) -
	((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0])) + ((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0])) +
	((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0])) - ((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0])) -
	((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1])) + ((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1])) +
	((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1])) - ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1])) -
	((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1])) + ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1])) +
	((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2])) - ((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2])) -
	((op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2])) + ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2])) +
	((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2])) - ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2])) -
	((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3])) + ((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3])) +
	((op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3])) - ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2]) * (op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3])) -
	((op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3])) + ((op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1]) * (op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]));
}

void ZEND_FASTCALL qb_do_determinant_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_4x_F32(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_4x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_F32(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	if(MATRIX1_ROWS == 4) {
		qb_do_determinant_4x_F32(op1_ptr, res_ptr);
	} else {
		ALLOCA_FLAG(use_heap)
		uint32_t minor_size = (MATRIX1_ROWS - 1) * (MATRIX1_COLS - 1);
		float32_t *__restrict minor = do_alloca(minor_size * sizeof(float32_t), use_heap);
		uint32_t i, j, k, m, n;
		float32_t sign = 1, det = 0;
		for(m = 0; m < MATRIX1_ROWS; m++) {
			float32_t a = op1_ptr[m];
			float32_t minor_det;
			for(i = 1, n = 0, k = MATRIX1_ROWS; i < MATRIX1_ROWS; i++) {
				for(j = 0; j < MATRIX1_ROWS; j++, k++) {
					if(j != m) {
						minor[n] = op1_ptr[k];
						n++;
					}
				}
			}
			qb_do_determinant_F32(minor, MATRIX1_ROWS - 1, MATRIX1_COLS - 1, &minor_det);
			det += a * minor_det * sign;
			sign = -sign;
		}
		(*res_ptr) = det;
	}
}

void ZEND_FASTCALL qb_do_determinant_F64(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	if(MATRIX1_ROWS == 4) {
		qb_do_determinant_4x_F64(op1_ptr, res_ptr);
	} else {
		ALLOCA_FLAG(use_heap)
		uint32_t minor_size = (MATRIX1_ROWS - 1) * (MATRIX1_COLS - 1);
		float64_t *__restrict minor = do_alloca(minor_size * sizeof(float64_t), use_heap);
		uint32_t i, j, k, m, n;
		float64_t sign = 1, det = 0;
		for(m = 0; m < MATRIX1_ROWS; m++) {
			float64_t a = op1_ptr[m];
			float64_t minor_det;
			for(i = 1, n = 0, k = MATRIX1_ROWS; i < MATRIX1_ROWS; i++) {
				for(j = 0; j < MATRIX1_ROWS; j++, k++) {
					if(j != m) {
						minor[n] = op1_ptr[k];
						n++;
					}
				}
			}
			qb_do_determinant_F64(minor, MATRIX1_ROWS - 1, MATRIX1_COLS - 1, &minor_det);
			det += a * minor_det * sign;
			sign = -sign;
		}
		(*res_ptr) = det;
	}
}

void ZEND_FASTCALL qb_do_determinant_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_determinant_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_determinant_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] - op2_ptr[0]) * (op1_ptr[0] - op2_ptr[0]) + (op1_ptr[1] - op2_ptr[1]) * (op1_ptr[1] - op2_ptr[1]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_distance_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] - op2_ptr[0]) * (op1_ptr[0] - op2_ptr[0]) + (op1_ptr[1] - op2_ptr[1]) * (op1_ptr[1] - op2_ptr[1]) + (op1_ptr[2] - op2_ptr[2]) * (op1_ptr[2] - op2_ptr[2]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_distance_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] - op2_ptr[0]) * (op1_ptr[0] - op2_ptr[0]) + (op1_ptr[1] - op2_ptr[1]) * (op1_ptr[1] - op2_ptr[1]) + (op1_ptr[2] - op2_ptr[2]) * (op1_ptr[2] - op2_ptr[2]) + (op1_ptr[3] - op2_ptr[3]) * (op1_ptr[3] - op2_ptr[3]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_distance_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += (op1_ptr[i] - op2_ptr[i]) * (op1_ptr[i] - op2_ptr[i]);
	}
	(*res_ptr) = qb_fast_sqrtf(sum);
}

void ZEND_FASTCALL qb_do_distance_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += (op1_ptr[i] - op2_ptr[i]) * (op1_ptr[i] - op2_ptr[i]);
	}
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_distance_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_distance_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_distance_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			res_ptr[2] = op1_ptr[2] / op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			res_ptr[2] = op1_ptr[2] / op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			res_ptr[2] = op1_ptr[2] / op2_ptr[2];
			res_ptr[3] = op1_ptr[3] / op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] / op2_ptr[0];
			res_ptr[1] = op1_ptr[1] / op2_ptr[1];
			res_ptr[2] = op1_ptr[2] / op2_ptr[2];
			res_ptr[3] = op1_ptr[3] / op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) / (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) / (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_S08(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_S16(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_S32(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_S64(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_U08(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_U16(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_U32(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_divide_multiple_times_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_divide_U64(cxt, (*op1_ptr), (*op2_ptr), res_ptr, PHP_LINE_NUMBER);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]);
}

void ZEND_FASTCALL qb_do_dot_product_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]);
			
			res_ptr += 1;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_dot_product_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]);
}

void ZEND_FASTCALL qb_do_dot_product_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]);
			
			res_ptr += 1;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_dot_product_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]) + (op1_ptr[3] * op2_ptr[3]);
}

void ZEND_FASTCALL qb_do_dot_product_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]) + (op1_ptr[3] * op2_ptr[3]);
			
			res_ptr += 1;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_dot_product_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op2_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_dot_product_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op2_ptr[i];
	}
	(*res_ptr) = sum;
}

void ZEND_FASTCALL qb_do_dot_product_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_dot_product_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_dot_product_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_dot_product_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_equal_vector_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) == (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp2_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = exp2f((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp2_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = exp2((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp_m1_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = expm1f((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp_m1_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = expm1((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = expf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_exp_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = exp((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]);
	if(dot_product > 0) {
		res_ptr[0] = op1_ptr[0];
		res_ptr[1] = op1_ptr[1];
	} else {
		res_ptr[0] = -op1_ptr[0];
		res_ptr[1] = -op1_ptr[1];
	}
}

void ZEND_FASTCALL qb_do_face_forward_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]);
	if(dot_product > 0) {
		res_ptr[0] = op1_ptr[0];
		res_ptr[1] = op1_ptr[1];
		res_ptr[2] = op1_ptr[2];
	} else {
		res_ptr[0] = -op1_ptr[0];
		res_ptr[1] = -op1_ptr[1];
		res_ptr[2] = -op1_ptr[2];
	}
}

void ZEND_FASTCALL qb_do_face_forward_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]) + (op1_ptr[3] * op2_ptr[3]);
	if(dot_product > 0) {
		res_ptr[0] = op1_ptr[0];
		res_ptr[1] = op1_ptr[1];
		res_ptr[2] = op1_ptr[2];
		res_ptr[3] = op1_ptr[3];
	} else {
		res_ptr[0] = -op1_ptr[0];
		res_ptr[1] = -op1_ptr[1];
		res_ptr[2] = -op1_ptr[2];
		res_ptr[3] = -op1_ptr[3];
	}
}

void ZEND_FASTCALL qb_do_face_forward_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t dot_product;
	qb_do_dot_product_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	if(dot_product > 0) {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = op1_ptr[i];
		}
	} else {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = -op1_ptr[i];
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t dot_product;
	qb_do_dot_product_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	if(dot_product > 0) {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = op1_ptr[i];
		}
	} else {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = -op1_ptr[i];
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_face_forward_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_face_forward_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_floor_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) floorf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_floor_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) floor((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_floored_division_modulo_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) ((*op1_ptr) - (*op2_ptr) * floor((*op1_ptr) / (*op2_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_floored_division_modulo_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) ((*op1_ptr) - (*op2_ptr) * floor((*op1_ptr) / (*op2_ptr)));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_fract_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - floorf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_fract_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - floor((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_hypot_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) hypotf((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_hypot_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) hypot((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_in_array_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	int32_t index;
	qb_do_array_search_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, &index);
	(*res_ptr) = (index != -1);
}

void ZEND_FASTCALL qb_do_increment_2x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			
			res_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_2x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			
			res_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_3x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			++res_ptr[2];
			
			res_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_3x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			++res_ptr[2];
			
			res_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_4x_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			++res_ptr[2];
			++res_ptr[3];
			
			res_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_4x_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			++res_ptr[0];
			++res_ptr[1];
			++res_ptr[2];
			++res_ptr[3];
			
			res_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_F32(float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_F64(float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_I08(int8_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_I16(int16_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_I32(int32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_increment_multiple_times_I64(int64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			++(*res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_2x_F32(float32_t *op1_ptr, float32_t *res_ptr) {
	float32_t p00 =  op1_ptr[1 * 2 + 1];
	float32_t p01 = -op1_ptr[0 * 2 + 1];
	float32_t p10 = -op1_ptr[1 * 2 + 0];
	float32_t p11 =  op1_ptr[0 * 2 + 0];
	float32_t det = (op1_ptr[0 * 2 + 0] * p00) + (op1_ptr[0 * 2 + 1] * p10);
	if(det != 0) {
		float32_t rdet = 1.0f / det;
		res_ptr[0 * 2 + 0] = p00 * rdet;
		res_ptr[0 * 2 + 1] = p01 * rdet;
		res_ptr[1 * 2 + 0] = p10 * rdet;
		res_ptr[1 * 2 + 1] = p11 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 4; i++) {
			res_ptr[i] = (float32_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_2x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t p00 =  op1_ptr[1 * 2 + 1];
	float64_t p01 = -op1_ptr[0 * 2 + 1];
	float64_t p10 = -op1_ptr[1 * 2 + 0];
	float64_t p11 =  op1_ptr[0 * 2 + 0];
	float64_t det = (op1_ptr[0 * 2 + 0] * p00) + (op1_ptr[0 * 2 + 1] * p10);
	if(det != 0) {
		float64_t rdet = 1.0 / det;
		res_ptr[0 * 2 + 0] = p00 * rdet;
		res_ptr[0 * 2 + 1] = p01 * rdet;
		res_ptr[1 * 2 + 0] = p10 * rdet;
		res_ptr[1 * 2 + 1] = p11 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 4; i++) {
			res_ptr[i] = (float64_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_2x_F32(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_2x_F64(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_3x_F32(float32_t *op1_ptr, float32_t *res_ptr) {
	float32_t p00 = (op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 2]) - (op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 1]);
	float32_t p01 = (op1_ptr[0 * 3 + 2] * op1_ptr[2 * 3 + 1]) - (op1_ptr[0 * 3 + 1] * op1_ptr[2 * 3 + 2]);
	float32_t p02 = (op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 2]) - (op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 1]);
	float32_t p10 = (op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 0]) - (op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 2]);
	float32_t p11 = (op1_ptr[0 * 3 + 0] * op1_ptr[2 * 3 + 2]) - (op1_ptr[0 * 3 + 2] * op1_ptr[2 * 3 + 0]);
	float32_t p12 = (op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 0]) - (op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 2]);
	float32_t p20 = (op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 1]) - (op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 0]);
	float32_t p21 = (op1_ptr[0 * 3 + 1] * op1_ptr[2 * 3 + 0]) - (op1_ptr[0 * 3 + 0] * op1_ptr[2 * 3 + 1]);
	float32_t p22 = (op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 1]) - (op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 0]);
	float32_t det = (op1_ptr[0 * 3 + 0] * p00) + (op1_ptr[0 * 3 + 1] * p10) + (op1_ptr[0 * 3 + 2] * p20);
	if(det != 0) {
		float32_t rdet = 1.0f / det;
		res_ptr[0 * 3 + 0] = p00 * rdet;
		res_ptr[0 * 3 + 1] = p01 * rdet;
		res_ptr[0 * 3 + 2] = p02 * rdet;
		res_ptr[1 * 3 + 0] = p10 * rdet;
		res_ptr[1 * 3 + 1] = p11 * rdet;
		res_ptr[1 * 3 + 2] = p12 * rdet;
		res_ptr[2 * 3 + 0] = p20 * rdet;
		res_ptr[2 * 3 + 1] = p21 * rdet;
		res_ptr[2 * 3 + 2] = p22 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 9; i++) {
			res_ptr[i] = (float32_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_3x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t p00 = (op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 2]) - (op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 1]);
	float64_t p01 = (op1_ptr[0 * 3 + 2] * op1_ptr[2 * 3 + 1]) - (op1_ptr[0 * 3 + 1] * op1_ptr[2 * 3 + 2]);
	float64_t p02 = (op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 2]) - (op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 1]);
	float64_t p10 = (op1_ptr[1 * 3 + 2] * op1_ptr[2 * 3 + 0]) - (op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 2]);
	float64_t p11 = (op1_ptr[0 * 3 + 0] * op1_ptr[2 * 3 + 2]) - (op1_ptr[0 * 3 + 2] * op1_ptr[2 * 3 + 0]);
	float64_t p12 = (op1_ptr[0 * 3 + 2] * op1_ptr[1 * 3 + 0]) - (op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 2]);
	float64_t p20 = (op1_ptr[1 * 3 + 0] * op1_ptr[2 * 3 + 1]) - (op1_ptr[1 * 3 + 1] * op1_ptr[2 * 3 + 0]);
	float64_t p21 = (op1_ptr[0 * 3 + 1] * op1_ptr[2 * 3 + 0]) - (op1_ptr[0 * 3 + 0] * op1_ptr[2 * 3 + 1]);
	float64_t p22 = (op1_ptr[0 * 3 + 0] * op1_ptr[1 * 3 + 1]) - (op1_ptr[0 * 3 + 1] * op1_ptr[1 * 3 + 0]);
	float64_t det = (op1_ptr[0 * 3 + 0] * p00) + (op1_ptr[0 * 3 + 1] * p10) + (op1_ptr[0 * 3 + 2] * p20);
	if(det != 0) {
		float64_t rdet = 1.0 / det;
		res_ptr[0 * 3 + 0] = p00 * rdet;
		res_ptr[0 * 3 + 1] = p01 * rdet;
		res_ptr[0 * 3 + 2] = p02 * rdet;
		res_ptr[1 * 3 + 0] = p10 * rdet;
		res_ptr[1 * 3 + 1] = p11 * rdet;
		res_ptr[1 * 3 + 2] = p12 * rdet;
		res_ptr[2 * 3 + 0] = p20 * rdet;
		res_ptr[2 * 3 + 1] = p21 * rdet;
		res_ptr[2 * 3 + 2] = p22 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 9; i++) {
			res_ptr[i] = (float64_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_3x_F32(op1_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_3x_F64(op1_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_4x_F32(float32_t *op1_ptr, float32_t *res_ptr) {
	float32_t p00 = (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]) + (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p01 = (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p02 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p03 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3]);
	float32_t p10 = (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p11 = (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p12 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float32_t p13 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3]);
	float32_t p20 = (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float32_t p21 = (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float32_t p22 = (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float32_t p23 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3]);
	float32_t p30 = (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float32_t p31 = (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float32_t p32 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float32_t p33 = (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2]);
	float32_t det = (op1_ptr[0 * 4 + 0] * p00) + (op1_ptr[0 * 4 + 1] * p10) + (op1_ptr[0 * 4 + 2] * p20) + (op1_ptr[0 * 4 + 3] * p30);
	if(det != 0) {
		float32_t rdet = 1.0f / det;
		res_ptr[0 * 4 + 0] = p00 * rdet;
		res_ptr[0 * 4 + 1] = p01 * rdet;
		res_ptr[0 * 4 + 2] = p02 * rdet;
		res_ptr[0 * 4 + 3] = p03 * rdet;
		res_ptr[1 * 4 + 0] = p10 * rdet;
		res_ptr[1 * 4 + 1] = p11 * rdet;
		res_ptr[1 * 4 + 2] = p12 * rdet;
		res_ptr[1 * 4 + 3] = p13 * rdet;
		res_ptr[2 * 4 + 0] = p20 * rdet;
		res_ptr[2 * 4 + 1] = p21 * rdet;
		res_ptr[2 * 4 + 2] = p22 * rdet;
		res_ptr[2 * 4 + 3] = p23 * rdet;
		res_ptr[3 * 4 + 0] = p30 * rdet;
		res_ptr[3 * 4 + 1] = p31 * rdet;
		res_ptr[3 * 4 + 2] = p32 * rdet;
		res_ptr[3 * 4 + 3] = p33 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 16; i++) {
			res_ptr[i] = (float32_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_4x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t p00 = (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]) + (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p01 = (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p02 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p03 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3]);
	float64_t p10 = (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p11 = (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p12 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 3]);
	float64_t p13 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 2]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 3]);
	float64_t p20 = (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float64_t p21 = (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 3] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float64_t p22 = (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 3]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 3]);
	float64_t p23 = (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 3] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 3] * op1_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 3]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 3]);
	float64_t p30 = (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float64_t p31 = (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 2] * op1_ptr[3 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[2 * 4 + 0] * op1_ptr[3 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[2 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float64_t p32 = (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[3 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[3 * 4 + 2]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[3 * 4 + 2]);
	float64_t p33 = (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 0]) - (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 2] * op1_ptr[2 * 4 + 1]) - (op1_ptr[0 * 4 + 1] * op1_ptr[1 * 4 + 0] * op1_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 0] * op1_ptr[1 * 4 + 1] * op1_ptr[2 * 4 + 2]);
	float64_t det = (op1_ptr[0 * 4 + 0] * p00) + (op1_ptr[0 * 4 + 1] * p10) + (op1_ptr[0 * 4 + 2] * p20) + (op1_ptr[0 * 4 + 3] * p30);
	if(det != 0) {
		float64_t rdet = 1.0 / det;
		res_ptr[0 * 4 + 0] = p00 * rdet;
		res_ptr[0 * 4 + 1] = p01 * rdet;
		res_ptr[0 * 4 + 2] = p02 * rdet;
		res_ptr[0 * 4 + 3] = p03 * rdet;
		res_ptr[1 * 4 + 0] = p10 * rdet;
		res_ptr[1 * 4 + 1] = p11 * rdet;
		res_ptr[1 * 4 + 2] = p12 * rdet;
		res_ptr[1 * 4 + 3] = p13 * rdet;
		res_ptr[2 * 4 + 0] = p20 * rdet;
		res_ptr[2 * 4 + 1] = p21 * rdet;
		res_ptr[2 * 4 + 2] = p22 * rdet;
		res_ptr[2 * 4 + 3] = p23 * rdet;
		res_ptr[3 * 4 + 0] = p30 * rdet;
		res_ptr[3 * 4 + 1] = p31 * rdet;
		res_ptr[3 * 4 + 2] = p32 * rdet;
		res_ptr[3 * 4 + 3] = p33 * rdet;
	} else {
		uint32_t i;
		for(i = 0; i < 16; i++) {
			res_ptr[i] = (float64_t) NAN;
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_4x_F32(op1_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_4x_F64(op1_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_F32(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float32_t *__restrict minor = do_alloca((MATRIX1_ROWS - 1) * (MATRIX1_COLS - 1) * sizeof(float32_t), use_heap);
	float32_t *__restrict cofactors = do_alloca(MATRIX1_ROWS * MATRIX1_COLS * sizeof(float32_t), use_heap);
	uint32_t i, j, k, m, n, p, q;
	float32_t a, sign_init = 1, sign, det = 0, rdet;
	for(m = 0, p = 0; m < MATRIX1_ROWS; m++) {
		sign = sign_init;
		sign_init = -sign_init;
		for(n = 0; n < MATRIX1_ROWS; n++) {
			float32_t minor_det;
			for(i = 0, k = 0, q = 0; i < MATRIX1_ROWS; i++) {
				for(j = 0; j < MATRIX1_ROWS; j++, k++) {
					if(j != m && i != n) {
						minor[q] = op1_ptr[k];
						q++;
					}
				}
			}
			qb_do_determinant_F32(minor, MATRIX1_ROWS - 1, MATRIX1_COLS - 1, &minor_det);
			cofactors[p] = minor_det * sign;
			p++;
			if(n == 0) {
				a = op1_ptr[m];
				det += a * minor_det * sign;
			}
			sign = -sign;
		}
	}
	if(det != 0) {
		rdet = 1 / det;
		for(p = 0; p < MATRIX1_ROWS * MATRIX1_COLS; p++) {
			res_ptr[p] = cofactors[p] * rdet;
		}
	} else {
		for(p = 0; p < MATRIX1_ROWS * MATRIX1_COLS; p++) {
			res_ptr[p] = (float32_t) NAN;
		}
	}
	free_alloca(minor, use_heap);
	free_alloca(cofactors, use_heap);
}

void ZEND_FASTCALL qb_do_invert_matrix_F64(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float64_t *__restrict minor = do_alloca((MATRIX1_ROWS - 1) * (MATRIX1_COLS - 1) * sizeof(float64_t), use_heap);
	float64_t *__restrict cofactors = do_alloca(MATRIX1_ROWS * MATRIX1_COLS * sizeof(float64_t), use_heap);
	uint32_t i, j, k, m, n, p, q;
	float64_t a, sign_init = 1, sign, det = 0, rdet;
	for(m = 0, p = 0; m < MATRIX1_ROWS; m++) {
		sign = sign_init;
		sign_init = -sign_init;
		for(n = 0; n < MATRIX1_ROWS; n++) {
			float64_t minor_det;
			for(i = 0, k = 0, q = 0; i < MATRIX1_ROWS; i++) {
				for(j = 0; j < MATRIX1_ROWS; j++, k++) {
					if(j != m && i != n) {
						minor[q] = op1_ptr[k];
						q++;
					}
				}
			}
			qb_do_determinant_F64(minor, MATRIX1_ROWS - 1, MATRIX1_COLS - 1, &minor_det);
			cofactors[p] = minor_det * sign;
			p++;
			if(n == 0) {
				a = op1_ptr[m];
				det += a * minor_det * sign;
			}
			sign = -sign;
		}
	}
	if(det != 0) {
		rdet = 1 / det;
		for(p = 0; p < MATRIX1_ROWS * MATRIX1_COLS; p++) {
			res_ptr[p] = cofactors[p] * rdet;
		}
	} else {
		for(p = 0; p < MATRIX1_ROWS * MATRIX1_COLS; p++) {
			res_ptr[p] = (float64_t) NAN;
		}
	}
	free_alloca(minor, use_heap);
	free_alloca(cofactors, use_heap);
}

void ZEND_FASTCALL qb_do_invert_matrix_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			op1_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_invert_matrix_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_invert_matrix_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			op1_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_finite_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = zend_finite((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_finite_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = zend_finite((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_infinite_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (zend_isinf((*op1_ptr)) != 0);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_infinite_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (zend_isinf((*op1_ptr)) != 0);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_nan_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = zend_isnan((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_is_nan_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = zend_isnan((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_lcg_F32(qb_interpreter_context *cxt, float32_t *res_ptr) {
	USE_TSRM
	(*res_ptr) = (float32_t) php_combined_lcg(TSRMLS_C);
}

void ZEND_FASTCALL qb_do_lcg_F64(qb_interpreter_context *cxt, float64_t *res_ptr) {
	USE_TSRM
	(*res_ptr) = (float64_t) php_combined_lcg(TSRMLS_C);
}

void ZEND_FASTCALL qb_do_lcg_multiple_times_F32(qb_interpreter_context *cxt, float32_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_lcg_F32(cxt, res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_lcg_multiple_times_F64(qb_interpreter_context *cxt, float64_t *res_ptr, uint32_t res_count) {
	if(res_count) {
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_lcg_F64(cxt, res_ptr);
			
			res_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_2x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_length_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_2x_F32(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_2x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_3x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]) + (op1_ptr[2] * op1_ptr[2]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_length_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_3x_F32(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_3x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_4x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]) + (op1_ptr[2] * op1_ptr[2]) + (op1_ptr[3] * op1_ptr[3]);
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_length_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_4x_F32(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_4x_F64(op1_ptr, res_ptr);
			
			res_ptr += 1;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_F32(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op1_ptr[i];
	}
	(*res_ptr) = qb_fast_sqrtf(sum);
}

void ZEND_FASTCALL qb_do_length_F64(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t sum = 0;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op1_ptr[i];
	}
	(*res_ptr) = qb_fast_sqrt(sum);
}

void ZEND_FASTCALL qb_do_length_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_length_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_length_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += 1;
			op1_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_or_equal_vector_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) <= (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_less_than_vector_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log10_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log10f((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log10_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log10((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log1p_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log1pf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log1p_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log1p((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log2_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log2f((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log2_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log2((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = logf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_log_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = log((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_max_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) > (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_min_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) < (*op2_ptr)) ? (*op1_ptr) : (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_mix_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (1 - (*op3_ptr)) + (*op2_ptr) * (*op3_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_mix_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (1 - (*op3_ptr)) + (*op2_ptr) * (*op3_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmodf(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmodf(op1_ptr[1], op2_ptr[1]);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmod(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmod(op1_ptr[1], op2_ptr[1]);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmodf(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmodf(op1_ptr[1], op2_ptr[1]);
			res_ptr[2] = fmodf(op1_ptr[2], op2_ptr[2]);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmod(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmod(op1_ptr[1], op2_ptr[1]);
			res_ptr[2] = fmod(op1_ptr[2], op2_ptr[2]);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmodf(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmodf(op1_ptr[1], op2_ptr[1]);
			res_ptr[2] = fmodf(op1_ptr[2], op2_ptr[2]);
			res_ptr[3] = fmodf(op1_ptr[3], op2_ptr[3]);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = fmod(op1_ptr[0], op2_ptr[0]);
			res_ptr[1] = fmod(op1_ptr[1], op2_ptr[1]);
			res_ptr[2] = fmod(op1_ptr[2], op2_ptr[2]);
			res_ptr[3] = fmod(op1_ptr[3], op2_ptr[3]);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = fmodf((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = fmod((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_modulo_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) % (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			res_ptr[2] = op1_ptr[2] * op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			res_ptr[2] = op1_ptr[2] * op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			res_ptr[2] = op1_ptr[2] * op2_ptr[2];
			res_ptr[3] = op1_ptr[3] * op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] * op2_ptr[0];
			res_ptr[1] = op1_ptr[1] * op2_ptr[1];
			res_ptr[2] = op1_ptr[2] * op2_ptr[2];
			res_ptr[3] = op1_ptr[3] * op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			op3_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			op3_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			res_ptr[2] = op1_ptr[2] + (op2_ptr[2] * op3_ptr[2]);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			op3_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			res_ptr[2] = op1_ptr[2] + (op2_ptr[2] * op3_ptr[2]);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			op3_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			res_ptr[2] = op1_ptr[2] + (op2_ptr[2] * op3_ptr[2]);
			res_ptr[3] = op1_ptr[3] + (op2_ptr[3] * op3_ptr[3]);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			op3_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] + (op2_ptr[0] * op3_ptr[0]);
			res_ptr[1] = op1_ptr[1] + (op2_ptr[1] * op3_ptr[1]);
			res_ptr[2] = op1_ptr[2] + (op2_ptr[2] * op3_ptr[2]);
			res_ptr[3] = op1_ptr[3] + (op2_ptr[3] * op3_ptr[3]);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			op3_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *op3_ptr, uint32_t op3_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *op3_ptr, uint32_t op3_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_accumulate_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *op3_ptr, uint32_t op3_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) + ((*op2_ptr) * (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 2 + 0] * op2_ptr[0 * 2 + 0]) + (op1_ptr[0 * 2 + 1] * op2_ptr[1 * 2 + 0]);
	float64_t dot_product1 = (op1_ptr[0 * 2 + 0] * op2_ptr[0 * 2 + 1]) + (op1_ptr[0 * 2 + 1] * op2_ptr[1 * 2 + 1]);
	float64_t dot_product2 = (op1_ptr[1 * 2 + 0] * op2_ptr[0 * 2 + 0]) + (op1_ptr[1 * 2 + 1] * op2_ptr[1 * 2 + 0]);
	float64_t dot_product3 = (op1_ptr[1 * 2 + 0] * op2_ptr[0 * 2 + 1]) + (op1_ptr[1 * 2 + 1] * op2_ptr[1 * 2 + 1]);
	res_ptr[0 * 2 + 0] = dot_product0;
	res_ptr[0 * 2 + 1] = dot_product1;
	res_ptr[1 * 2 + 0] = dot_product2;
	res_ptr[1 * 2 + 1] = dot_product3;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_3x_F32(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	float32_t dot_product0 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float32_t dot_product1 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float32_t dot_product2 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	float32_t dot_product3 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float32_t dot_product4 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float32_t dot_product5 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	float32_t dot_product6 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float32_t dot_product7 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float32_t dot_product8 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	res_ptr[0 * 3 + 0] = dot_product0;
	res_ptr[0 * 3 + 1] = dot_product1;
	res_ptr[0 * 3 + 2] = dot_product2;
	res_ptr[1 * 3 + 0] = dot_product3;
	res_ptr[1 * 3 + 1] = dot_product4;
	res_ptr[1 * 3 + 2] = dot_product5;
	res_ptr[2 * 3 + 0] = dot_product6;
	res_ptr[2 * 3 + 1] = dot_product7;
	res_ptr[2 * 3 + 2] = dot_product8;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float64_t dot_product1 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float64_t dot_product2 = (op1_ptr[0 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[0 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	float64_t dot_product3 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float64_t dot_product4 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float64_t dot_product5 = (op1_ptr[1 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[1 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	float64_t dot_product6 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 0]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 0]);
	float64_t dot_product7 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 1]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 1]);
	float64_t dot_product8 = (op1_ptr[2 * 3 + 0] * op2_ptr[0 * 3 + 2]) + (op1_ptr[2 * 3 + 1] * op2_ptr[1 * 3 + 2]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2 * 3 + 2]);
	res_ptr[0 * 3 + 0] = dot_product0;
	res_ptr[0 * 3 + 1] = dot_product1;
	res_ptr[0 * 3 + 2] = dot_product2;
	res_ptr[1 * 3 + 0] = dot_product3;
	res_ptr[1 * 3 + 1] = dot_product4;
	res_ptr[1 * 3 + 2] = dot_product5;
	res_ptr[2 * 3 + 0] = dot_product6;
	res_ptr[2 * 3 + 1] = dot_product7;
	res_ptr[2 * 3 + 2] = dot_product8;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			op2_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			op2_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	float32_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 0]);
	float32_t dot_product1 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 1]);
	float32_t dot_product2 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 2]);
	float32_t dot_product3 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 0]);
	float32_t dot_product4 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 1]);
	float32_t dot_product5 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 2]);
	float32_t dot_product6 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 0]);
	float32_t dot_product7 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 1]);
	float32_t dot_product8 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 2]);
	res_ptr[0 * 4 + 0] = dot_product0;
	res_ptr[0 * 4 + 1] = dot_product1;
	res_ptr[0 * 4 + 2] = dot_product2;
	res_ptr[1 * 4 + 0] = dot_product3;
	res_ptr[1 * 4 + 1] = dot_product4;
	res_ptr[1 * 4 + 2] = dot_product5;
	res_ptr[2 * 4 + 0] = dot_product6;
	res_ptr[2 * 4 + 1] = dot_product7;
	res_ptr[2 * 4 + 2] = dot_product8;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_4x_F32(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	float32_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float32_t dot_product1 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float32_t dot_product2 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float32_t dot_product3 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float32_t dot_product4 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float32_t dot_product5 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float32_t dot_product6 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float32_t dot_product7 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float32_t dot_product8 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float32_t dot_product9 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float32_t dot_product10 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float32_t dot_product11 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float32_t dot_product12 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float32_t dot_product13 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float32_t dot_product14 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float32_t dot_product15 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	res_ptr[0 * 4 + 0] = dot_product0;
	res_ptr[0 * 4 + 1] = dot_product1;
	res_ptr[0 * 4 + 2] = dot_product2;
	res_ptr[0 * 4 + 3] = dot_product3;
	res_ptr[1 * 4 + 0] = dot_product4;
	res_ptr[1 * 4 + 1] = dot_product5;
	res_ptr[1 * 4 + 2] = dot_product6;
	res_ptr[1 * 4 + 3] = dot_product7;
	res_ptr[2 * 4 + 0] = dot_product8;
	res_ptr[2 * 4 + 1] = dot_product9;
	res_ptr[2 * 4 + 2] = dot_product10;
	res_ptr[2 * 4 + 3] = dot_product11;
	res_ptr[3 * 4 + 0] = dot_product12;
	res_ptr[3 * 4 + 1] = dot_product13;
	res_ptr[3 * 4 + 2] = dot_product14;
	res_ptr[3 * 4 + 3] = dot_product15;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float64_t dot_product1 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float64_t dot_product2 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float64_t dot_product3 = (op1_ptr[0 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[0 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float64_t dot_product4 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float64_t dot_product5 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float64_t dot_product6 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float64_t dot_product7 = (op1_ptr[1 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[1 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float64_t dot_product8 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float64_t dot_product9 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float64_t dot_product10 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float64_t dot_product11 = (op1_ptr[2 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[2 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	float64_t dot_product12 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 0]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 0]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 0]);
	float64_t dot_product13 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 1]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 1]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 1]);
	float64_t dot_product14 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 2]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 2]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 2]);
	float64_t dot_product15 = (op1_ptr[3 * 4 + 0] * op2_ptr[0 * 4 + 3]) + (op1_ptr[3 * 4 + 1] * op2_ptr[1 * 4 + 3]) + (op1_ptr[3 * 4 + 2] * op2_ptr[2 * 4 + 3]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3 * 4 + 3]);
	res_ptr[0 * 4 + 0] = dot_product0;
	res_ptr[0 * 4 + 1] = dot_product1;
	res_ptr[0 * 4 + 2] = dot_product2;
	res_ptr[0 * 4 + 3] = dot_product3;
	res_ptr[1 * 4 + 0] = dot_product4;
	res_ptr[1 * 4 + 1] = dot_product5;
	res_ptr[1 * 4 + 2] = dot_product6;
	res_ptr[1 * 4 + 3] = dot_product7;
	res_ptr[2 * 4 + 0] = dot_product8;
	res_ptr[2 * 4 + 1] = dot_product9;
	res_ptr[2 * 4 + 2] = dot_product10;
	res_ptr[2 * 4 + 3] = dot_product11;
	res_ptr[3 * 4 + 0] = dot_product12;
	res_ptr[3 * 4 + 1] = dot_product13;
	res_ptr[3 * 4 + 2] = dot_product14;
	res_ptr[3 * 4 + 3] = dot_product15;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			op2_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			op2_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float32_t *__restrict buffer = do_alloca(MATRIX1_ROWS * MATRIX2_COLS * sizeof(float32_t), use_heap);
	uint32_t i, j, k, p, q, res_index = 0;
	for(i = 0, q = 0; i < MATRIX2_COLS; ++i) {
		for(j = 0; j < MATRIX1_ROWS; ++j) {
			float32_t dot_product = 0;
			for(p = 0, k = 0; p < MATRIX1_COLS; ++p, k += MATRIX1_ROWS) {
				dot_product += op1_ptr[k + j] * op2_ptr[p + q];
			}
			buffer[res_index++] = dot_product;
		}
		q += MATRIX1_COLS;
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * MATRIX2_COLS * sizeof(float32_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float64_t *__restrict buffer = do_alloca(MATRIX1_ROWS * MATRIX2_COLS * sizeof(float64_t), use_heap);
	uint32_t i, j, k, p, q, res_index = 0;
	for(i = 0, q = 0; i < MATRIX2_COLS; ++i) {
		for(j = 0; j < MATRIX1_ROWS; ++j) {
			float64_t dot_product = 0;
			for(p = 0, k = 0; p < MATRIX1_COLS; ++p, k += MATRIX1_ROWS) {
				dot_product += op1_ptr[k + j] * op2_ptr[p + q];
			}
			buffer[res_index++] = dot_product;
		}
		q += MATRIX1_COLS;
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * MATRIX2_COLS * sizeof(float64_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (MATRIX1_ROWS * MATRIX2_COLS);
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * MATRIX2_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_matrix_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (MATRIX1_ROWS * MATRIX2_COLS);
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * MATRIX2_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 2 + 0] * op2_ptr[0]) + (op1_ptr[1 * 2 + 0] * op2_ptr[1]);
	float64_t dot_product1 = (op1_ptr[0 * 2 + 1] * op2_ptr[0]) + (op1_ptr[1 * 2 + 1] * op2_ptr[1]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 4;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 4;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 3 + 0] * op2_ptr[0]) + (op1_ptr[1 * 3 + 0] * op2_ptr[1]) + (op1_ptr[2 * 3 + 0] * op2_ptr[2]);
	float64_t dot_product1 = (op1_ptr[0 * 3 + 1] * op2_ptr[0]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1]) + (op1_ptr[2 * 3 + 1] * op2_ptr[2]);
	float64_t dot_product2 = (op1_ptr[0 * 3 + 2] * op2_ptr[0]) + (op1_ptr[1 * 3 + 2] * op2_ptr[1]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 9;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 9;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0]) + (op1_ptr[1 * 4 + 0] * op2_ptr[1]) + (op1_ptr[2 * 4 + 0] * op2_ptr[2]) + (op1_ptr[3 * 4 + 0] * op2_ptr[3]);
	float64_t dot_product1 = (op1_ptr[0 * 4 + 1] * op2_ptr[0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1]) + (op1_ptr[2 * 4 + 1] * op2_ptr[2]) + (op1_ptr[3 * 4 + 1] * op2_ptr[3]);
	float64_t dot_product2 = (op1_ptr[0 * 4 + 2] * op2_ptr[0]) + (op1_ptr[1 * 4 + 2] * op2_ptr[1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2]) + (op1_ptr[3 * 4 + 2] * op2_ptr[3]);
	float64_t dot_product3 = (op1_ptr[0 * 4 + 3] * op2_ptr[0]) + (op1_ptr[1 * 4 + 3] * op2_ptr[1]) + (op1_ptr[2 * 4 + 3] * op2_ptr[2]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
	res_ptr[3] = dot_product3;
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 16;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 16;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float32_t *buffer = do_alloca(MATRIX1_ROWS * sizeof(float32_t), use_heap);
	uint32_t i, j, k;
	for(i = 0; i < MATRIX1_ROWS; ++i) {
		float32_t dot_product = 0;
		for(j = 0, k = i; j < MATRIX1_COLS; ++j, k += MATRIX1_COLS) {
			dot_product += op1_ptr[k] * op2_ptr[j];
		}
		buffer[i] = dot_product;
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * sizeof(float32_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float64_t *buffer = do_alloca(MATRIX1_ROWS * sizeof(float64_t), use_heap);
	uint32_t i, j, k;
	for(i = 0; i < MATRIX1_ROWS; ++i) {
		float64_t dot_product = 0;
		for(j = 0, k = i; j < MATRIX1_COLS; ++j, k += MATRIX1_COLS) {
			dot_product += op1_ptr[k] * op2_ptr[j];
		}
		buffer[i] = dot_product;
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * sizeof(float64_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (MATRIX1_ROWS * 1);
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * 1);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_matrix_by_vector_cm_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_matrix_by_vector_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (MATRIX1_ROWS * 1);
			op1_ptr += (MATRIX1_ROWS * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * 1);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0] * op2_ptr[0 * 2 + 0]) + (op1_ptr[1] * op2_ptr[0 * 2 + 1]);
	float64_t dot_product1 = (op1_ptr[0] * op2_ptr[1 * 2 + 0]) + (op1_ptr[1] * op2_ptr[1 * 2 + 1]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0] * op2_ptr[0 * 3 + 0]) + (op1_ptr[1] * op2_ptr[0 * 3 + 1]) + (op1_ptr[2] * op2_ptr[0 * 3 + 2]);
	float64_t dot_product1 = (op1_ptr[0] * op2_ptr[1 * 3 + 0]) + (op1_ptr[1] * op2_ptr[1 * 3 + 1]) + (op1_ptr[2] * op2_ptr[1 * 3 + 2]);
	float64_t dot_product2 = (op1_ptr[0] * op2_ptr[2 * 3 + 0]) + (op1_ptr[1] * op2_ptr[2 * 3 + 1]) + (op1_ptr[2] * op2_ptr[2 * 3 + 2]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0] * op2_ptr[0 * 4 + 0]) + (op1_ptr[1] * op2_ptr[0 * 4 + 1]) + (op1_ptr[2] * op2_ptr[0 * 4 + 2]) + (op1_ptr[3] * op2_ptr[0 * 4 + 3]);
	float64_t dot_product1 = (op1_ptr[0] * op2_ptr[1 * 4 + 0]) + (op1_ptr[1] * op2_ptr[1 * 4 + 1]) + (op1_ptr[2] * op2_ptr[1 * 4 + 2]) + (op1_ptr[3] * op2_ptr[1 * 4 + 3]);
	float64_t dot_product2 = (op1_ptr[0] * op2_ptr[2 * 4 + 0]) + (op1_ptr[1] * op2_ptr[2 * 4 + 1]) + (op1_ptr[2] * op2_ptr[2 * 4 + 2]) + (op1_ptr[3] * op2_ptr[2 * 4 + 3]);
	float64_t dot_product3 = (op1_ptr[0] * op2_ptr[3 * 4 + 0]) + (op1_ptr[1] * op2_ptr[3 * 4 + 1]) + (op1_ptr[2] * op2_ptr[3 * 4 + 2]) + (op1_ptr[3] * op2_ptr[3 * 4 + 3]);
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
	res_ptr[3] = dot_product3;
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float32_t *buffer = do_alloca(MATRIX2_ROWS * sizeof(float32_t), use_heap);
	uint32_t i, j, k;
	for(i = 0, k = 0; i < MATRIX2_COLS; ++i) {
		float32_t dot_product = 0;
		for(j = 0; j < MATRIX2_ROWS; ++j, ++k) {
			dot_product += op1_ptr[j] * op2_ptr[k];
		}
		buffer[i] = dot_product;
	}
	memcpy(res_ptr, buffer, MATRIX2_COLS * sizeof(float32_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float64_t *buffer = do_alloca(MATRIX2_ROWS * sizeof(float64_t), use_heap);
	uint32_t i, j, k;
	for(i = 0, k = 0; i < MATRIX2_COLS; ++i) {
		float64_t dot_product = 0;
		for(j = 0; j < MATRIX2_ROWS; ++j, ++k) {
			dot_product += op1_ptr[j] * op2_ptr[k];
		}
		buffer[i] = dot_product;
	}
	memcpy(res_ptr, buffer, MATRIX2_COLS * sizeof(float64_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (1 * MATRIX2_COLS);
			op1_ptr += (1 * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * MATRIX2_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_multiply_vector_by_matrix_cm_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_multiply_vector_by_matrix_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += (1 * MATRIX2_COLS);
			op1_ptr += (1 * MATRIX1_COLS);
			op2_ptr += (MATRIX2_ROWS * MATRIX2_COLS);
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			res_ptr[2] = - op1_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			res_ptr[2] = - op1_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			res_ptr[2] = - op1_ptr[2];
			res_ptr[3] = - op1_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = - op1_ptr[0];
			res_ptr[1] = - op1_ptr[1];
			res_ptr[2] = - op1_ptr[2];
			res_ptr[3] = - op1_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_negate_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = - (*op1_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_2x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]);
	float64_t r = qb_fast_rsqrt(sum);
	res_ptr[0] = op1_ptr[0] * r;
	res_ptr[1] = op1_ptr[1] * r;
}

void ZEND_FASTCALL qb_do_normalize_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_2x_F32(op1_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_2x_F64(op1_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_3x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]) + (op1_ptr[2] * op1_ptr[2]);
	float64_t r = qb_fast_rsqrt(sum);
	res_ptr[0] = op1_ptr[0] * r;
	res_ptr[1] = op1_ptr[1] * r;
	res_ptr[2] = op1_ptr[2] * r;
}

void ZEND_FASTCALL qb_do_normalize_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_3x_F32(op1_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_3x_F64(op1_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_4x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t sum = (op1_ptr[0] * op1_ptr[0]) + (op1_ptr[1] * op1_ptr[1]) + (op1_ptr[2] * op1_ptr[2]) + (op1_ptr[3] * op1_ptr[3]);
	float64_t r = qb_fast_rsqrt(sum);
	res_ptr[0] = op1_ptr[0] * r;
	res_ptr[1] = op1_ptr[1] * r;
	res_ptr[2] = op1_ptr[2] * r;
	res_ptr[3] = op1_ptr[3] * r;
}

void ZEND_FASTCALL qb_do_normalize_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_4x_F32(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_4x_F64(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_F32(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t sum = 0, r;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op1_ptr[i];
	}
	r = qb_fast_rsqrtf(sum);
	for(i = 0; i < MATRIX1_COLS; i++) {
		res_ptr[i] = op1_ptr[i] * r;
	}
}

void ZEND_FASTCALL qb_do_normalize_F64(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t sum = 0, r;
	for(i = 0; i < MATRIX1_COLS; i++) {
		sum += op1_ptr[i] * op1_ptr[i];
	}
	r = qb_fast_rsqrt(sum);
	for(i = 0; i < MATRIX1_COLS; i++) {
		res_ptr[i] = op1_ptr[i] * r;
	}
}

void ZEND_FASTCALL qb_do_normalize_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_normalize_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_normalize_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_equal_vector_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = ((*op1_ptr) != (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_not_vector_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (!(*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_pow_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = powf((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_pow_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = pow((*op1_ptr), (*op2_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	float32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	float64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	int8_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	int16_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	int32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	int64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	uint8_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	uint16_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	uint32_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_multidimensional_variable_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	USE_TSRM
	uint64_t *op1_end = op1_ptr + op1_count;
	uint32_t depth = 0, i;
	uint32_t counts[MAX_DIMENSION];
	for(i = 0; i < op2_count; i++) {
		counts[i] = 0;
	}
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end || depth > 0) {
		if(counts[depth] < op2_ptr[depth]) {
			if(counts[depth] > 0) {
				php_write(", ", 2 TSRMLS_CC);
			}
			if(depth + 1 == op2_count) {
				char sprintf_buffer[64];
				uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
				php_write(sprintf_buffer, len TSRMLS_CC);
				op1_ptr++;
				counts[depth]++;
			} else {
				php_write("[", 1 TSRMLS_CC);
				depth++;
			}
		} else {
			php_write("]", 1 TSRMLS_CC);
			counts[depth] = 0;
			depth--;
			counts[depth]++;
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_F32(qb_interpreter_context *cxt, float32_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_F64(qb_interpreter_context *cxt, float64_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_S08(qb_interpreter_context *cxt, int8_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_S16(qb_interpreter_context *cxt, int16_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_S32(qb_interpreter_context *cxt, int32_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_S64(qb_interpreter_context *cxt, int64_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_U08(qb_interpreter_context *cxt, uint8_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_U16(qb_interpreter_context *cxt, uint16_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_U32(qb_interpreter_context *cxt, uint32_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_U64(qb_interpreter_context *cxt, uint64_t op1) {
	USE_TSRM
	char sprintf_buffer[64];
	uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, op1);
	php_write(sprintf_buffer, len TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_F32(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	float32_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision / 2, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_F64(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	float64_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%.*G", cxt->floating_point_precision, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	int8_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId8, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	int16_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId16, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	int32_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId32, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	int64_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRId64, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	uint8_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu8, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	uint16_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu16, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	uint32_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu32, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_print_variable_multiple_times_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count) {
	USE_TSRM
	uint64_t *op1_end = op1_ptr + op1_count;
	php_write("[", 1 TSRMLS_CC);
	while(op1_ptr < op1_end) {
		char sprintf_buffer[64];
		uint32_t len = snprintf(sprintf_buffer, sizeof(sprintf_buffer), "%" PRIu64, *op1_ptr);
		php_write(sprintf_buffer, len TSRMLS_CC);
		op1_ptr++;
		if(op1_ptr != op1_end) {
			php_write(", ", 2 TSRMLS_CC);
		}
	}
	php_write("]", 1 TSRMLS_CC);
}

void ZEND_FASTCALL qb_do_radian_to_degree_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * ((float32_t) (180 / M_PI));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_radian_to_degree_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) * ((float64_t) (180 / M_PI));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_S08(qb_interpreter_context *cxt, int8_t op1, int8_t op2, int8_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (int8_t) number_l;
}

void ZEND_FASTCALL qb_do_random_S16(qb_interpreter_context *cxt, int16_t op1, int16_t op2, int16_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (int16_t) number_l;
}

void ZEND_FASTCALL qb_do_random_S32(qb_interpreter_context *cxt, int32_t op1, int32_t op2, int32_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (int32_t) number_l;
}

void ZEND_FASTCALL qb_do_random_S64(qb_interpreter_context *cxt, int64_t op1, int64_t op2, int64_t *res_ptr) {
	USE_TSRM
	int32_t number_h = php_rand(TSRMLS_C), upper_limit_h = op2 >> 32, lower_limit_h = op1 >> 32;
	uint32_t number_l = php_rand(TSRMLS_C), upper_limit_l = 0xFFFFFFFF, lower_limit_l = 0;
	number_h = lower_limit_h + (int32_t) ((double) ( (double) upper_limit_h - lower_limit_h + 1.0) * (number_h / (PHP_RAND_MAX + 1.0)));
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (uint64_t) number_h << 32 | number_l;
}

void ZEND_FASTCALL qb_do_random_U08(qb_interpreter_context *cxt, uint8_t op1, uint8_t op2, uint8_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (uint8_t) number_l;
}

void ZEND_FASTCALL qb_do_random_U16(qb_interpreter_context *cxt, uint16_t op1, uint16_t op2, uint16_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (uint16_t) number_l;
}

void ZEND_FASTCALL qb_do_random_U32(qb_interpreter_context *cxt, uint32_t op1, uint32_t op2, uint32_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_rand(TSRMLS_C), upper_limit_l = op2, lower_limit_l = op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (uint32_t) number_l;
}

void ZEND_FASTCALL qb_do_random_U64(qb_interpreter_context *cxt, uint64_t op1, uint64_t op2, uint64_t *res_ptr) {
	USE_TSRM
	uint32_t number_h = php_rand(TSRMLS_C), upper_limit_h = op2 >> 32, lower_limit_h = op1 >> 32;
	uint32_t number_l = php_rand(TSRMLS_C), upper_limit_l = 0xFFFFFFFF, lower_limit_l = 0;
	number_h = lower_limit_h + (uint32_t) ((double) ( (double) upper_limit_h - lower_limit_h + 1.0) * (number_h / (PHP_RAND_MAX + 1.0)));
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_RAND_MAX + 1.0)));
	res_ptr[0] = (uint64_t) number_h << 32 | number_l;
}

void ZEND_FASTCALL qb_do_random_mt_S08(qb_interpreter_context *cxt, int8_t op1, int8_t op2, int8_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (int32_t) op2, lower_limit_l = (int32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (int8_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_S16(qb_interpreter_context *cxt, int16_t op1, int16_t op2, int16_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (int32_t) op2, lower_limit_l = (int32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (int16_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_S32(qb_interpreter_context *cxt, int32_t op1, int32_t op2, int32_t *res_ptr) {
	USE_TSRM
	int32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (int32_t) op2, lower_limit_l = (int32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (int32_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_S64(qb_interpreter_context *cxt, int64_t op1, int64_t op2, int64_t *res_ptr) {
	USE_TSRM
	int32_t number_h = php_mt_rand(TSRMLS_C) >> 1, upper_limit_h = op2 >> 32, lower_limit_h = op1 >> 32;
	uint32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = 0xFFFFFFFF, lower_limit_l = 0;
	number_h = lower_limit_h + (int32_t) ((double) ( (double) upper_limit_h - lower_limit_h + 1.0) * (number_h / (PHP_MT_RAND_MAX + 1.0)));
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (uint64_t) number_h << 32 | number_l;
}

void ZEND_FASTCALL qb_do_random_mt_U08(qb_interpreter_context *cxt, uint8_t op1, uint8_t op2, uint8_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (uint32_t) op2, lower_limit_l = (uint32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (uint8_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_U16(qb_interpreter_context *cxt, uint16_t op1, uint16_t op2, uint16_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (uint32_t) op2, lower_limit_l = (uint32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (uint16_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_U32(qb_interpreter_context *cxt, uint32_t op1, uint32_t op2, uint32_t *res_ptr) {
	USE_TSRM
	uint32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = (uint32_t) op2, lower_limit_l = (uint32_t) op1;
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (uint32_t) number_l;
}

void ZEND_FASTCALL qb_do_random_mt_U64(qb_interpreter_context *cxt, uint64_t op1, uint64_t op2, uint64_t *res_ptr) {
	USE_TSRM
	uint32_t number_h = php_mt_rand(TSRMLS_C) >> 1, upper_limit_h = op2 >> 32, lower_limit_h = op1 >> 32;
	uint32_t number_l = php_mt_rand(TSRMLS_C) >> 1, upper_limit_l = 0xFFFFFFFF, lower_limit_l = 0;
	number_h = lower_limit_h + (uint32_t) ((double) ( (double) upper_limit_h - lower_limit_h + 1.0) * (number_h / (PHP_MT_RAND_MAX + 1.0)));
	number_l = lower_limit_l + (uint32_t) ((double) ( (double) upper_limit_l - lower_limit_l + 1.0) * (number_l / (PHP_MT_RAND_MAX + 1.0)));
	res_ptr[0] = (uint64_t) number_h << 32 | number_l;
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_S08(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_S16(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_S32(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_S64(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_U08(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_U16(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_U32(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_mt_multiple_times_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_mt_U64(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_S08(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_S08(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_S16(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_S16(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_S32(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_S32(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_S64(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_S64(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_U08(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_U08(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_U16(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_U16(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_U32(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_U32(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_random_multiple_times_U64(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_random_U64(cxt, (*op1_ptr), (*op2_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_range_F32(float32_t op1, float32_t op2, float32_t op3, uint32_t string_length, float32_t *res_ptr, uint32_t res_count) {
	float32_t *res_end = res_ptr + string_length;
	float32_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_F64(float64_t op1, float64_t op2, float64_t op3, uint32_t string_length, float64_t *res_ptr, uint32_t res_count) {
	float64_t *res_end = res_ptr + string_length;
	float64_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_S08(int8_t op1, int8_t op2, int8_t op3, uint32_t string_length, int8_t *res_ptr, uint32_t res_count) {
	int8_t *res_end = res_ptr + string_length;
	int8_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_S16(int16_t op1, int16_t op2, int16_t op3, uint32_t string_length, int16_t *res_ptr, uint32_t res_count) {
	int16_t *res_end = res_ptr + string_length;
	int16_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_S32(int32_t op1, int32_t op2, int32_t op3, uint32_t string_length, int32_t *res_ptr, uint32_t res_count) {
	int32_t *res_end = res_ptr + string_length;
	int32_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_S64(int64_t op1, int64_t op2, int64_t op3, uint32_t string_length, int64_t *res_ptr, uint32_t res_count) {
	int64_t *res_end = res_ptr + string_length;
	int64_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_U08(uint8_t op1, uint8_t op2, int8_t op3, uint32_t string_length, uint8_t *res_ptr, uint32_t res_count) {
	uint8_t *res_end = res_ptr + string_length;
	uint8_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_U16(uint16_t op1, uint16_t op2, int16_t op3, uint32_t string_length, uint16_t *res_ptr, uint32_t res_count) {
	uint16_t *res_end = res_ptr + string_length;
	uint16_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_U32(uint32_t op1, uint32_t op2, int32_t op3, uint32_t string_length, uint32_t *res_ptr, uint32_t res_count) {
	uint32_t *res_end = res_ptr + string_length;
	uint32_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_range_U64(uint64_t op1, uint64_t op2, int64_t op3, uint32_t string_length, uint64_t *res_ptr, uint32_t res_count) {
	uint64_t *res_end = res_ptr + string_length;
	uint64_t num = op1;
	while(res_ptr < res_end) {
		*res_ptr = num;
		res_ptr++;
		num += op3;
	}
}

void ZEND_FASTCALL qb_do_reflect_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]);
	res_ptr[0] = (float64_t) (op1_ptr[0] - 2.0 * dot_product * op2_ptr[0]);
	res_ptr[1] = (float64_t) (op1_ptr[1] - 2.0 * dot_product * op2_ptr[1]);
}

void ZEND_FASTCALL qb_do_reflect_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]);
	res_ptr[0] = (float64_t) (op1_ptr[0] - 2.0 * dot_product * op2_ptr[0]);
	res_ptr[1] = (float64_t) (op1_ptr[1] - 2.0 * dot_product * op2_ptr[1]);
	res_ptr[2] = (float64_t) (op1_ptr[2] - 2.0 * dot_product * op2_ptr[2]);
}

void ZEND_FASTCALL qb_do_reflect_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]) + (op1_ptr[3] * op2_ptr[3]);
	res_ptr[0] = (float64_t) (op1_ptr[0] - 2.0 * dot_product * op2_ptr[0]);
	res_ptr[1] = (float64_t) (op1_ptr[1] - 2.0 * dot_product * op2_ptr[1]);
	res_ptr[2] = (float64_t) (op1_ptr[2] - 2.0 * dot_product * op2_ptr[2]);
	res_ptr[3] = (float64_t) (op1_ptr[3] - 2.0 * dot_product * op2_ptr[3]);
}

void ZEND_FASTCALL qb_do_reflect_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_F32(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t dot_product;
	qb_do_dot_product_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	for(i = 0; i < MATRIX1_COLS; i++) {
		res_ptr[i] = (float32_t) (op1_ptr[i] - 2.0 * dot_product * op2_ptr[i]);
	}
}

void ZEND_FASTCALL qb_do_reflect_F64(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t dot_product;
	qb_do_dot_product_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	for(i = 0; i < MATRIX1_COLS; i++) {
		res_ptr[i] = (float64_t) (op1_ptr[i] - 2.0 * dot_product * op2_ptr[i]);
	}
}

void ZEND_FASTCALL qb_do_reflect_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reflect_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_reflect_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]);
	float64_t k = (float64_t) (1.0 - (op3 * op3) * (1.0 - dot_product * dot_product));
	if(k < 0.0) {
		res_ptr[0] = 
		res_ptr[1] = 0.0;
	} else {
		float64_t m = op3 * dot_product + qb_fast_sqrt(k);
		res_ptr[0] = op3 * op1_ptr[0] - m * op2_ptr[0];
		res_ptr[1] = op3 * op1_ptr[1] - m * op2_ptr[1];
	}
}

void ZEND_FASTCALL qb_do_refract_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_2x_F32(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_2x_F64(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]);
	float64_t k = (float64_t) (1.0 - (op3 * op3) * (1.0 - dot_product * dot_product));
	if(k < 0.0) {
		res_ptr[0] = 
		res_ptr[1] = 
		res_ptr[2] = 0.0;
	} else {
		float64_t m = op3 * dot_product + qb_fast_sqrt(k);
		res_ptr[0] = op3 * op1_ptr[0] - m * op2_ptr[0];
		res_ptr[1] = op3 * op1_ptr[1] - m * op2_ptr[1];
		res_ptr[2] = op3 * op1_ptr[2] - m * op2_ptr[2];
	}
}

void ZEND_FASTCALL qb_do_refract_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_3x_F32(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_3x_F64(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	float64_t dot_product = (op1_ptr[0] * op2_ptr[0]) + (op1_ptr[1] * op2_ptr[1]) + (op1_ptr[2] * op2_ptr[2]) + (op1_ptr[3] * op2_ptr[3]);
	float64_t k = (float64_t) (1.0 - (op3 * op3) * (1.0 - dot_product * dot_product));
	if(k < 0.0) {
		res_ptr[0] = 
		res_ptr[1] = 
		res_ptr[2] = 
		res_ptr[3] = 0.0;
	} else {
		float64_t m = op3 * dot_product + qb_fast_sqrt(k);
		res_ptr[0] = op3 * op1_ptr[0] - m * op2_ptr[0];
		res_ptr[1] = op3 * op1_ptr[1] - m * op2_ptr[1];
		res_ptr[2] = op3 * op1_ptr[2] - m * op2_ptr[2];
		res_ptr[3] = op3 * op1_ptr[3] - m * op2_ptr[3];
	}
}

void ZEND_FASTCALL qb_do_refract_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_4x_F32(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_4x_F64(op1_ptr, op2_ptr, op3, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_F32(float32_t *op1_ptr, float32_t *op2_ptr, float32_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	uint32_t i;
	float32_t dot_product, k;
	qb_do_dot_product_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	k = (float32_t) (1.0 - (op3 * op3) * (1.0 - dot_product * dot_product));
	if(k < 0.0) {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[0] = 0.0;
		}
	} else {
		float32_t m = op3 * dot_product + qb_fast_sqrtf(k);
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = op3 * op1_ptr[i] - m * op2_ptr[i];
		}
	}
}

void ZEND_FASTCALL qb_do_refract_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	uint32_t i;
	float64_t dot_product, k;
	qb_do_dot_product_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, &dot_product);
	k = (float64_t) (1.0 - (op3 * op3) * (1.0 - dot_product * dot_product));
	if(k < 0.0) {
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[0] = 0.0;
		}
	} else {
		float64_t m = op3 * dot_product + qb_fast_sqrt(k);
		for(i = 0; i < MATRIX1_COLS; i++) {
			res_ptr[i] = op3 * op1_ptr[i] - m * op2_ptr[i];
		}
	}
}

void ZEND_FASTCALL qb_do_refract_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_F32(op1_ptr, op2_ptr, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_refract_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_refract_F64(op1_ptr, op2_ptr, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
			
			res_ptr += MATRIX1_COLS;
			op1_ptr += MATRIX1_COLS;
			op2_ptr += MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_remove_premultiplication_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			float32_t a = op1_ptr[3];
			if(a != 1) { 
				float32_t ia = (a != 0) ? 1 / a : 0;
				res_ptr[0] = op1_ptr[0] * ia;
				res_ptr[1] = op1_ptr[1] * ia;
				res_ptr[2] = op1_ptr[2] * ia;
				res_ptr[3] = op1_ptr[3];
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_remove_premultiplication_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			float64_t a = op1_ptr[3];
			if(a != 1) { 
				float64_t ia = (a != 0) ? 1 / a : 0;
				res_ptr[0] = op1_ptr[0] * ia;
				res_ptr[1] = op1_ptr[1] * ia;
				res_ptr[2] = op1_ptr[2] * ia;
				res_ptr[3] = op1_ptr[3];
			} else {
				res_ptr[0] = op1_ptr[0];
				res_ptr[1] = op1_ptr[1];
				res_ptr[2] = op1_ptr[2];
				res_ptr[3] = op1_ptr[3];
			}
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_F32(uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(float32_t) * 1, qb_compare_descending_F32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(float32_t) * op1, qb_compare_descending_F32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_F64(uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(float64_t) * 1, qb_compare_descending_F64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(float64_t) * op1, qb_compare_descending_F64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_S08(uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int8_t) * 1, qb_compare_descending_S08);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int8_t) * op1, qb_compare_descending_S08_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_S16(uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int16_t) * 1, qb_compare_descending_S16);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int16_t) * op1, qb_compare_descending_S16_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_S32(uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int32_t) * 1, qb_compare_descending_S32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int32_t) * op1, qb_compare_descending_S32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_S64(uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int64_t) * 1, qb_compare_descending_S64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int64_t) * op1, qb_compare_descending_S64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_U08(uint32_t op1, uint8_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint8_t) * 1, qb_compare_descending_U08);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint8_t) * op1, qb_compare_descending_U08_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_U16(uint32_t op1, uint16_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint16_t) * 1, qb_compare_descending_U16);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint16_t) * op1, qb_compare_descending_U16_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_U32(uint32_t op1, uint32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint32_t) * 1, qb_compare_descending_U32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint32_t) * op1, qb_compare_descending_U32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_reverse_sort_U64(uint32_t op1, uint64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint64_t) * 1, qb_compare_descending_U64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint64_t) * op1, qb_compare_descending_U64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_round_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) _php_math_round((*op1_ptr), (*op2_ptr), (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_round_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) _php_math_round((*op1_ptr), (*op2_ptr), (*op3_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_rsqrt_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = qb_fast_rsqrtf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_rsqrt_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = qb_fast_rsqrt((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_3x_F32(float32_t *op1_ptr, uint32_t op2, uint32_t op3, float32_t op4, float32_t op5, float32_t *res_ptr) {
	int32_t ix = qb_quick_floorf(op4 - 0.5f);
	int32_t iy = qb_quick_floorf(op5 - 0.5f);
	float32_t fx = (op4 - 0.5f) - floorf(op4 - 0.5f);
	float32_t fy = (op5 - 0.5f) - floorf(op5 - 0.5f);
	if(fx + fy == 0) {
		if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
			uint32_t index = ((iy * op2) + ix) * 3;
			res_ptr[0] = op1_ptr[index + 0];
			res_ptr[1] = op1_ptr[index + 1];
			res_ptr[2] = op1_ptr[index + 2];
		} else {
			res_ptr[0] = 0;
			res_ptr[1] = 0;
			res_ptr[2] = 0;
		}
	} else { 
		float32_t fx1 = 1.0f - fx;
		float32_t fy1 = 1.0f - fy;
		float32_t w00 = fx1 * fy1;
		float32_t w10 = fx * fy1;
		float32_t w01 = fx1 * fy;
		float32_t w11 = fx * fy;
		float32_t p00[4], p01[4], p10[4], p11[4];
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 0)) * 3;
			p00[0] = op1_ptr[index + 0];
			p00[1] = op1_ptr[index + 1];
			p00[2] = op1_ptr[index + 2];
		} else {
			p00[0] = 0;
			p00[1] = 0;
			p00[2] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 1)) * 3;
			p10[0] = op1_ptr[index + 0];
			p10[1] = op1_ptr[index + 1];
			p10[2] = op1_ptr[index + 2];
		} else {
			p10[0] = 0;
			p10[1] = 0;
			p10[2] = 0;
		}
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 0)) * 3;
			p01[0] = op1_ptr[index + 0];
			p01[1] = op1_ptr[index + 1];
			p01[2] = op1_ptr[index + 2];
		} else {
			p01[0] = 0;
			p01[1] = 0;
			p01[2] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 1)) * 3;
			p11[0] = op1_ptr[index + 0];
			p11[1] = op1_ptr[index + 1];
			p11[2] = op1_ptr[index + 2];
		} else {
			p11[0] = 0;
			p11[1] = 0;
			p11[2] = 0;
		}
		res_ptr[0] = p00[0] * w00 + p10[0] * w10 + p01[0] * w01 + p11[0] * w11;
		res_ptr[1] = p00[1] * w00 + p10[1] * w10 + p01[1] * w01 + p11[1] * w11;
		res_ptr[2] = p00[2] * w00 + p10[2] * w10 + p01[2] * w01 + p11[2] * w11;
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_3x_F64(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	int32_t ix = qb_quick_floor(op4 - 0.5);
	int32_t iy = qb_quick_floor(op5 - 0.5);
	float64_t fx = (op4 - 0.5) - floor(op4 - 0.5);
	float64_t fy = (op5 - 0.5) - floor(op5 - 0.5);
	if(fx + fy == 0) {
		if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
			uint32_t index = ((iy * op2) + ix) * 3;
			res_ptr[0] = op1_ptr[index + 0];
			res_ptr[1] = op1_ptr[index + 1];
			res_ptr[2] = op1_ptr[index + 2];
		} else {
			res_ptr[0] = 0;
			res_ptr[1] = 0;
			res_ptr[2] = 0;
		}
	} else { 
		float64_t fx1 = 1.0 - fx;
		float64_t fy1 = 1.0 - fy;
		float64_t w00 = fx1 * fy1;
		float64_t w10 = fx * fy1;
		float64_t w01 = fx1 * fy;
		float64_t w11 = fx * fy;
		float64_t p00[4], p01[4], p10[4], p11[4];
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 0)) * 3;
			p00[0] = op1_ptr[index + 0];
			p00[1] = op1_ptr[index + 1];
			p00[2] = op1_ptr[index + 2];
		} else {
			p00[0] = 0;
			p00[1] = 0;
			p00[2] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 1)) * 3;
			p10[0] = op1_ptr[index + 0];
			p10[1] = op1_ptr[index + 1];
			p10[2] = op1_ptr[index + 2];
		} else {
			p10[0] = 0;
			p10[1] = 0;
			p10[2] = 0;
		}
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 0)) * 3;
			p01[0] = op1_ptr[index + 0];
			p01[1] = op1_ptr[index + 1];
			p01[2] = op1_ptr[index + 2];
		} else {
			p01[0] = 0;
			p01[1] = 0;
			p01[2] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 1)) * 3;
			p11[0] = op1_ptr[index + 0];
			p11[1] = op1_ptr[index + 1];
			p11[2] = op1_ptr[index + 2];
		} else {
			p11[0] = 0;
			p11[1] = 0;
			p11[2] = 0;
		}
		res_ptr[0] = p00[0] * w00 + p10[0] * w10 + p01[0] * w01 + p11[0] * w11;
		res_ptr[1] = p00[1] * w00 + p10[1] * w10 + p01[1] * w01 + p11[1] * w11;
		res_ptr[2] = p00[2] * w00 + p10[2] * w10 + p01[2] * w01 + p11[2] * w11;
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float32_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float32_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_bilinear_3x_F32(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 3;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float64_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float64_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_bilinear_3x_F64(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 3;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_4x_F32(float32_t *op1_ptr, uint32_t op2, uint32_t op3, float32_t op4, float32_t op5, float32_t *res_ptr) {
	int32_t ix = qb_quick_floorf(op4 - 0.5f);
	int32_t iy = qb_quick_floorf(op5 - 0.5f);
	float32_t fx = (op4 - 0.5f) - floorf(op4 - 0.5f);
	float32_t fy = (op5 - 0.5f) - floorf(op5 - 0.5f);
	if(fx + fy == 0) {
		if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
			uint32_t index = ((iy * op2) + ix) * 4;
			res_ptr[0] = op1_ptr[index + 0];
			res_ptr[1] = op1_ptr[index + 1];
			res_ptr[2] = op1_ptr[index + 2];
			res_ptr[3] = op1_ptr[index + 3];
		} else {
			res_ptr[0] = 0;
			res_ptr[1] = 0;
			res_ptr[2] = 0;
			res_ptr[3] = 0;
		}
	} else { 
		float32_t fx1 = 1.0f - fx;
		float32_t fy1 = 1.0f - fy;
		float32_t w00 = fx1 * fy1;
		float32_t w10 = fx * fy1;
		float32_t w01 = fx1 * fy;
		float32_t w11 = fx * fy;
		float32_t p00[4], p01[4], p10[4], p11[4];
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 0)) * 4;
			p00[0] = op1_ptr[index + 0];
			p00[1] = op1_ptr[index + 1];
			p00[2] = op1_ptr[index + 2];
			p00[3] = op1_ptr[index + 3];
		} else {
			p00[0] = 0;
			p00[1] = 0;
			p00[2] = 0;
			p00[3] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 1)) * 4;
			p10[0] = op1_ptr[index + 0];
			p10[1] = op1_ptr[index + 1];
			p10[2] = op1_ptr[index + 2];
			p10[3] = op1_ptr[index + 3];
		} else {
			p10[0] = 0;
			p10[1] = 0;
			p10[2] = 0;
			p10[3] = 0;
		}
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 0)) * 4;
			p01[0] = op1_ptr[index + 0];
			p01[1] = op1_ptr[index + 1];
			p01[2] = op1_ptr[index + 2];
			p01[3] = op1_ptr[index + 3];
		} else {
			p01[0] = 0;
			p01[1] = 0;
			p01[2] = 0;
			p01[3] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 1)) * 4;
			p11[0] = op1_ptr[index + 0];
			p11[1] = op1_ptr[index + 1];
			p11[2] = op1_ptr[index + 2];
			p11[3] = op1_ptr[index + 3];
		} else {
			p11[0] = 0;
			p11[1] = 0;
			p11[2] = 0;
			p11[3] = 0;
		}
		res_ptr[0] = p00[0] * w00 + p10[0] * w10 + p01[0] * w01 + p11[0] * w11;
		res_ptr[1] = p00[1] * w00 + p10[1] * w10 + p01[1] * w01 + p11[1] * w11;
		res_ptr[2] = p00[2] * w00 + p10[2] * w10 + p01[2] * w01 + p11[2] * w11;
		res_ptr[3] = p00[3] * w00 + p10[3] * w10 + p01[3] * w01 + p11[3] * w11;
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_4x_F64(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	int32_t ix = qb_quick_floor(op4 - 0.5);
	int32_t iy = qb_quick_floor(op5 - 0.5);
	float64_t fx = (op4 - 0.5) - floor(op4 - 0.5);
	float64_t fy = (op5 - 0.5) - floor(op5 - 0.5);
	if(fx + fy == 0) {
		if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
			uint32_t index = ((iy * op2) + ix) * 4;
			res_ptr[0] = op1_ptr[index + 0];
			res_ptr[1] = op1_ptr[index + 1];
			res_ptr[2] = op1_ptr[index + 2];
			res_ptr[3] = op1_ptr[index + 3];
		} else {
			res_ptr[0] = 0;
			res_ptr[1] = 0;
			res_ptr[2] = 0;
			res_ptr[3] = 0;
		}
	} else { 
		float64_t fx1 = 1.0 - fx;
		float64_t fy1 = 1.0 - fy;
		float64_t w00 = fx1 * fy1;
		float64_t w10 = fx * fy1;
		float64_t w01 = fx1 * fy;
		float64_t w11 = fx * fy;
		float64_t p00[4], p01[4], p10[4], p11[4];
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 0)) * 4;
			p00[0] = op1_ptr[index + 0];
			p00[1] = op1_ptr[index + 1];
			p00[2] = op1_ptr[index + 2];
			p00[3] = op1_ptr[index + 3];
		} else {
			p00[0] = 0;
			p00[1] = 0;
			p00[2] = 0;
			p00[3] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 0) < op3)) {
			uint32_t index = (((iy + 0) * op2) + (ix + 1)) * 4;
			p10[0] = op1_ptr[index + 0];
			p10[1] = op1_ptr[index + 1];
			p10[2] = op1_ptr[index + 2];
			p10[3] = op1_ptr[index + 3];
		} else {
			p10[0] = 0;
			p10[1] = 0;
			p10[2] = 0;
			p10[3] = 0;
		}
		if((((uint32_t) ix + 0) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 0)) * 4;
			p01[0] = op1_ptr[index + 0];
			p01[1] = op1_ptr[index + 1];
			p01[2] = op1_ptr[index + 2];
			p01[3] = op1_ptr[index + 3];
		} else {
			p01[0] = 0;
			p01[1] = 0;
			p01[2] = 0;
			p01[3] = 0;
		}
		if((((uint32_t) ix + 1) < op2) && (((uint32_t) iy + 1) < op3)) {
			uint32_t index = (((iy + 1) * op2) + (ix + 1)) * 4;
			p11[0] = op1_ptr[index + 0];
			p11[1] = op1_ptr[index + 1];
			p11[2] = op1_ptr[index + 2];
			p11[3] = op1_ptr[index + 3];
		} else {
			p11[0] = 0;
			p11[1] = 0;
			p11[2] = 0;
			p11[3] = 0;
		}
		res_ptr[0] = p00[0] * w00 + p10[0] * w10 + p01[0] * w01 + p11[0] * w11;
		res_ptr[1] = p00[1] * w00 + p10[1] * w10 + p01[1] * w01 + p11[1] * w11;
		res_ptr[2] = p00[2] * w00 + p10[2] * w10 + p01[2] * w01 + p11[2] * w11;
		res_ptr[3] = p00[3] * w00 + p10[3] * w10 + p01[3] * w01 + p11[3] * w11;
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float32_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float32_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_bilinear_4x_F32(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 4;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_bilinear_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float64_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float64_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_bilinear_4x_F64(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 4;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_3x_F64(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	int32_t ix = qb_quick_floor(op4);
	int32_t iy = qb_quick_floor(op5);
	if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
		uint32_t index = ((iy * op2) + ix) * 3;
		res_ptr[0] = op1_ptr[index + 0];
		res_ptr[1] = op1_ptr[index + 1];
		res_ptr[2] = op1_ptr[index + 2];
	} else {
		res_ptr[0] = 0;
		res_ptr[1] = 0;
		res_ptr[2] = 0;
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float32_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float32_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_nearest_3x_F32(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 3;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float64_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float64_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_nearest_3x_F64(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 3;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_4x_F64(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	int32_t ix = qb_quick_floor(op4);
	int32_t iy = qb_quick_floor(op5);
	if(((uint32_t) ix < op2) && ((uint32_t) iy < op3)) {
		uint32_t index = ((iy * op2) + ix) * 4;
		res_ptr[0] = op1_ptr[index + 0];
		res_ptr[1] = op1_ptr[index + 1];
		res_ptr[2] = op1_ptr[index + 2];
		res_ptr[3] = op1_ptr[index + 3];
	} else {
		res_ptr[0] = 0;
		res_ptr[1] = 0;
		res_ptr[2] = 0;
		res_ptr[3] = 0;
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float32_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float32_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_nearest_4x_F32(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 4;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sample_nearest_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	if(op4_count && op5_count && res_count) {
		float64_t *op4_start = op4_ptr, *op4_end = op4_ptr + op4_count;
		float64_t *op5_start = op5_ptr, *op5_end = op5_ptr + op5_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sample_nearest_4x_F64(op1_ptr, op2, op3, (*op4_ptr), (*op5_ptr), res_ptr);
			
			res_ptr += 4;
			op4_ptr += 1;
			op5_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op4_ptr >= op4_end) {
				op4_ptr = op4_start;
			}
			if(op5_ptr >= op5_end) {
				op5_ptr = op5_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_left_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) << (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_S08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_S16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_S32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_S64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_U08(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_U16(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_U32(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shift_right_multiple_times_U64(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		uint64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		uint64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		uint64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) >> (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_shuffle_F32(qb_interpreter_context *cxt, uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	float32_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(float32_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(float32_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(float32_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(float32_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_shuffle_F64(qb_interpreter_context *cxt, uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	float64_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(float64_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(float64_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(float64_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(float64_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_shuffle_I08(qb_interpreter_context *cxt, uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	int8_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(int8_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(int8_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(int8_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(int8_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_shuffle_I16(qb_interpreter_context *cxt, uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	int16_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(int16_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(int16_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(int16_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(int16_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_shuffle_I32(qb_interpreter_context *cxt, uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	int32_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(int32_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(int32_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(int32_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(int32_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_shuffle_I64(qb_interpreter_context *cxt, uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	ALLOCA_FLAG(use_heap);
	uint32_t i, n_elems, n_left, rnd_idx;
	int64_t temp, *temps = NULL, *elems = res_ptr;
	if(op1 == 1) {
		n_elems = res_count;
		temps = NULL;
	} else {
		n_elems = res_count / op1;
		temps = do_alloca(sizeof(int64_t) * op1, use_heap);
	}
	n_left = n_elems;
	while(--n_left) {
		rnd_idx = php_rand(TSRMLS_C);
		RAND_RANGE(rnd_idx, 0, n_left, PHP_RAND_MAX);
		if(rnd_idx != n_left) {
			if(op1 == 1) {
				temp = elems[n_left];
				elems[n_left] = elems[rnd_idx];
				elems[rnd_idx] = temp;
			} else {
				memcpy(temps, &elems[n_left * op1], sizeof(int64_t) * op1);
				memcpy(&elems[n_left * op1], &elems[rnd_idx * op1], sizeof(int64_t) * op1);
				memcpy(&elems[rnd_idx * op1], temps, sizeof(int64_t) * op1);
			}
		}
	}
	if(temps) {
		free_alloca(temps, use_heap);
	}
}

void ZEND_FASTCALL qb_do_sign_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sign_F32((*op1_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sign_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_sign_F64((*op1_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sin_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float32_t) sinf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sin_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (float64_t) sin((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sinh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = sinhf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sinh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = sinh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_smooth_step_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_smooth_step_F32((*op1_ptr), (*op2_ptr), (*op3_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_smooth_step_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && op3_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *op3_start = op3_ptr, *op3_end = op3_ptr + op3_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_smooth_step_F64((*op1_ptr), (*op2_ptr), (*op3_ptr), res_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			op3_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
			if(op3_ptr >= op3_end) {
				op3_ptr = op3_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sort_F32(uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(float32_t) * 1, qb_compare_ascending_F32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(float32_t) * op1, qb_compare_ascending_F32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_F64(uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(float64_t) * 1, qb_compare_ascending_F64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(float64_t) * op1, qb_compare_ascending_F64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_S08(uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int8_t) * 1, qb_compare_ascending_S08);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int8_t) * op1, qb_compare_ascending_S08_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_S16(uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int16_t) * 1, qb_compare_ascending_S16);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int16_t) * op1, qb_compare_ascending_S16_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_S32(uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int32_t) * 1, qb_compare_ascending_S32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int32_t) * op1, qb_compare_ascending_S32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_S64(uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(int64_t) * 1, qb_compare_ascending_S64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(int64_t) * op1, qb_compare_ascending_S64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_U08(uint32_t op1, uint8_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint8_t) * 1, qb_compare_ascending_U08);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint8_t) * op1, qb_compare_ascending_U08_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_U16(uint32_t op1, uint16_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint16_t) * 1, qb_compare_ascending_U16);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint16_t) * op1, qb_compare_ascending_U16_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_U32(uint32_t op1, uint32_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint32_t) * 1, qb_compare_ascending_U32);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint32_t) * op1, qb_compare_ascending_U32_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sort_U64(uint32_t op1, uint64_t *res_ptr, uint32_t res_count) {
	if(op1 == 1) {
		qsort(res_ptr, res_count, sizeof(uint64_t) * 1, qb_compare_ascending_U64);
	} else {
		qsort_s(res_ptr, res_count / op1, sizeof(uint64_t) * op1, qb_compare_ascending_U64_array, &op1);
	}
}

void ZEND_FASTCALL qb_do_sqrt_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = sqrtf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_sqrt_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = sqrt((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_step_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (((*op2_ptr) < (*op1_ptr)) ? 0.0f : 1.0f);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_step_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (((*op2_ptr) < (*op1_ptr)) ? 0.0 : 1.0);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subarray_position_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		for(i = op3; i < op1_count - op2_count; i++) {
			if(op1_ptr[i] == op2_ptr[0]) {
				for(j = 1; j < op2_count; j++) {
					if(op1_ptr[i + j] != op2_ptr[j]) {
						break;
					}
				}
				if(j == op2_count) {
					index = i;
					break;
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subarray_position_from_end_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	int32_t index = -1;
	if(op2_count > 0) {
		uint32_t i, j;
		if(op3 < 0) {
			for(i = op1_count + op3; (int32_t) i >= 0; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		} else {
			for(i = op1_count - 1; (int32_t) i >= op3; i--) {
				if(op1_ptr[i] == op2_ptr[0]) {
					for(j = 1; j < op2_count; j++) {
						if(op1_ptr[i + j] != op2_ptr[j]) {
							break;
						}
					}
					if(j == op2_count) {
						index = i;
						break;
					}
				}
			}
		}
	}
	(*res_ptr) = index;
}

void ZEND_FASTCALL qb_do_subtract_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			
			res_ptr += 2;
			op1_ptr += 2;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			res_ptr[2] = op1_ptr[2] - op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			res_ptr[2] = op1_ptr[2] - op2_ptr[2];
			
			res_ptr += 3;
			op1_ptr += 3;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			res_ptr[2] = op1_ptr[2] - op2_ptr[2];
			res_ptr[3] = op1_ptr[3] - op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			res_ptr[0] = op1_ptr[0] - op2_ptr[0];
			res_ptr[1] = op1_ptr[1] - op2_ptr[1];
			res_ptr[2] = op1_ptr[2] - op2_ptr[2];
			res_ptr[3] = op1_ptr[3] - op2_ptr[3];
			
			res_ptr += 4;
			op1_ptr += 4;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_I08(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int8_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int8_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int8_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_I16(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int16_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int16_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int16_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_I32(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_subtract_multiple_times_I64(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		int64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		int64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		int64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = (*op1_ptr) - (*op2_ptr);
			
			res_ptr += 1;
			op1_ptr += 1;
			op2_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_tan_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = tanf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_tan_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = tan((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_tanh_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = tanhf((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_tanh_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			(*res_ptr) = tanh((*op1_ptr));
			
			res_ptr += 1;
			op1_ptr += 1;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 2 + 0] * op2_ptr[0]) + (op1_ptr[1 * 2 + 0] * op2_ptr[1]) + op1_ptr[2 * 2 + 0];
	float64_t dot_product1 = (op1_ptr[0 * 2 + 1] * op2_ptr[0]) + (op1_ptr[1 * 2 + 1] * op2_ptr[1]) + op1_ptr[2 * 2 + 1];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
}

void ZEND_FASTCALL qb_do_transform_vector_cm_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 6;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 6;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 3 + 0] * op2_ptr[0]) + (op1_ptr[1 * 3 + 0] * op2_ptr[1]) + (op1_ptr[2 * 3 + 0] * op2_ptr[2]) + op1_ptr[3 * 3 + 0];
	float64_t dot_product1 = (op1_ptr[0 * 3 + 1] * op2_ptr[0]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1]) + (op1_ptr[2 * 3 + 1] * op2_ptr[2]) + op1_ptr[3 * 3 + 1];
	float64_t dot_product2 = (op1_ptr[0 * 3 + 2] * op2_ptr[0]) + (op1_ptr[1 * 3 + 2] * op2_ptr[1]) + (op1_ptr[2 * 3 + 2] * op2_ptr[2]) + op1_ptr[3 * 3 + 2];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
}

void ZEND_FASTCALL qb_do_transform_vector_cm_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 12;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 12;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0]) + (op1_ptr[1 * 4 + 0] * op2_ptr[1]) + (op1_ptr[2 * 4 + 0] * op2_ptr[2]) + (op1_ptr[3 * 4 + 0] * op2_ptr[3]) + op1_ptr[4 * 4 + 0];
	float64_t dot_product1 = (op1_ptr[0 * 4 + 1] * op2_ptr[0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1]) + (op1_ptr[2 * 4 + 1] * op2_ptr[2]) + (op1_ptr[3 * 4 + 1] * op2_ptr[3]) + op1_ptr[4 * 4 + 1];
	float64_t dot_product2 = (op1_ptr[0 * 4 + 2] * op2_ptr[0]) + (op1_ptr[1 * 4 + 2] * op2_ptr[1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2]) + (op1_ptr[3 * 4 + 2] * op2_ptr[3]) + op1_ptr[4 * 4 + 2];
	float64_t dot_product3 = (op1_ptr[0 * 4 + 3] * op2_ptr[0]) + (op1_ptr[1 * 4 + 3] * op2_ptr[1]) + (op1_ptr[2 * 4 + 3] * op2_ptr[2]) + (op1_ptr[3 * 4 + 3] * op2_ptr[3]) + op1_ptr[4 * 4 + 3];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
	res_ptr[3] = dot_product3;
}

void ZEND_FASTCALL qb_do_transform_vector_cm_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 20;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_cm_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 20;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_2x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 3 + 0] * op2_ptr[0]) + (op1_ptr[0 * 3 + 1] * op2_ptr[1]) + op1_ptr[0 * 3 + 2];
	float64_t dot_product1 = (op1_ptr[1 * 3 + 0] * op2_ptr[0]) + (op1_ptr[1 * 3 + 1] * op2_ptr[1]) + op1_ptr[1 * 3 + 2];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
}

void ZEND_FASTCALL qb_do_transform_vector_rm_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_2x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 6;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_2x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 2;
			op1_ptr += 6;
			op2_ptr += 2;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_3x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 4 + 0] * op2_ptr[0]) + (op1_ptr[0 * 4 + 1] * op2_ptr[1]) + (op1_ptr[0 * 4 + 2] * op2_ptr[2]) + op1_ptr[0 * 4 + 3];
	float64_t dot_product1 = (op1_ptr[1 * 4 + 0] * op2_ptr[0]) + (op1_ptr[1 * 4 + 1] * op2_ptr[1]) + (op1_ptr[1 * 4 + 2] * op2_ptr[2]) + op1_ptr[1 * 4 + 3];
	float64_t dot_product2 = (op1_ptr[2 * 4 + 0] * op2_ptr[0]) + (op1_ptr[2 * 4 + 1] * op2_ptr[1]) + (op1_ptr[2 * 4 + 2] * op2_ptr[2]) + op1_ptr[2 * 4 + 3];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
}

void ZEND_FASTCALL qb_do_transform_vector_rm_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_3x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 12;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_3x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 3;
			op1_ptr += 12;
			op2_ptr += 3;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_4x_F64(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	float64_t dot_product0 = (op1_ptr[0 * 5 + 0] * op2_ptr[0]) + (op1_ptr[0 * 5 + 1] * op2_ptr[1]) + (op1_ptr[0 * 5 + 2] * op2_ptr[2]) + (op1_ptr[0 * 5 + 3] * op2_ptr[3]) + op1_ptr[0 * 5 + 4];
	float64_t dot_product1 = (op1_ptr[1 * 5 + 0] * op2_ptr[0]) + (op1_ptr[1 * 5 + 1] * op2_ptr[1]) + (op1_ptr[1 * 5 + 2] * op2_ptr[2]) + (op1_ptr[1 * 5 + 3] * op2_ptr[3]) + op1_ptr[1 * 5 + 4];
	float64_t dot_product2 = (op1_ptr[2 * 5 + 0] * op2_ptr[0]) + (op1_ptr[2 * 5 + 1] * op2_ptr[1]) + (op1_ptr[2 * 5 + 2] * op2_ptr[2]) + (op1_ptr[2 * 5 + 3] * op2_ptr[3]) + op1_ptr[2 * 5 + 4];
	float64_t dot_product3 = (op1_ptr[3 * 5 + 0] * op2_ptr[0]) + (op1_ptr[3 * 5 + 1] * op2_ptr[1]) + (op1_ptr[3 * 5 + 2] * op2_ptr[2]) + (op1_ptr[3 * 5 + 3] * op2_ptr[3]) + op1_ptr[3 * 5 + 4];
	res_ptr[0] = dot_product0;
	res_ptr[1] = dot_product1;
	res_ptr[2] = dot_product2;
	res_ptr[3] = dot_product3;
}

void ZEND_FASTCALL qb_do_transform_vector_rm_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_4x_F32(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 20;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transform_vector_rm_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && op2_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *op2_start = op2_ptr, *op2_end = op2_ptr + op2_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transform_vector_rm_4x_F64(op1_ptr, op2_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 20;
			op2_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
			if(op2_ptr >= op2_end) {
				op2_ptr = op2_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_2x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t m00 = op1_ptr[0 * 2 + 0];
	float64_t m10 = op1_ptr[0 * 2 + 1];
	float64_t m01 = op1_ptr[1 * 2 + 0];
	float64_t m11 = op1_ptr[1 * 2 + 1];
	res_ptr[0 * 2 + 0] = m00;
	res_ptr[0 * 2 + 1] = m01;
	res_ptr[1 * 2 + 0] = m10;
	res_ptr[1 * 2 + 1] = m11;
}

void ZEND_FASTCALL qb_do_transpose_matrix_2x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_2x_F32(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_2x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_2x_F64(op1_ptr, res_ptr);
			
			res_ptr += 4;
			op1_ptr += 4;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_3x_F32(float32_t *op1_ptr, float32_t *res_ptr) {
	float32_t m00 = op1_ptr[0 * 3 + 0];
	float32_t m10 = op1_ptr[0 * 3 + 1];
	float32_t m20 = op1_ptr[0 * 3 + 2];
	float32_t m01 = op1_ptr[1 * 3 + 0];
	float32_t m11 = op1_ptr[1 * 3 + 1];
	float32_t m21 = op1_ptr[1 * 3 + 2];
	float32_t m02 = op1_ptr[2 * 3 + 0];
	float32_t m12 = op1_ptr[2 * 3 + 1];
	float32_t m22 = op1_ptr[2 * 3 + 2];
	res_ptr[0 * 3 + 0] = m00;
	res_ptr[0 * 3 + 1] = m01;
	res_ptr[0 * 3 + 2] = m02;
	res_ptr[1 * 3 + 0] = m10;
	res_ptr[1 * 3 + 1] = m11;
	res_ptr[1 * 3 + 2] = m12;
	res_ptr[2 * 3 + 0] = m20;
	res_ptr[2 * 3 + 1] = m21;
	res_ptr[2 * 3 + 2] = m22;
}

void ZEND_FASTCALL qb_do_transpose_matrix_3x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t m00 = op1_ptr[0 * 3 + 0];
	float64_t m10 = op1_ptr[0 * 3 + 1];
	float64_t m20 = op1_ptr[0 * 3 + 2];
	float64_t m01 = op1_ptr[1 * 3 + 0];
	float64_t m11 = op1_ptr[1 * 3 + 1];
	float64_t m21 = op1_ptr[1 * 3 + 2];
	float64_t m02 = op1_ptr[2 * 3 + 0];
	float64_t m12 = op1_ptr[2 * 3 + 1];
	float64_t m22 = op1_ptr[2 * 3 + 2];
	res_ptr[0 * 3 + 0] = m00;
	res_ptr[0 * 3 + 1] = m01;
	res_ptr[0 * 3 + 2] = m02;
	res_ptr[1 * 3 + 0] = m10;
	res_ptr[1 * 3 + 1] = m11;
	res_ptr[1 * 3 + 2] = m12;
	res_ptr[2 * 3 + 0] = m20;
	res_ptr[2 * 3 + 1] = m21;
	res_ptr[2 * 3 + 2] = m22;
}

void ZEND_FASTCALL qb_do_transpose_matrix_3x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_3x_F32(op1_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_3x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_3x_F64(op1_ptr, res_ptr);
			
			res_ptr += 9;
			op1_ptr += 9;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_4x_F32(float32_t *op1_ptr, float32_t *res_ptr) {
	float32_t m00 = op1_ptr[0 * 4 + 0];
	float32_t m10 = op1_ptr[0 * 4 + 1];
	float32_t m20 = op1_ptr[0 * 4 + 2];
	float32_t m30 = op1_ptr[0 * 4 + 3];
	float32_t m01 = op1_ptr[1 * 4 + 0];
	float32_t m11 = op1_ptr[1 * 4 + 1];
	float32_t m21 = op1_ptr[1 * 4 + 2];
	float32_t m31 = op1_ptr[1 * 4 + 3];
	float32_t m02 = op1_ptr[2 * 4 + 0];
	float32_t m12 = op1_ptr[2 * 4 + 1];
	float32_t m22 = op1_ptr[2 * 4 + 2];
	float32_t m32 = op1_ptr[2 * 4 + 3];
	float32_t m03 = op1_ptr[3 * 4 + 0];
	float32_t m13 = op1_ptr[3 * 4 + 1];
	float32_t m23 = op1_ptr[3 * 4 + 2];
	float32_t m33 = op1_ptr[3 * 4 + 3];
	res_ptr[0 * 4 + 0] = m00;
	res_ptr[0 * 4 + 1] = m01;
	res_ptr[0 * 4 + 2] = m02;
	res_ptr[0 * 4 + 3] = m03;
	res_ptr[1 * 4 + 0] = m10;
	res_ptr[1 * 4 + 1] = m11;
	res_ptr[1 * 4 + 2] = m12;
	res_ptr[1 * 4 + 3] = m13;
	res_ptr[2 * 4 + 0] = m20;
	res_ptr[2 * 4 + 1] = m21;
	res_ptr[2 * 4 + 2] = m22;
	res_ptr[2 * 4 + 3] = m23;
	res_ptr[3 * 4 + 0] = m30;
	res_ptr[3 * 4 + 1] = m31;
	res_ptr[3 * 4 + 2] = m32;
	res_ptr[3 * 4 + 3] = m33;
}

void ZEND_FASTCALL qb_do_transpose_matrix_4x_F64(float64_t *op1_ptr, float64_t *res_ptr) {
	float64_t m00 = op1_ptr[0 * 4 + 0];
	float64_t m10 = op1_ptr[0 * 4 + 1];
	float64_t m20 = op1_ptr[0 * 4 + 2];
	float64_t m30 = op1_ptr[0 * 4 + 3];
	float64_t m01 = op1_ptr[1 * 4 + 0];
	float64_t m11 = op1_ptr[1 * 4 + 1];
	float64_t m21 = op1_ptr[1 * 4 + 2];
	float64_t m31 = op1_ptr[1 * 4 + 3];
	float64_t m02 = op1_ptr[2 * 4 + 0];
	float64_t m12 = op1_ptr[2 * 4 + 1];
	float64_t m22 = op1_ptr[2 * 4 + 2];
	float64_t m32 = op1_ptr[2 * 4 + 3];
	float64_t m03 = op1_ptr[3 * 4 + 0];
	float64_t m13 = op1_ptr[3 * 4 + 1];
	float64_t m23 = op1_ptr[3 * 4 + 2];
	float64_t m33 = op1_ptr[3 * 4 + 3];
	res_ptr[0 * 4 + 0] = m00;
	res_ptr[0 * 4 + 1] = m01;
	res_ptr[0 * 4 + 2] = m02;
	res_ptr[0 * 4 + 3] = m03;
	res_ptr[1 * 4 + 0] = m10;
	res_ptr[1 * 4 + 1] = m11;
	res_ptr[1 * 4 + 2] = m12;
	res_ptr[1 * 4 + 3] = m13;
	res_ptr[2 * 4 + 0] = m20;
	res_ptr[2 * 4 + 1] = m21;
	res_ptr[2 * 4 + 2] = m22;
	res_ptr[2 * 4 + 3] = m23;
	res_ptr[3 * 4 + 0] = m30;
	res_ptr[3 * 4 + 1] = m31;
	res_ptr[3 * 4 + 2] = m32;
	res_ptr[3 * 4 + 3] = m33;
}

void ZEND_FASTCALL qb_do_transpose_matrix_4x_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_4x_F32(op1_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_4x_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_4x_F64(op1_ptr, res_ptr);
			
			res_ptr += 16;
			op1_ptr += 16;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_F32(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float32_t *__restrict buffer = do_alloca(MATRIX1_ROWS * MATRIX1_COLS * sizeof(float32_t), use_heap);
	uint32_t i, j, k, p;
	for(i = 0, p = 0; i < MATRIX1_ROWS; i++) {
		for(j = 0, k = i; j < MATRIX1_COLS; j++, p++, k += MATRIX1_ROWS) {
			buffer[k] = op1_ptr[p];
		}
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * MATRIX1_COLS * sizeof(float32_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_transpose_matrix_F64(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	ALLOCA_FLAG(use_heap)
	float64_t *__restrict buffer = do_alloca(MATRIX1_ROWS * MATRIX1_COLS * sizeof(float64_t), use_heap);
	uint32_t i, j, k, p;
	for(i = 0, p = 0; i < MATRIX1_ROWS; i++) {
		for(j = 0, k = i; j < MATRIX1_COLS; j++, p++, k += MATRIX1_ROWS) {
			buffer[k] = op1_ptr[p];
		}
	}
	memcpy(res_ptr, buffer, MATRIX1_ROWS * MATRIX1_COLS * sizeof(float64_t));
	free_alloca(buffer, use_heap);
}

void ZEND_FASTCALL qb_do_transpose_matrix_multiple_times_F32(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float32_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float32_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			op1_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_transpose_matrix_multiple_times_F64(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	if(op1_count && res_count) {
		float64_t *op1_start = op1_ptr, *op1_end = op1_ptr + op1_count;
		float64_t *res_end = res_ptr + res_count;
		for(;;) {
			qb_do_transpose_matrix_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
			
			res_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			op1_ptr += MATRIX1_ROWS * MATRIX1_COLS;
			if(res_ptr >= res_end) {
				break;
			}
			if(op1_ptr >= op1_end) {
				op1_ptr = op1_start;
			}
		}
	}
}

void ZEND_FASTCALL qb_do_utf8decode_U16(uint8_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	uint32_t codepoint, state = 0, i, j;
	for(i = 0, j = 0; i < op1_count; i++) {
		if(!decode(&state, &codepoint, op1_ptr[i])) {
			res_ptr[j++] = codepoint;
		}
	}
}

void ZEND_FASTCALL qb_do_utf8decode_U32(uint8_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	uint32_t codepoint, state = 0, i, j;
	for(i = 0, j = 0; i < op1_count; i++) {
		if(!decode(&state, &codepoint, op1_ptr[i])) {
			res_ptr[j++] = codepoint;
		}
	}
}

void ZEND_FASTCALL qb_do_utf8encode_U16(uint16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	uint32_t length = 0, i;
	for(i = 0; i < op1_count; i++) {
		length += encode(op1_ptr[i], res_ptr + length);
	}
}

void ZEND_FASTCALL qb_do_utf8encode_U32(uint32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	uint32_t length = 0, i;
	for(i = 0; i < op1_count; i++) {
		length += encode(op1_ptr[i], res_ptr + length);
	}
}

#ifdef FASTCALL_MATCHES_CDECL
#define qb_run_zend_extension_op_symbol	qb_run_zend_extension_op
#else
void qb_run_zend_extension_op_symbol(qb_interpreter_context *cxt, uint32_t zend_opcode, uint32_t line_number) {
	qb_run_zend_extension_op(cxt, zend_opcode, line_number);
}
#endif

void zend_bailout_symbol(void) {
	zend_bailout();
}

int zend_isnan_symbol(double n) {
	return zend_isnan(n);
}

int zend_isinf_symbol(double n) {
	return zend_isinf(n);
}

int zend_finite_symbol(double n) {
	return zend_finite(n);
}

#ifdef FASTCALL_MATCHES_CDECL
#define qb_shrink_segment_symbol	qb_shrink_segment
#else
void qb_shrink_segment_symbol(qb_interpreter_context *__restrict cxt, qb_memory_segment *segment, uint32_t start_index, uint32_t count) {
	qb_shrink_segment(cxt, segment, start_index, count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_resync_argument_symbol	qb_resync_argument
#else
void qb_resync_argument_symbol(qb_interpreter_context *cxt, uint32_t argument_index) {
	qb_resync_argument(cxt, argument_index);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_initialize_function_call_symbol	qb_initialize_function_call
#else
void qb_initialize_function_call_symbol(qb_interpreter_context *cxt, zend_function *zfunc, uint32_t argument_count, uint32_t line_number) {
	qb_initialize_function_call(cxt, zfunc, argument_count, line_number);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_finalize_function_call_symbol	qb_finalize_function_call
#else
void qb_finalize_function_call_symbol(qb_interpreter_context *cxt) {
	qb_finalize_function_call(cxt);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_execute_function_call_symbol	qb_execute_function_call
#else
void qb_execute_function_call_symbol(qb_interpreter_context *cxt) {
	qb_execute_function_call(cxt);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_enlarge_segment_symbol	qb_enlarge_segment
#else
void qb_enlarge_segment_symbol(qb_interpreter_context *cxt, qb_memory_segment *segment, uint32_t desired_size) {
	qb_enlarge_segment(cxt, segment, desired_size);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_copy_argument_symbol	qb_copy_argument
#else
void qb_copy_argument_symbol(qb_interpreter_context *cxt, uint32_t argument_index) {
	qb_copy_argument(cxt, argument_index);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_F32_symbol	qb_compare_array_F32
#else
int32_t qb_compare_array_F32_symbol(float32_t * __restrict op1_ptr, uint32_t op1_count, float32_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_F32(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_F64_symbol	qb_compare_array_F64
#else
int32_t qb_compare_array_F64_symbol(float64_t * __restrict op1_ptr, uint32_t op1_count, float64_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_F64(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_S08_symbol	qb_compare_array_S08
#else
int32_t qb_compare_array_S08_symbol(int8_t * __restrict op1_ptr, uint32_t op1_count, int8_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_S08(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_S16_symbol	qb_compare_array_S16
#else
int32_t qb_compare_array_S16_symbol(int16_t * __restrict op1_ptr, uint32_t op1_count, int16_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_S16(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_S32_symbol	qb_compare_array_S32
#else
int32_t qb_compare_array_S32_symbol(int32_t * __restrict op1_ptr, uint32_t op1_count, int32_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_S32(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_S64_symbol	qb_compare_array_S64
#else
int32_t qb_compare_array_S64_symbol(int64_t * __restrict op1_ptr, uint32_t op1_count, int64_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_S64(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_U08_symbol	qb_compare_array_U08
#else
int32_t qb_compare_array_U08_symbol(uint8_t * __restrict op1_ptr, uint32_t op1_count, uint8_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_U08(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_U16_symbol	qb_compare_array_U16
#else
int32_t qb_compare_array_U16_symbol(uint16_t * __restrict op1_ptr, uint32_t op1_count, uint16_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_U16(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_U32_symbol	qb_compare_array_U32
#else
int32_t qb_compare_array_U32_symbol(uint32_t * __restrict op1_ptr, uint32_t op1_count, uint32_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_U32(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_compare_array_U64_symbol	qb_compare_array_U64
#else
int32_t qb_compare_array_U64_symbol(uint64_t * __restrict op1_ptr, uint32_t op1_count, uint64_t * __restrict op2_ptr, uint32_t op2_count) {
	return qb_compare_array_U64(op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_decode_fcall_mix_operand_symbol	qb_decode_fcall_mix_operand
#else
uint32_t qb_decode_fcall_mix_operand_symbol(qb_interpreter_context *__restrict cxt, int8_t *__restrict *segments, uint32_t *__restrict operands) {
	return qb_decode_fcall_mix_operand(cxt, segments, operands);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_decode_fcall_variable_operand_symbol	qb_decode_fcall_variable_operand
#else
uint32_t qb_decode_fcall_variable_operand_symbol(qb_interpreter_context *__restrict cxt, int8_t *__restrict *segments, uint32_t *__restrict operands) {
	return qb_decode_fcall_variable_operand(cxt, segments, operands);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_F32_symbol	qb_get_array_sprintf_length_F32
#else
uint32_t qb_get_array_sprintf_length_F32_symbol(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_F32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_F64_symbol	qb_get_array_sprintf_length_F64
#else
uint32_t qb_get_array_sprintf_length_F64_symbol(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_F64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_S08_symbol	qb_get_array_sprintf_length_S08
#else
uint32_t qb_get_array_sprintf_length_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_S08(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_S16_symbol	qb_get_array_sprintf_length_S16
#else
uint32_t qb_get_array_sprintf_length_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_S16(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_S32_symbol	qb_get_array_sprintf_length_S32
#else
uint32_t qb_get_array_sprintf_length_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_S32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_S64_symbol	qb_get_array_sprintf_length_S64
#else
uint32_t qb_get_array_sprintf_length_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_S64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_U08_symbol	qb_get_array_sprintf_length_U08
#else
uint32_t qb_get_array_sprintf_length_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_U08(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_U16_symbol	qb_get_array_sprintf_length_U16
#else
uint32_t qb_get_array_sprintf_length_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_U16(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_U32_symbol	qb_get_array_sprintf_length_U32
#else
uint32_t qb_get_array_sprintf_length_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_U32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_array_sprintf_length_U64_symbol	qb_get_array_sprintf_length_U64
#else
uint32_t qb_get_array_sprintf_length_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count) {
	return qb_get_array_sprintf_length_U64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_F32_symbol	qb_get_scalar_sprintf_length_F32
#else
uint32_t qb_get_scalar_sprintf_length_F32_symbol(qb_interpreter_context *cxt, float32_t op1) {
	return qb_get_scalar_sprintf_length_F32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_F64_symbol	qb_get_scalar_sprintf_length_F64
#else
uint32_t qb_get_scalar_sprintf_length_F64_symbol(qb_interpreter_context *cxt, float64_t op1) {
	return qb_get_scalar_sprintf_length_F64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_S08_symbol	qb_get_scalar_sprintf_length_S08
#else
uint32_t qb_get_scalar_sprintf_length_S08_symbol(qb_interpreter_context *cxt, int8_t op1) {
	return qb_get_scalar_sprintf_length_S08(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_S16_symbol	qb_get_scalar_sprintf_length_S16
#else
uint32_t qb_get_scalar_sprintf_length_S16_symbol(qb_interpreter_context *cxt, int16_t op1) {
	return qb_get_scalar_sprintf_length_S16(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_S32_symbol	qb_get_scalar_sprintf_length_S32
#else
uint32_t qb_get_scalar_sprintf_length_S32_symbol(qb_interpreter_context *cxt, int32_t op1) {
	return qb_get_scalar_sprintf_length_S32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_S64_symbol	qb_get_scalar_sprintf_length_S64
#else
uint32_t qb_get_scalar_sprintf_length_S64_symbol(qb_interpreter_context *cxt, int64_t op1) {
	return qb_get_scalar_sprintf_length_S64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_U08_symbol	qb_get_scalar_sprintf_length_U08
#else
uint32_t qb_get_scalar_sprintf_length_U08_symbol(qb_interpreter_context *cxt, uint8_t op1) {
	return qb_get_scalar_sprintf_length_U08(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_U16_symbol	qb_get_scalar_sprintf_length_U16
#else
uint32_t qb_get_scalar_sprintf_length_U16_symbol(qb_interpreter_context *cxt, uint16_t op1) {
	return qb_get_scalar_sprintf_length_U16(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_U32_symbol	qb_get_scalar_sprintf_length_U32
#else
uint32_t qb_get_scalar_sprintf_length_U32_symbol(qb_interpreter_context *cxt, uint32_t op1) {
	return qb_get_scalar_sprintf_length_U32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_scalar_sprintf_length_U64_symbol	qb_get_scalar_sprintf_length_U64
#else
uint32_t qb_get_scalar_sprintf_length_U64_symbol(qb_interpreter_context *cxt, uint64_t op1) {
	return qb_get_scalar_sprintf_length_U64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_utf8_codepoint_count_symbol	qb_get_utf8_codepoint_count
#else
uint32_t qb_get_utf8_codepoint_count_symbol(uint8_t *op1_ptr, uint32_t op1_count) {
	return qb_get_utf8_codepoint_count(op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_utf8_encoded_length_U16_symbol	qb_get_utf8_encoded_length_U16
#else
uint32_t qb_get_utf8_encoded_length_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count) {
	return qb_get_utf8_encoded_length_U16(op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_get_utf8_encoded_length_U32_symbol	qb_get_utf8_encoded_length_U32
#else
uint32_t qb_get_utf8_encoded_length_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count) {
	return qb_get_utf8_encoded_length_U32(op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_F32_symbol	qb_do_abs_multiple_times_F32
#else
void qb_do_abs_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_F64_symbol	qb_do_abs_multiple_times_F64
#else
void qb_do_abs_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_S08_symbol	qb_do_abs_multiple_times_S08
#else
void qb_do_abs_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_S08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_S16_symbol	qb_do_abs_multiple_times_S16
#else
void qb_do_abs_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_S16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_S32_symbol	qb_do_abs_multiple_times_S32
#else
void qb_do_abs_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_S32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_abs_multiple_times_S64_symbol	qb_do_abs_multiple_times_S64
#else
void qb_do_abs_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_abs_multiple_times_S64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_acos_multiple_times_F32_symbol	qb_do_acos_multiple_times_F32
#else
void qb_do_acos_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_acos_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_acos_multiple_times_F64_symbol	qb_do_acos_multiple_times_F64
#else
void qb_do_acos_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_acos_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_acosh_multiple_times_F32_symbol	qb_do_acosh_multiple_times_F32
#else
void qb_do_acosh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_acosh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_acosh_multiple_times_F64_symbol	qb_do_acosh_multiple_times_F64
#else
void qb_do_acosh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_acosh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_2x_multiple_times_F32_symbol	qb_do_add_2x_multiple_times_F32
#else
void qb_do_add_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_add_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_2x_multiple_times_F64_symbol	qb_do_add_2x_multiple_times_F64
#else
void qb_do_add_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_add_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_3x_multiple_times_F32_symbol	qb_do_add_3x_multiple_times_F32
#else
void qb_do_add_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_add_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_3x_multiple_times_F64_symbol	qb_do_add_3x_multiple_times_F64
#else
void qb_do_add_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_add_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_4x_multiple_times_F32_symbol	qb_do_add_4x_multiple_times_F32
#else
void qb_do_add_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_add_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_4x_multiple_times_F64_symbol	qb_do_add_4x_multiple_times_F64
#else
void qb_do_add_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_add_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_F32_symbol	qb_do_add_multiple_times_F32
#else
void qb_do_add_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_F64_symbol	qb_do_add_multiple_times_F64
#else
void qb_do_add_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_I08_symbol	qb_do_add_multiple_times_I08
#else
void qb_do_add_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_I16_symbol	qb_do_add_multiple_times_I16
#else
void qb_do_add_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_I32_symbol	qb_do_add_multiple_times_I32
#else
void qb_do_add_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_add_multiple_times_I64_symbol	qb_do_add_multiple_times_I64
#else
void qb_do_add_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_add_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_all_I32_symbol	qb_do_all_I32
#else
void qb_do_all_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_all_I32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_alpha_blend_multiple_times_F32_symbol	qb_do_alpha_blend_multiple_times_F32
#else
void qb_do_alpha_blend_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_alpha_blend_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_alpha_blend_multiple_times_F64_symbol	qb_do_alpha_blend_multiple_times_F64
#else
void qb_do_alpha_blend_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_alpha_blend_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_any_I32_symbol	qb_do_any_I32
#else
void qb_do_any_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_any_I32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_apply_premultiplication_multiple_times_F32_symbol	qb_do_apply_premultiplication_multiple_times_F32
#else
void qb_do_apply_premultiplication_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_apply_premultiplication_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_apply_premultiplication_multiple_times_F64_symbol	qb_do_apply_premultiplication_multiple_times_F64
#else
void qb_do_apply_premultiplication_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_apply_premultiplication_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_F32_symbol	qb_do_array_max_F32
#else
void qb_do_array_max_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	qb_do_array_max_F32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_F64_symbol	qb_do_array_max_F64
#else
void qb_do_array_max_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	qb_do_array_max_F64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_S08_symbol	qb_do_array_max_S08
#else
void qb_do_array_max_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	qb_do_array_max_S08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_S16_symbol	qb_do_array_max_S16
#else
void qb_do_array_max_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	qb_do_array_max_S16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_S32_symbol	qb_do_array_max_S32
#else
void qb_do_array_max_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_array_max_S32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_S64_symbol	qb_do_array_max_S64
#else
void qb_do_array_max_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	qb_do_array_max_S64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_U08_symbol	qb_do_array_max_U08
#else
void qb_do_array_max_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	qb_do_array_max_U08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_U16_symbol	qb_do_array_max_U16
#else
void qb_do_array_max_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	qb_do_array_max_U16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_U32_symbol	qb_do_array_max_U32
#else
void qb_do_array_max_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	qb_do_array_max_U32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_max_U64_symbol	qb_do_array_max_U64
#else
void qb_do_array_max_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	qb_do_array_max_U64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_F32_symbol	qb_do_array_min_F32
#else
void qb_do_array_min_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	qb_do_array_min_F32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_F64_symbol	qb_do_array_min_F64
#else
void qb_do_array_min_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	qb_do_array_min_F64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_S08_symbol	qb_do_array_min_S08
#else
void qb_do_array_min_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	qb_do_array_min_S08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_S16_symbol	qb_do_array_min_S16
#else
void qb_do_array_min_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	qb_do_array_min_S16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_S32_symbol	qb_do_array_min_S32
#else
void qb_do_array_min_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_array_min_S32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_S64_symbol	qb_do_array_min_S64
#else
void qb_do_array_min_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	qb_do_array_min_S64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_U08_symbol	qb_do_array_min_U08
#else
void qb_do_array_min_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	qb_do_array_min_U08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_U16_symbol	qb_do_array_min_U16
#else
void qb_do_array_min_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	qb_do_array_min_U16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_U32_symbol	qb_do_array_min_U32
#else
void qb_do_array_min_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	qb_do_array_min_U32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_min_U64_symbol	qb_do_array_min_U64
#else
void qb_do_array_min_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	qb_do_array_min_U64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_F32_symbol	qb_do_array_product_F32
#else
void qb_do_array_product_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	qb_do_array_product_F32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_F64_symbol	qb_do_array_product_F64
#else
void qb_do_array_product_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	qb_do_array_product_F64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_S08_symbol	qb_do_array_product_S08
#else
void qb_do_array_product_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	qb_do_array_product_S08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_S16_symbol	qb_do_array_product_S16
#else
void qb_do_array_product_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	qb_do_array_product_S16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_S32_symbol	qb_do_array_product_S32
#else
void qb_do_array_product_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_array_product_S32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_S64_symbol	qb_do_array_product_S64
#else
void qb_do_array_product_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	qb_do_array_product_S64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_U08_symbol	qb_do_array_product_U08
#else
void qb_do_array_product_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	qb_do_array_product_U08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_U16_symbol	qb_do_array_product_U16
#else
void qb_do_array_product_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	qb_do_array_product_U16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_U32_symbol	qb_do_array_product_U32
#else
void qb_do_array_product_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	qb_do_array_product_U32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_product_U64_symbol	qb_do_array_product_U64
#else
void qb_do_array_product_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	qb_do_array_product_U64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_random_symbol	qb_do_array_random
#else
void qb_do_array_random_symbol(uint32_t op1, uint32_t op2, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_array_random(op1, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_F32_symbol	qb_do_array_reverse_F32
#else
void qb_do_array_reverse_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, float32_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_F32(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_F64_symbol	qb_do_array_reverse_F64
#else
void qb_do_array_reverse_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, float64_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_F64(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_I08_symbol	qb_do_array_reverse_I08
#else
void qb_do_array_reverse_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, uint32_t op2, int8_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_I08(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_I16_symbol	qb_do_array_reverse_I16
#else
void qb_do_array_reverse_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, uint32_t op2, int16_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_I16(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_I32_symbol	qb_do_array_reverse_I32
#else
void qb_do_array_reverse_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, uint32_t op2, int32_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_I32(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_reverse_I64_symbol	qb_do_array_reverse_I64
#else
void qb_do_array_reverse_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, uint32_t op2, int64_t *res_ptr, uint32_t res_count) {
	qb_do_array_reverse_I64(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_F32_symbol	qb_do_array_search_F32
#else
void qb_do_array_search_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t op2, int32_t *res_ptr) {
	qb_do_array_search_F32(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_F64_symbol	qb_do_array_search_F64
#else
void qb_do_array_search_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t op2, int32_t *res_ptr) {
	qb_do_array_search_F64(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_I08_symbol	qb_do_array_search_I08
#else
void qb_do_array_search_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t op2, int32_t *res_ptr) {
	qb_do_array_search_I08(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_I16_symbol	qb_do_array_search_I16
#else
void qb_do_array_search_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t op2, int32_t *res_ptr) {
	qb_do_array_search_I16(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_I32_symbol	qb_do_array_search_I32
#else
void qb_do_array_search_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t op2, int32_t *res_ptr) {
	qb_do_array_search_I32(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_I64_symbol	qb_do_array_search_I64
#else
void qb_do_array_search_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t op2, int32_t *res_ptr) {
	qb_do_array_search_I64(op1_ptr, op1_count, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_F32_symbol	qb_do_array_search_multiple_times_F32
#else
void qb_do_array_search_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_F64_symbol	qb_do_array_search_multiple_times_F64
#else
void qb_do_array_search_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_I08_symbol	qb_do_array_search_multiple_times_I08
#else
void qb_do_array_search_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_I16_symbol	qb_do_array_search_multiple_times_I16
#else
void qb_do_array_search_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_I32_symbol	qb_do_array_search_multiple_times_I32
#else
void qb_do_array_search_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_search_multiple_times_I64_symbol	qb_do_array_search_multiple_times_I64
#else
void qb_do_array_search_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_array_search_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_F32_symbol	qb_do_array_sum_F32
#else
void qb_do_array_sum_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr) {
	qb_do_array_sum_F32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_F64_symbol	qb_do_array_sum_F64
#else
void qb_do_array_sum_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr) {
	qb_do_array_sum_F64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_S08_symbol	qb_do_array_sum_S08
#else
void qb_do_array_sum_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr) {
	qb_do_array_sum_S08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_S16_symbol	qb_do_array_sum_S16
#else
void qb_do_array_sum_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr) {
	qb_do_array_sum_S16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_S32_symbol	qb_do_array_sum_S32
#else
void qb_do_array_sum_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr) {
	qb_do_array_sum_S32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_S64_symbol	qb_do_array_sum_S64
#else
void qb_do_array_sum_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr) {
	qb_do_array_sum_S64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_U08_symbol	qb_do_array_sum_U08
#else
void qb_do_array_sum_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr) {
	qb_do_array_sum_U08(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_U16_symbol	qb_do_array_sum_U16
#else
void qb_do_array_sum_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr) {
	qb_do_array_sum_U16(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_U32_symbol	qb_do_array_sum_U32
#else
void qb_do_array_sum_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr) {
	qb_do_array_sum_U32(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_sum_U64_symbol	qb_do_array_sum_U64
#else
void qb_do_array_sum_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr) {
	qb_do_array_sum_U64(op1_ptr, op1_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_F32_symbol	qb_do_array_unique_F32
#else
void qb_do_array_unique_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, float32_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_F32(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_F64_symbol	qb_do_array_unique_F64
#else
void qb_do_array_unique_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, float64_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_F64(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_I08_symbol	qb_do_array_unique_I08
#else
void qb_do_array_unique_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, uint32_t op2, int8_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_I08(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_I16_symbol	qb_do_array_unique_I16
#else
void qb_do_array_unique_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, uint32_t op2, int16_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_I16(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_I32_symbol	qb_do_array_unique_I32
#else
void qb_do_array_unique_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, uint32_t op2, int32_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_I32(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_array_unique_I64_symbol	qb_do_array_unique_I64
#else
void qb_do_array_unique_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, uint32_t op2, int64_t *res_ptr, uint32_t res_count) {
	qb_do_array_unique_I64(op1_ptr, op1_count, op2, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_asin_multiple_times_F32_symbol	qb_do_asin_multiple_times_F32
#else
void qb_do_asin_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_asin_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_asin_multiple_times_F64_symbol	qb_do_asin_multiple_times_F64
#else
void qb_do_asin_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_asin_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_asinh_multiple_times_F32_symbol	qb_do_asinh_multiple_times_F32
#else
void qb_do_asinh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_asinh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_asinh_multiple_times_F64_symbol	qb_do_asinh_multiple_times_F64
#else
void qb_do_asinh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_asinh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atan2_multiple_times_F32_symbol	qb_do_atan2_multiple_times_F32
#else
void qb_do_atan2_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_atan2_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atan2_multiple_times_F64_symbol	qb_do_atan2_multiple_times_F64
#else
void qb_do_atan2_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_atan2_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atan_multiple_times_F32_symbol	qb_do_atan_multiple_times_F32
#else
void qb_do_atan_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_atan_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atan_multiple_times_F64_symbol	qb_do_atan_multiple_times_F64
#else
void qb_do_atan_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_atan_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atanh_multiple_times_F32_symbol	qb_do_atanh_multiple_times_F32
#else
void qb_do_atanh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_atanh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_atanh_multiple_times_F64_symbol	qb_do_atanh_multiple_times_F64
#else
void qb_do_atanh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_atanh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_and_multiple_times_I08_symbol	qb_do_bitwise_and_multiple_times_I08
#else
void qb_do_bitwise_and_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_and_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_and_multiple_times_I16_symbol	qb_do_bitwise_and_multiple_times_I16
#else
void qb_do_bitwise_and_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_and_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_and_multiple_times_I32_symbol	qb_do_bitwise_and_multiple_times_I32
#else
void qb_do_bitwise_and_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_and_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_and_multiple_times_I64_symbol	qb_do_bitwise_and_multiple_times_I64
#else
void qb_do_bitwise_and_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_and_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_not_multiple_times_I08_symbol	qb_do_bitwise_not_multiple_times_I08
#else
void qb_do_bitwise_not_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_not_multiple_times_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_not_multiple_times_I16_symbol	qb_do_bitwise_not_multiple_times_I16
#else
void qb_do_bitwise_not_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_not_multiple_times_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_not_multiple_times_I32_symbol	qb_do_bitwise_not_multiple_times_I32
#else
void qb_do_bitwise_not_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_not_multiple_times_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_not_multiple_times_I64_symbol	qb_do_bitwise_not_multiple_times_I64
#else
void qb_do_bitwise_not_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_not_multiple_times_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_or_multiple_times_I08_symbol	qb_do_bitwise_or_multiple_times_I08
#else
void qb_do_bitwise_or_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_or_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_or_multiple_times_I16_symbol	qb_do_bitwise_or_multiple_times_I16
#else
void qb_do_bitwise_or_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_or_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_or_multiple_times_I32_symbol	qb_do_bitwise_or_multiple_times_I32
#else
void qb_do_bitwise_or_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_or_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_or_multiple_times_I64_symbol	qb_do_bitwise_or_multiple_times_I64
#else
void qb_do_bitwise_or_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_or_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_xor_multiple_times_I08_symbol	qb_do_bitwise_xor_multiple_times_I08
#else
void qb_do_bitwise_xor_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_xor_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_xor_multiple_times_I16_symbol	qb_do_bitwise_xor_multiple_times_I16
#else
void qb_do_bitwise_xor_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_xor_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_xor_multiple_times_I32_symbol	qb_do_bitwise_xor_multiple_times_I32
#else
void qb_do_bitwise_xor_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_xor_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_bitwise_xor_multiple_times_I64_symbol	qb_do_bitwise_xor_multiple_times_I64
#else
void qb_do_bitwise_xor_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_bitwise_xor_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_F32_symbol	qb_do_boolean_cast_multiple_times_F32
#else
void qb_do_boolean_cast_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_F64_symbol	qb_do_boolean_cast_multiple_times_F64
#else
void qb_do_boolean_cast_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_I08_symbol	qb_do_boolean_cast_multiple_times_I08
#else
void qb_do_boolean_cast_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_I16_symbol	qb_do_boolean_cast_multiple_times_I16
#else
void qb_do_boolean_cast_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_I32_symbol	qb_do_boolean_cast_multiple_times_I32
#else
void qb_do_boolean_cast_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_boolean_cast_multiple_times_I64_symbol	qb_do_boolean_cast_multiple_times_I64
#else
void qb_do_boolean_cast_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_boolean_cast_multiple_times_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_F64_symbol	qb_do_cast_multiple_times_F32_F64
#else
void qb_do_cast_multiple_times_F32_F64_symbol(float32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_S08_symbol	qb_do_cast_multiple_times_F32_S08
#else
void qb_do_cast_multiple_times_F32_S08_symbol(float32_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_S08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_S16_symbol	qb_do_cast_multiple_times_F32_S16
#else
void qb_do_cast_multiple_times_F32_S16_symbol(float32_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_S16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_S32_symbol	qb_do_cast_multiple_times_F32_S32
#else
void qb_do_cast_multiple_times_F32_S32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_S32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_S64_symbol	qb_do_cast_multiple_times_F32_S64
#else
void qb_do_cast_multiple_times_F32_S64_symbol(float32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_S64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_U08_symbol	qb_do_cast_multiple_times_F32_U08
#else
void qb_do_cast_multiple_times_F32_U08_symbol(float32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_U08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_U16_symbol	qb_do_cast_multiple_times_F32_U16
#else
void qb_do_cast_multiple_times_F32_U16_symbol(float32_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_U16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_U32_symbol	qb_do_cast_multiple_times_F32_U32
#else
void qb_do_cast_multiple_times_F32_U32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_U32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F32_U64_symbol	qb_do_cast_multiple_times_F32_U64
#else
void qb_do_cast_multiple_times_F32_U64_symbol(float32_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F32_U64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_F32_symbol	qb_do_cast_multiple_times_F64_F32
#else
void qb_do_cast_multiple_times_F64_F32_symbol(float64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_S08_symbol	qb_do_cast_multiple_times_F64_S08
#else
void qb_do_cast_multiple_times_F64_S08_symbol(float64_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_S08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_S16_symbol	qb_do_cast_multiple_times_F64_S16
#else
void qb_do_cast_multiple_times_F64_S16_symbol(float64_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_S16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_S32_symbol	qb_do_cast_multiple_times_F64_S32
#else
void qb_do_cast_multiple_times_F64_S32_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_S32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_S64_symbol	qb_do_cast_multiple_times_F64_S64
#else
void qb_do_cast_multiple_times_F64_S64_symbol(float64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_S64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_U08_symbol	qb_do_cast_multiple_times_F64_U08
#else
void qb_do_cast_multiple_times_F64_U08_symbol(float64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_U08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_U16_symbol	qb_do_cast_multiple_times_F64_U16
#else
void qb_do_cast_multiple_times_F64_U16_symbol(float64_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_U16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_U32_symbol	qb_do_cast_multiple_times_F64_U32
#else
void qb_do_cast_multiple_times_F64_U32_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_U32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_F64_U64_symbol	qb_do_cast_multiple_times_F64_U64
#else
void qb_do_cast_multiple_times_F64_U64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_F64_U64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I16_I08_symbol	qb_do_cast_multiple_times_I16_I08
#else
void qb_do_cast_multiple_times_I16_I08_symbol(int16_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I16_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I32_I08_symbol	qb_do_cast_multiple_times_I32_I08
#else
void qb_do_cast_multiple_times_I32_I08_symbol(int32_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I32_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I32_I16_symbol	qb_do_cast_multiple_times_I32_I16
#else
void qb_do_cast_multiple_times_I32_I16_symbol(int32_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I32_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I64_I08_symbol	qb_do_cast_multiple_times_I64_I08
#else
void qb_do_cast_multiple_times_I64_I08_symbol(int64_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I64_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I64_I16_symbol	qb_do_cast_multiple_times_I64_I16
#else
void qb_do_cast_multiple_times_I64_I16_symbol(int64_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I64_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_I64_I32_symbol	qb_do_cast_multiple_times_I64_I32
#else
void qb_do_cast_multiple_times_I64_I32_symbol(int64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_I64_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S08_F32_symbol	qb_do_cast_multiple_times_S08_F32
#else
void qb_do_cast_multiple_times_S08_F32_symbol(int8_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S08_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S08_F64_symbol	qb_do_cast_multiple_times_S08_F64
#else
void qb_do_cast_multiple_times_S08_F64_symbol(int8_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S08_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S08_I16_symbol	qb_do_cast_multiple_times_S08_I16
#else
void qb_do_cast_multiple_times_S08_I16_symbol(int8_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S08_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S08_I32_symbol	qb_do_cast_multiple_times_S08_I32
#else
void qb_do_cast_multiple_times_S08_I32_symbol(int8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S08_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S08_I64_symbol	qb_do_cast_multiple_times_S08_I64
#else
void qb_do_cast_multiple_times_S08_I64_symbol(int8_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S08_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S16_F32_symbol	qb_do_cast_multiple_times_S16_F32
#else
void qb_do_cast_multiple_times_S16_F32_symbol(int16_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S16_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S16_F64_symbol	qb_do_cast_multiple_times_S16_F64
#else
void qb_do_cast_multiple_times_S16_F64_symbol(int16_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S16_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S16_I32_symbol	qb_do_cast_multiple_times_S16_I32
#else
void qb_do_cast_multiple_times_S16_I32_symbol(int16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S16_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S16_I64_symbol	qb_do_cast_multiple_times_S16_I64
#else
void qb_do_cast_multiple_times_S16_I64_symbol(int16_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S16_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S32_F32_symbol	qb_do_cast_multiple_times_S32_F32
#else
void qb_do_cast_multiple_times_S32_F32_symbol(int32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S32_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S32_F64_symbol	qb_do_cast_multiple_times_S32_F64
#else
void qb_do_cast_multiple_times_S32_F64_symbol(int32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S32_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S32_I64_symbol	qb_do_cast_multiple_times_S32_I64
#else
void qb_do_cast_multiple_times_S32_I64_symbol(int32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S32_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S64_F32_symbol	qb_do_cast_multiple_times_S64_F32
#else
void qb_do_cast_multiple_times_S64_F32_symbol(int64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S64_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_S64_F64_symbol	qb_do_cast_multiple_times_S64_F64
#else
void qb_do_cast_multiple_times_S64_F64_symbol(int64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_S64_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U08_F32_symbol	qb_do_cast_multiple_times_U08_F32
#else
void qb_do_cast_multiple_times_U08_F32_symbol(uint8_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U08_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U08_F64_symbol	qb_do_cast_multiple_times_U08_F64
#else
void qb_do_cast_multiple_times_U08_F64_symbol(uint8_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U08_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U08_I16_symbol	qb_do_cast_multiple_times_U08_I16
#else
void qb_do_cast_multiple_times_U08_I16_symbol(uint8_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U08_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U08_I32_symbol	qb_do_cast_multiple_times_U08_I32
#else
void qb_do_cast_multiple_times_U08_I32_symbol(uint8_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U08_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U08_I64_symbol	qb_do_cast_multiple_times_U08_I64
#else
void qb_do_cast_multiple_times_U08_I64_symbol(uint8_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U08_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U16_F32_symbol	qb_do_cast_multiple_times_U16_F32
#else
void qb_do_cast_multiple_times_U16_F32_symbol(uint16_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U16_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U16_F64_symbol	qb_do_cast_multiple_times_U16_F64
#else
void qb_do_cast_multiple_times_U16_F64_symbol(uint16_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U16_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U16_I32_symbol	qb_do_cast_multiple_times_U16_I32
#else
void qb_do_cast_multiple_times_U16_I32_symbol(uint16_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U16_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U16_I64_symbol	qb_do_cast_multiple_times_U16_I64
#else
void qb_do_cast_multiple_times_U16_I64_symbol(uint16_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U16_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U32_F32_symbol	qb_do_cast_multiple_times_U32_F32
#else
void qb_do_cast_multiple_times_U32_F32_symbol(uint32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U32_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U32_F64_symbol	qb_do_cast_multiple_times_U32_F64
#else
void qb_do_cast_multiple_times_U32_F64_symbol(uint32_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U32_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U32_I64_symbol	qb_do_cast_multiple_times_U32_I64
#else
void qb_do_cast_multiple_times_U32_I64_symbol(uint32_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U32_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U64_F32_symbol	qb_do_cast_multiple_times_U64_F32
#else
void qb_do_cast_multiple_times_U64_F32_symbol(uint64_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U64_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cast_multiple_times_U64_F64_symbol	qb_do_cast_multiple_times_U64_F64
#else
void qb_do_cast_multiple_times_U64_F64_symbol(uint64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cast_multiple_times_U64_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_ceil_multiple_times_F32_symbol	qb_do_ceil_multiple_times_F32
#else
void qb_do_ceil_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_ceil_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_ceil_multiple_times_F64_symbol	qb_do_ceil_multiple_times_F64
#else
void qb_do_ceil_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_ceil_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_clamp_multiple_times_F32_symbol	qb_do_clamp_multiple_times_F32
#else
void qb_do_clamp_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_clamp_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_clamp_multiple_times_F64_symbol	qb_do_clamp_multiple_times_F64
#else
void qb_do_clamp_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_clamp_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_abs_F64_symbol	qb_do_complex_abs_F64
#else
void qb_do_complex_abs_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_abs_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_abs_multiple_times_F32_symbol	qb_do_complex_abs_multiple_times_F32
#else
void qb_do_complex_abs_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_abs_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_abs_multiple_times_F64_symbol	qb_do_complex_abs_multiple_times_F64
#else
void qb_do_complex_abs_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_abs_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_argument_F64_symbol	qb_do_complex_argument_F64
#else
void qb_do_complex_argument_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_argument_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_argument_multiple_times_F32_symbol	qb_do_complex_argument_multiple_times_F32
#else
void qb_do_complex_argument_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_argument_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_argument_multiple_times_F64_symbol	qb_do_complex_argument_multiple_times_F64
#else
void qb_do_complex_argument_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_argument_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cos_F64_symbol	qb_do_complex_cos_F64
#else
void qb_do_complex_cos_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cos_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cos_multiple_times_F32_symbol	qb_do_complex_cos_multiple_times_F32
#else
void qb_do_complex_cos_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cos_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cos_multiple_times_F64_symbol	qb_do_complex_cos_multiple_times_F64
#else
void qb_do_complex_cos_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cos_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cosh_F64_symbol	qb_do_complex_cosh_F64
#else
void qb_do_complex_cosh_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cosh_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cosh_multiple_times_F32_symbol	qb_do_complex_cosh_multiple_times_F32
#else
void qb_do_complex_cosh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cosh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_cosh_multiple_times_F64_symbol	qb_do_complex_cosh_multiple_times_F64
#else
void qb_do_complex_cosh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_cosh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_divide_F64_symbol	qb_do_complex_divide_F64
#else
void qb_do_complex_divide_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_divide_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_divide_multiple_times_F32_symbol	qb_do_complex_divide_multiple_times_F32
#else
void qb_do_complex_divide_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_divide_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_divide_multiple_times_F64_symbol	qb_do_complex_divide_multiple_times_F64
#else
void qb_do_complex_divide_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_divide_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_exp_F64_symbol	qb_do_complex_exp_F64
#else
void qb_do_complex_exp_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_exp_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_exp_multiple_times_F32_symbol	qb_do_complex_exp_multiple_times_F32
#else
void qb_do_complex_exp_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_exp_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_exp_multiple_times_F64_symbol	qb_do_complex_exp_multiple_times_F64
#else
void qb_do_complex_exp_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_exp_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_log_F64_symbol	qb_do_complex_log_F64
#else
void qb_do_complex_log_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_log_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_log_multiple_times_F32_symbol	qb_do_complex_log_multiple_times_F32
#else
void qb_do_complex_log_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_log_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_log_multiple_times_F64_symbol	qb_do_complex_log_multiple_times_F64
#else
void qb_do_complex_log_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_log_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_multiply_F64_symbol	qb_do_complex_multiply_F64
#else
void qb_do_complex_multiply_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_multiply_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_multiply_multiple_times_F32_symbol	qb_do_complex_multiply_multiple_times_F32
#else
void qb_do_complex_multiply_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_multiply_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_multiply_multiple_times_F64_symbol	qb_do_complex_multiply_multiple_times_F64
#else
void qb_do_complex_multiply_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_multiply_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_pow_F64_symbol	qb_do_complex_pow_F64
#else
void qb_do_complex_pow_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_pow_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_pow_multiple_times_F32_symbol	qb_do_complex_pow_multiple_times_F32
#else
void qb_do_complex_pow_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_pow_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_pow_multiple_times_F64_symbol	qb_do_complex_pow_multiple_times_F64
#else
void qb_do_complex_pow_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_pow_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sin_F64_symbol	qb_do_complex_sin_F64
#else
void qb_do_complex_sin_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sin_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sin_multiple_times_F32_symbol	qb_do_complex_sin_multiple_times_F32
#else
void qb_do_complex_sin_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sin_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sin_multiple_times_F64_symbol	qb_do_complex_sin_multiple_times_F64
#else
void qb_do_complex_sin_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sin_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sinh_F64_symbol	qb_do_complex_sinh_F64
#else
void qb_do_complex_sinh_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sinh_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sinh_multiple_times_F32_symbol	qb_do_complex_sinh_multiple_times_F32
#else
void qb_do_complex_sinh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sinh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_sinh_multiple_times_F64_symbol	qb_do_complex_sinh_multiple_times_F64
#else
void qb_do_complex_sinh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_sinh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_square_root_F64_symbol	qb_do_complex_square_root_F64
#else
void qb_do_complex_square_root_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_square_root_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_square_root_multiple_times_F32_symbol	qb_do_complex_square_root_multiple_times_F32
#else
void qb_do_complex_square_root_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_square_root_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_square_root_multiple_times_F64_symbol	qb_do_complex_square_root_multiple_times_F64
#else
void qb_do_complex_square_root_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_square_root_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tan_F64_symbol	qb_do_complex_tan_F64
#else
void qb_do_complex_tan_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tan_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tan_multiple_times_F32_symbol	qb_do_complex_tan_multiple_times_F32
#else
void qb_do_complex_tan_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tan_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tan_multiple_times_F64_symbol	qb_do_complex_tan_multiple_times_F64
#else
void qb_do_complex_tan_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tan_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tanh_F64_symbol	qb_do_complex_tanh_F64
#else
void qb_do_complex_tanh_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tanh_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tanh_multiple_times_F32_symbol	qb_do_complex_tanh_multiple_times_F32
#else
void qb_do_complex_tanh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tanh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_complex_tanh_multiple_times_F64_symbol	qb_do_complex_tanh_multiple_times_F64
#else
void qb_do_complex_tanh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_complex_tanh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_F32_symbol	qb_do_concat_multidimensional_variable_F32
#else
void qb_do_concat_multidimensional_variable_F32_symbol(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_F32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_F64_symbol	qb_do_concat_multidimensional_variable_F64
#else
void qb_do_concat_multidimensional_variable_F64_symbol(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_F64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_S08_symbol	qb_do_concat_multidimensional_variable_S08
#else
void qb_do_concat_multidimensional_variable_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_S08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_S16_symbol	qb_do_concat_multidimensional_variable_S16
#else
void qb_do_concat_multidimensional_variable_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_S16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_S32_symbol	qb_do_concat_multidimensional_variable_S32
#else
void qb_do_concat_multidimensional_variable_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_S32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_S64_symbol	qb_do_concat_multidimensional_variable_S64
#else
void qb_do_concat_multidimensional_variable_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_S64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_U08_symbol	qb_do_concat_multidimensional_variable_U08
#else
void qb_do_concat_multidimensional_variable_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_U08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_U16_symbol	qb_do_concat_multidimensional_variable_U16
#else
void qb_do_concat_multidimensional_variable_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_U16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_U32_symbol	qb_do_concat_multidimensional_variable_U32
#else
void qb_do_concat_multidimensional_variable_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_U32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_multidimensional_variable_U64_symbol	qb_do_concat_multidimensional_variable_U64
#else
void qb_do_concat_multidimensional_variable_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_concat_multidimensional_variable_U64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_F32_symbol	qb_do_concat_variable_F32
#else
void qb_do_concat_variable_F32_symbol(qb_interpreter_context *cxt, float32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_F32(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_F64_symbol	qb_do_concat_variable_F64
#else
void qb_do_concat_variable_F64_symbol(qb_interpreter_context *cxt, float64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_F64(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_S08_symbol	qb_do_concat_variable_S08
#else
void qb_do_concat_variable_S08_symbol(qb_interpreter_context *cxt, int8_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_S08(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_S16_symbol	qb_do_concat_variable_S16
#else
void qb_do_concat_variable_S16_symbol(qb_interpreter_context *cxt, int16_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_S16(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_S32_symbol	qb_do_concat_variable_S32
#else
void qb_do_concat_variable_S32_symbol(qb_interpreter_context *cxt, int32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_S32(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_S64_symbol	qb_do_concat_variable_S64
#else
void qb_do_concat_variable_S64_symbol(qb_interpreter_context *cxt, int64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_S64(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_U08_symbol	qb_do_concat_variable_U08
#else
void qb_do_concat_variable_U08_symbol(qb_interpreter_context *cxt, uint8_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_U08(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_U16_symbol	qb_do_concat_variable_U16
#else
void qb_do_concat_variable_U16_symbol(qb_interpreter_context *cxt, uint16_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_U16(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_U32_symbol	qb_do_concat_variable_U32
#else
void qb_do_concat_variable_U32_symbol(qb_interpreter_context *cxt, uint32_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_U32(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_U64_symbol	qb_do_concat_variable_U64
#else
void qb_do_concat_variable_U64_symbol(qb_interpreter_context *cxt, uint64_t op1, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_U64(cxt, op1, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_F32_symbol	qb_do_concat_variable_multiple_times_F32
#else
void qb_do_concat_variable_multiple_times_F32_symbol(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_F32(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_F64_symbol	qb_do_concat_variable_multiple_times_F64
#else
void qb_do_concat_variable_multiple_times_F64_symbol(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_F64(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_S08_symbol	qb_do_concat_variable_multiple_times_S08
#else
void qb_do_concat_variable_multiple_times_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_S08(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_S16_symbol	qb_do_concat_variable_multiple_times_S16
#else
void qb_do_concat_variable_multiple_times_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_S16(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_S32_symbol	qb_do_concat_variable_multiple_times_S32
#else
void qb_do_concat_variable_multiple_times_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_S32(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_S64_symbol	qb_do_concat_variable_multiple_times_S64
#else
void qb_do_concat_variable_multiple_times_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_S64(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_U08_symbol	qb_do_concat_variable_multiple_times_U08
#else
void qb_do_concat_variable_multiple_times_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_U08(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_U16_symbol	qb_do_concat_variable_multiple_times_U16
#else
void qb_do_concat_variable_multiple_times_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_U16(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_U32_symbol	qb_do_concat_variable_multiple_times_U32
#else
void qb_do_concat_variable_multiple_times_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_U32(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_concat_variable_multiple_times_U64_symbol	qb_do_concat_variable_multiple_times_U64
#else
void qb_do_concat_variable_multiple_times_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count, uint32_t res_count_before) {
	qb_do_concat_variable_multiple_times_U64(cxt, op1_ptr, op1_count, res_ptr, res_count, res_count_before);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_2x_multiple_times_F32_symbol	qb_do_copy_2x_multiple_times_F32
#else
void qb_do_copy_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_copy_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_2x_multiple_times_F64_symbol	qb_do_copy_2x_multiple_times_F64
#else
void qb_do_copy_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_copy_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_3x_multiple_times_F32_symbol	qb_do_copy_3x_multiple_times_F32
#else
void qb_do_copy_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_copy_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_3x_multiple_times_F64_symbol	qb_do_copy_3x_multiple_times_F64
#else
void qb_do_copy_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_copy_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_4x_multiple_times_F32_symbol	qb_do_copy_4x_multiple_times_F32
#else
void qb_do_copy_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_copy_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_4x_multiple_times_F64_symbol	qb_do_copy_4x_multiple_times_F64
#else
void qb_do_copy_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_copy_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_F32_symbol	qb_do_copy_multiple_times_F32
#else
void qb_do_copy_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_F64_symbol	qb_do_copy_multiple_times_F64
#else
void qb_do_copy_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_I08_symbol	qb_do_copy_multiple_times_I08
#else
void qb_do_copy_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_I16_symbol	qb_do_copy_multiple_times_I16
#else
void qb_do_copy_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_I32_symbol	qb_do_copy_multiple_times_I32
#else
void qb_do_copy_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_copy_multiple_times_I64_symbol	qb_do_copy_multiple_times_I64
#else
void qb_do_copy_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_copy_multiple_times_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cos_multiple_times_F32_symbol	qb_do_cos_multiple_times_F32
#else
void qb_do_cos_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cos_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cos_multiple_times_F64_symbol	qb_do_cos_multiple_times_F64
#else
void qb_do_cos_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cos_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cosh_multiple_times_F32_symbol	qb_do_cosh_multiple_times_F32
#else
void qb_do_cosh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cosh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cosh_multiple_times_F64_symbol	qb_do_cosh_multiple_times_F64
#else
void qb_do_cosh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cosh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_2x_F64_symbol	qb_do_cross_product_2x_F64
#else
void qb_do_cross_product_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_cross_product_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_2x_multiple_times_F32_symbol	qb_do_cross_product_2x_multiple_times_F32
#else
void qb_do_cross_product_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_2x_multiple_times_F64_symbol	qb_do_cross_product_2x_multiple_times_F64
#else
void qb_do_cross_product_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_3x_F64_symbol	qb_do_cross_product_3x_F64
#else
void qb_do_cross_product_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_cross_product_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_3x_multiple_times_F32_symbol	qb_do_cross_product_3x_multiple_times_F32
#else
void qb_do_cross_product_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_3x_multiple_times_F64_symbol	qb_do_cross_product_3x_multiple_times_F64
#else
void qb_do_cross_product_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_4x_F32_symbol	qb_do_cross_product_4x_F32
#else
void qb_do_cross_product_4x_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *op3_ptr, float32_t *res_ptr) {
	qb_do_cross_product_4x_F32(op1_ptr, op2_ptr, op3_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_4x_F64_symbol	qb_do_cross_product_4x_F64
#else
void qb_do_cross_product_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *op3_ptr, float64_t *res_ptr) {
	qb_do_cross_product_4x_F64(op1_ptr, op2_ptr, op3_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_4x_multiple_times_F32_symbol	qb_do_cross_product_4x_multiple_times_F32
#else
void qb_do_cross_product_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_cross_product_4x_multiple_times_F64_symbol	qb_do_cross_product_4x_multiple_times_F64
#else
void qb_do_cross_product_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_cross_product_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_2x_multiple_times_F32_symbol	qb_do_decrement_2x_multiple_times_F32
#else
void qb_do_decrement_2x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_2x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_2x_multiple_times_F64_symbol	qb_do_decrement_2x_multiple_times_F64
#else
void qb_do_decrement_2x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_2x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_3x_multiple_times_F32_symbol	qb_do_decrement_3x_multiple_times_F32
#else
void qb_do_decrement_3x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_3x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_3x_multiple_times_F64_symbol	qb_do_decrement_3x_multiple_times_F64
#else
void qb_do_decrement_3x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_3x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_4x_multiple_times_F32_symbol	qb_do_decrement_4x_multiple_times_F32
#else
void qb_do_decrement_4x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_4x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_4x_multiple_times_F64_symbol	qb_do_decrement_4x_multiple_times_F64
#else
void qb_do_decrement_4x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_4x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_F32_symbol	qb_do_decrement_multiple_times_F32
#else
void qb_do_decrement_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_F64_symbol	qb_do_decrement_multiple_times_F64
#else
void qb_do_decrement_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_I08_symbol	qb_do_decrement_multiple_times_I08
#else
void qb_do_decrement_multiple_times_I08_symbol(int8_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_I08(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_I16_symbol	qb_do_decrement_multiple_times_I16
#else
void qb_do_decrement_multiple_times_I16_symbol(int16_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_I16(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_I32_symbol	qb_do_decrement_multiple_times_I32
#else
void qb_do_decrement_multiple_times_I32_symbol(int32_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_I32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_decrement_multiple_times_I64_symbol	qb_do_decrement_multiple_times_I64
#else
void qb_do_decrement_multiple_times_I64_symbol(int64_t *res_ptr, uint32_t res_count) {
	qb_do_decrement_multiple_times_I64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_degree_to_radian_multiple_times_F32_symbol	qb_do_degree_to_radian_multiple_times_F32
#else
void qb_do_degree_to_radian_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_degree_to_radian_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_degree_to_radian_multiple_times_F64_symbol	qb_do_degree_to_radian_multiple_times_F64
#else
void qb_do_degree_to_radian_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_degree_to_radian_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_2x_F64_symbol	qb_do_determinant_2x_F64
#else
void qb_do_determinant_2x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_determinant_2x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_2x_multiple_times_F32_symbol	qb_do_determinant_2x_multiple_times_F32
#else
void qb_do_determinant_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_2x_multiple_times_F64_symbol	qb_do_determinant_2x_multiple_times_F64
#else
void qb_do_determinant_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_3x_F64_symbol	qb_do_determinant_3x_F64
#else
void qb_do_determinant_3x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_determinant_3x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_3x_multiple_times_F32_symbol	qb_do_determinant_3x_multiple_times_F32
#else
void qb_do_determinant_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_3x_multiple_times_F64_symbol	qb_do_determinant_3x_multiple_times_F64
#else
void qb_do_determinant_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_4x_F64_symbol	qb_do_determinant_4x_F64
#else
void qb_do_determinant_4x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_determinant_4x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_4x_multiple_times_F32_symbol	qb_do_determinant_4x_multiple_times_F32
#else
void qb_do_determinant_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_4x_multiple_times_F64_symbol	qb_do_determinant_4x_multiple_times_F64
#else
void qb_do_determinant_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_F32_symbol	qb_do_determinant_F32
#else
void qb_do_determinant_F32_symbol(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_determinant_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_F64_symbol	qb_do_determinant_F64
#else
void qb_do_determinant_F64_symbol(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_determinant_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_multiple_times_F32_symbol	qb_do_determinant_multiple_times_F32
#else
void qb_do_determinant_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_multiple_times_F32(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_determinant_multiple_times_F64_symbol	qb_do_determinant_multiple_times_F64
#else
void qb_do_determinant_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_determinant_multiple_times_F64(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_2x_F64_symbol	qb_do_distance_2x_F64
#else
void qb_do_distance_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_distance_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_2x_multiple_times_F32_symbol	qb_do_distance_2x_multiple_times_F32
#else
void qb_do_distance_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_distance_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_2x_multiple_times_F64_symbol	qb_do_distance_2x_multiple_times_F64
#else
void qb_do_distance_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_distance_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_3x_F64_symbol	qb_do_distance_3x_F64
#else
void qb_do_distance_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_distance_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_3x_multiple_times_F32_symbol	qb_do_distance_3x_multiple_times_F32
#else
void qb_do_distance_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_distance_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_3x_multiple_times_F64_symbol	qb_do_distance_3x_multiple_times_F64
#else
void qb_do_distance_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_distance_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_4x_F64_symbol	qb_do_distance_4x_F64
#else
void qb_do_distance_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_distance_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_4x_multiple_times_F32_symbol	qb_do_distance_4x_multiple_times_F32
#else
void qb_do_distance_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_distance_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_4x_multiple_times_F64_symbol	qb_do_distance_4x_multiple_times_F64
#else
void qb_do_distance_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_distance_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_F32_symbol	qb_do_distance_F32
#else
void qb_do_distance_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_distance_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_F64_symbol	qb_do_distance_F64
#else
void qb_do_distance_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_distance_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_multiple_times_F32_symbol	qb_do_distance_multiple_times_F32
#else
void qb_do_distance_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_distance_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_distance_multiple_times_F64_symbol	qb_do_distance_multiple_times_F64
#else
void qb_do_distance_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_distance_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_2x_multiple_times_F32_symbol	qb_do_divide_2x_multiple_times_F32
#else
void qb_do_divide_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_divide_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_2x_multiple_times_F64_symbol	qb_do_divide_2x_multiple_times_F64
#else
void qb_do_divide_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_divide_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_3x_multiple_times_F32_symbol	qb_do_divide_3x_multiple_times_F32
#else
void qb_do_divide_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_divide_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_3x_multiple_times_F64_symbol	qb_do_divide_3x_multiple_times_F64
#else
void qb_do_divide_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_divide_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_4x_multiple_times_F32_symbol	qb_do_divide_4x_multiple_times_F32
#else
void qb_do_divide_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_divide_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_4x_multiple_times_F64_symbol	qb_do_divide_4x_multiple_times_F64
#else
void qb_do_divide_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_divide_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_F32_symbol	qb_do_divide_multiple_times_F32
#else
void qb_do_divide_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_divide_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_F64_symbol	qb_do_divide_multiple_times_F64
#else
void qb_do_divide_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_divide_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_S08_symbol	qb_do_divide_multiple_times_S08
#else
void qb_do_divide_multiple_times_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_S08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_S16_symbol	qb_do_divide_multiple_times_S16
#else
void qb_do_divide_multiple_times_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_S16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_S32_symbol	qb_do_divide_multiple_times_S32
#else
void qb_do_divide_multiple_times_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_S32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_S64_symbol	qb_do_divide_multiple_times_S64
#else
void qb_do_divide_multiple_times_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_S64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_U08_symbol	qb_do_divide_multiple_times_U08
#else
void qb_do_divide_multiple_times_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_U08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_U16_symbol	qb_do_divide_multiple_times_U16
#else
void qb_do_divide_multiple_times_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_U16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_U32_symbol	qb_do_divide_multiple_times_U32
#else
void qb_do_divide_multiple_times_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_U32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_divide_multiple_times_U64_symbol	qb_do_divide_multiple_times_U64
#else
void qb_do_divide_multiple_times_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count, uint32_t PHP_LINE_NUMBER) {
	qb_do_divide_multiple_times_U64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count, PHP_LINE_NUMBER);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_2x_F64_symbol	qb_do_dot_product_2x_F64
#else
void qb_do_dot_product_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_dot_product_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_2x_multiple_times_F32_symbol	qb_do_dot_product_2x_multiple_times_F32
#else
void qb_do_dot_product_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_2x_multiple_times_F64_symbol	qb_do_dot_product_2x_multiple_times_F64
#else
void qb_do_dot_product_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_3x_F64_symbol	qb_do_dot_product_3x_F64
#else
void qb_do_dot_product_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_dot_product_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_3x_multiple_times_F32_symbol	qb_do_dot_product_3x_multiple_times_F32
#else
void qb_do_dot_product_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_3x_multiple_times_F64_symbol	qb_do_dot_product_3x_multiple_times_F64
#else
void qb_do_dot_product_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_4x_F64_symbol	qb_do_dot_product_4x_F64
#else
void qb_do_dot_product_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_dot_product_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_4x_multiple_times_F32_symbol	qb_do_dot_product_4x_multiple_times_F32
#else
void qb_do_dot_product_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_4x_multiple_times_F64_symbol	qb_do_dot_product_4x_multiple_times_F64
#else
void qb_do_dot_product_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_F32_symbol	qb_do_dot_product_F32
#else
void qb_do_dot_product_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_dot_product_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_F64_symbol	qb_do_dot_product_F64
#else
void qb_do_dot_product_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_dot_product_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_multiple_times_F32_symbol	qb_do_dot_product_multiple_times_F32
#else
void qb_do_dot_product_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_dot_product_multiple_times_F64_symbol	qb_do_dot_product_multiple_times_F64
#else
void qb_do_dot_product_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_dot_product_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_F32_symbol	qb_do_equal_vector_multiple_times_F32
#else
void qb_do_equal_vector_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_F64_symbol	qb_do_equal_vector_multiple_times_F64
#else
void qb_do_equal_vector_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_I08_symbol	qb_do_equal_vector_multiple_times_I08
#else
void qb_do_equal_vector_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_I16_symbol	qb_do_equal_vector_multiple_times_I16
#else
void qb_do_equal_vector_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_I32_symbol	qb_do_equal_vector_multiple_times_I32
#else
void qb_do_equal_vector_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_equal_vector_multiple_times_I64_symbol	qb_do_equal_vector_multiple_times_I64
#else
void qb_do_equal_vector_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_equal_vector_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp2_multiple_times_F32_symbol	qb_do_exp2_multiple_times_F32
#else
void qb_do_exp2_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_exp2_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp2_multiple_times_F64_symbol	qb_do_exp2_multiple_times_F64
#else
void qb_do_exp2_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_exp2_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp_m1_multiple_times_F32_symbol	qb_do_exp_m1_multiple_times_F32
#else
void qb_do_exp_m1_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_exp_m1_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp_m1_multiple_times_F64_symbol	qb_do_exp_m1_multiple_times_F64
#else
void qb_do_exp_m1_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_exp_m1_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp_multiple_times_F32_symbol	qb_do_exp_multiple_times_F32
#else
void qb_do_exp_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_exp_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_exp_multiple_times_F64_symbol	qb_do_exp_multiple_times_F64
#else
void qb_do_exp_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_exp_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_2x_F64_symbol	qb_do_face_forward_2x_F64
#else
void qb_do_face_forward_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_face_forward_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_2x_multiple_times_F32_symbol	qb_do_face_forward_2x_multiple_times_F32
#else
void qb_do_face_forward_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_2x_multiple_times_F64_symbol	qb_do_face_forward_2x_multiple_times_F64
#else
void qb_do_face_forward_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_3x_F64_symbol	qb_do_face_forward_3x_F64
#else
void qb_do_face_forward_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_face_forward_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_3x_multiple_times_F32_symbol	qb_do_face_forward_3x_multiple_times_F32
#else
void qb_do_face_forward_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_3x_multiple_times_F64_symbol	qb_do_face_forward_3x_multiple_times_F64
#else
void qb_do_face_forward_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_4x_F64_symbol	qb_do_face_forward_4x_F64
#else
void qb_do_face_forward_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_face_forward_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_4x_multiple_times_F32_symbol	qb_do_face_forward_4x_multiple_times_F32
#else
void qb_do_face_forward_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_4x_multiple_times_F64_symbol	qb_do_face_forward_4x_multiple_times_F64
#else
void qb_do_face_forward_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_F32_symbol	qb_do_face_forward_F32
#else
void qb_do_face_forward_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_face_forward_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_F64_symbol	qb_do_face_forward_F64
#else
void qb_do_face_forward_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_face_forward_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_multiple_times_F32_symbol	qb_do_face_forward_multiple_times_F32
#else
void qb_do_face_forward_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_face_forward_multiple_times_F64_symbol	qb_do_face_forward_multiple_times_F64
#else
void qb_do_face_forward_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_face_forward_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_floor_multiple_times_F32_symbol	qb_do_floor_multiple_times_F32
#else
void qb_do_floor_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_floor_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_floor_multiple_times_F64_symbol	qb_do_floor_multiple_times_F64
#else
void qb_do_floor_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_floor_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_floored_division_modulo_multiple_times_F32_symbol	qb_do_floored_division_modulo_multiple_times_F32
#else
void qb_do_floored_division_modulo_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_floored_division_modulo_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_floored_division_modulo_multiple_times_F64_symbol	qb_do_floored_division_modulo_multiple_times_F64
#else
void qb_do_floored_division_modulo_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_floored_division_modulo_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_fract_multiple_times_F32_symbol	qb_do_fract_multiple_times_F32
#else
void qb_do_fract_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_fract_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_fract_multiple_times_F64_symbol	qb_do_fract_multiple_times_F64
#else
void qb_do_fract_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_fract_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_hypot_multiple_times_F32_symbol	qb_do_hypot_multiple_times_F32
#else
void qb_do_hypot_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_hypot_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_hypot_multiple_times_F64_symbol	qb_do_hypot_multiple_times_F64
#else
void qb_do_hypot_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_hypot_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_F32_symbol	qb_do_in_array_multiple_times_F32
#else
void qb_do_in_array_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_F64_symbol	qb_do_in_array_multiple_times_F64
#else
void qb_do_in_array_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_I08_symbol	qb_do_in_array_multiple_times_I08
#else
void qb_do_in_array_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_I16_symbol	qb_do_in_array_multiple_times_I16
#else
void qb_do_in_array_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_I32_symbol	qb_do_in_array_multiple_times_I32
#else
void qb_do_in_array_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_in_array_multiple_times_I64_symbol	qb_do_in_array_multiple_times_I64
#else
void qb_do_in_array_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr) {
	qb_do_in_array_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_2x_multiple_times_F32_symbol	qb_do_increment_2x_multiple_times_F32
#else
void qb_do_increment_2x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_increment_2x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_2x_multiple_times_F64_symbol	qb_do_increment_2x_multiple_times_F64
#else
void qb_do_increment_2x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_increment_2x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_3x_multiple_times_F32_symbol	qb_do_increment_3x_multiple_times_F32
#else
void qb_do_increment_3x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_increment_3x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_3x_multiple_times_F64_symbol	qb_do_increment_3x_multiple_times_F64
#else
void qb_do_increment_3x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_increment_3x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_4x_multiple_times_F32_symbol	qb_do_increment_4x_multiple_times_F32
#else
void qb_do_increment_4x_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_increment_4x_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_4x_multiple_times_F64_symbol	qb_do_increment_4x_multiple_times_F64
#else
void qb_do_increment_4x_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_increment_4x_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_F32_symbol	qb_do_increment_multiple_times_F32
#else
void qb_do_increment_multiple_times_F32_symbol(float32_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_F32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_F64_symbol	qb_do_increment_multiple_times_F64
#else
void qb_do_increment_multiple_times_F64_symbol(float64_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_F64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_I08_symbol	qb_do_increment_multiple_times_I08
#else
void qb_do_increment_multiple_times_I08_symbol(int8_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_I08(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_I16_symbol	qb_do_increment_multiple_times_I16
#else
void qb_do_increment_multiple_times_I16_symbol(int16_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_I16(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_I32_symbol	qb_do_increment_multiple_times_I32
#else
void qb_do_increment_multiple_times_I32_symbol(int32_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_I32(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_increment_multiple_times_I64_symbol	qb_do_increment_multiple_times_I64
#else
void qb_do_increment_multiple_times_I64_symbol(int64_t *res_ptr, uint32_t res_count) {
	qb_do_increment_multiple_times_I64(res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_2x_F32_symbol	qb_do_invert_matrix_2x_F32
#else
void qb_do_invert_matrix_2x_F32_symbol(float32_t *op1_ptr, float32_t *res_ptr) {
	qb_do_invert_matrix_2x_F32(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_2x_F64_symbol	qb_do_invert_matrix_2x_F64
#else
void qb_do_invert_matrix_2x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_invert_matrix_2x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_2x_multiple_times_F32_symbol	qb_do_invert_matrix_2x_multiple_times_F32
#else
void qb_do_invert_matrix_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_2x_multiple_times_F64_symbol	qb_do_invert_matrix_2x_multiple_times_F64
#else
void qb_do_invert_matrix_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_3x_F32_symbol	qb_do_invert_matrix_3x_F32
#else
void qb_do_invert_matrix_3x_F32_symbol(float32_t *op1_ptr, float32_t *res_ptr) {
	qb_do_invert_matrix_3x_F32(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_3x_F64_symbol	qb_do_invert_matrix_3x_F64
#else
void qb_do_invert_matrix_3x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_invert_matrix_3x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_3x_multiple_times_F32_symbol	qb_do_invert_matrix_3x_multiple_times_F32
#else
void qb_do_invert_matrix_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_3x_multiple_times_F64_symbol	qb_do_invert_matrix_3x_multiple_times_F64
#else
void qb_do_invert_matrix_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_4x_F32_symbol	qb_do_invert_matrix_4x_F32
#else
void qb_do_invert_matrix_4x_F32_symbol(float32_t *op1_ptr, float32_t *res_ptr) {
	qb_do_invert_matrix_4x_F32(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_4x_F64_symbol	qb_do_invert_matrix_4x_F64
#else
void qb_do_invert_matrix_4x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_invert_matrix_4x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_4x_multiple_times_F32_symbol	qb_do_invert_matrix_4x_multiple_times_F32
#else
void qb_do_invert_matrix_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_4x_multiple_times_F64_symbol	qb_do_invert_matrix_4x_multiple_times_F64
#else
void qb_do_invert_matrix_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_F32_symbol	qb_do_invert_matrix_F32
#else
void qb_do_invert_matrix_F32_symbol(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_invert_matrix_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_F64_symbol	qb_do_invert_matrix_F64
#else
void qb_do_invert_matrix_F64_symbol(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_invert_matrix_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_multiple_times_F32_symbol	qb_do_invert_matrix_multiple_times_F32
#else
void qb_do_invert_matrix_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_multiple_times_F32(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_invert_matrix_multiple_times_F64_symbol	qb_do_invert_matrix_multiple_times_F64
#else
void qb_do_invert_matrix_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_invert_matrix_multiple_times_F64(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_finite_multiple_times_F32_symbol	qb_do_is_finite_multiple_times_F32
#else
void qb_do_is_finite_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_finite_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_finite_multiple_times_F64_symbol	qb_do_is_finite_multiple_times_F64
#else
void qb_do_is_finite_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_finite_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_infinite_multiple_times_F32_symbol	qb_do_is_infinite_multiple_times_F32
#else
void qb_do_is_infinite_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_infinite_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_infinite_multiple_times_F64_symbol	qb_do_is_infinite_multiple_times_F64
#else
void qb_do_is_infinite_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_infinite_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_nan_multiple_times_F32_symbol	qb_do_is_nan_multiple_times_F32
#else
void qb_do_is_nan_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_nan_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_is_nan_multiple_times_F64_symbol	qb_do_is_nan_multiple_times_F64
#else
void qb_do_is_nan_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_is_nan_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_lcg_F32_symbol	qb_do_lcg_F32
#else
void qb_do_lcg_F32_symbol(qb_interpreter_context *cxt, float32_t *res_ptr) {
	qb_do_lcg_F32(cxt, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_lcg_F64_symbol	qb_do_lcg_F64
#else
void qb_do_lcg_F64_symbol(qb_interpreter_context *cxt, float64_t *res_ptr) {
	qb_do_lcg_F64(cxt, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_lcg_multiple_times_F32_symbol	qb_do_lcg_multiple_times_F32
#else
void qb_do_lcg_multiple_times_F32_symbol(qb_interpreter_context *cxt, float32_t *res_ptr, uint32_t res_count) {
	qb_do_lcg_multiple_times_F32(cxt, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_lcg_multiple_times_F64_symbol	qb_do_lcg_multiple_times_F64
#else
void qb_do_lcg_multiple_times_F64_symbol(qb_interpreter_context *cxt, float64_t *res_ptr, uint32_t res_count) {
	qb_do_lcg_multiple_times_F64(cxt, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_2x_F64_symbol	qb_do_length_2x_F64
#else
void qb_do_length_2x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_length_2x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_2x_multiple_times_F32_symbol	qb_do_length_2x_multiple_times_F32
#else
void qb_do_length_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_length_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_2x_multiple_times_F64_symbol	qb_do_length_2x_multiple_times_F64
#else
void qb_do_length_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_length_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_3x_F64_symbol	qb_do_length_3x_F64
#else
void qb_do_length_3x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_length_3x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_3x_multiple_times_F32_symbol	qb_do_length_3x_multiple_times_F32
#else
void qb_do_length_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_length_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_3x_multiple_times_F64_symbol	qb_do_length_3x_multiple_times_F64
#else
void qb_do_length_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_length_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_4x_F64_symbol	qb_do_length_4x_F64
#else
void qb_do_length_4x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_length_4x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_4x_multiple_times_F32_symbol	qb_do_length_4x_multiple_times_F32
#else
void qb_do_length_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_length_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_4x_multiple_times_F64_symbol	qb_do_length_4x_multiple_times_F64
#else
void qb_do_length_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_length_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_F32_symbol	qb_do_length_F32
#else
void qb_do_length_F32_symbol(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_length_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_F64_symbol	qb_do_length_F64
#else
void qb_do_length_F64_symbol(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_length_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_multiple_times_F32_symbol	qb_do_length_multiple_times_F32
#else
void qb_do_length_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_length_multiple_times_F32(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_length_multiple_times_F64_symbol	qb_do_length_multiple_times_F64
#else
void qb_do_length_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_length_multiple_times_F64(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_F32_symbol	qb_do_less_than_or_equal_vector_multiple_times_F32
#else
void qb_do_less_than_or_equal_vector_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_F64_symbol	qb_do_less_than_or_equal_vector_multiple_times_F64
#else
void qb_do_less_than_or_equal_vector_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_S08_symbol	qb_do_less_than_or_equal_vector_multiple_times_S08
#else
void qb_do_less_than_or_equal_vector_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_S16_symbol	qb_do_less_than_or_equal_vector_multiple_times_S16
#else
void qb_do_less_than_or_equal_vector_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_S32_symbol	qb_do_less_than_or_equal_vector_multiple_times_S32
#else
void qb_do_less_than_or_equal_vector_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_S64_symbol	qb_do_less_than_or_equal_vector_multiple_times_S64
#else
void qb_do_less_than_or_equal_vector_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_U08_symbol	qb_do_less_than_or_equal_vector_multiple_times_U08
#else
void qb_do_less_than_or_equal_vector_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_U16_symbol	qb_do_less_than_or_equal_vector_multiple_times_U16
#else
void qb_do_less_than_or_equal_vector_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_U32_symbol	qb_do_less_than_or_equal_vector_multiple_times_U32
#else
void qb_do_less_than_or_equal_vector_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_or_equal_vector_multiple_times_U64_symbol	qb_do_less_than_or_equal_vector_multiple_times_U64
#else
void qb_do_less_than_or_equal_vector_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_or_equal_vector_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_F32_symbol	qb_do_less_than_vector_multiple_times_F32
#else
void qb_do_less_than_vector_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_F64_symbol	qb_do_less_than_vector_multiple_times_F64
#else
void qb_do_less_than_vector_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_S08_symbol	qb_do_less_than_vector_multiple_times_S08
#else
void qb_do_less_than_vector_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_S16_symbol	qb_do_less_than_vector_multiple_times_S16
#else
void qb_do_less_than_vector_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_S32_symbol	qb_do_less_than_vector_multiple_times_S32
#else
void qb_do_less_than_vector_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_S64_symbol	qb_do_less_than_vector_multiple_times_S64
#else
void qb_do_less_than_vector_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_U08_symbol	qb_do_less_than_vector_multiple_times_U08
#else
void qb_do_less_than_vector_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_U16_symbol	qb_do_less_than_vector_multiple_times_U16
#else
void qb_do_less_than_vector_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_U32_symbol	qb_do_less_than_vector_multiple_times_U32
#else
void qb_do_less_than_vector_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_less_than_vector_multiple_times_U64_symbol	qb_do_less_than_vector_multiple_times_U64
#else
void qb_do_less_than_vector_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_less_than_vector_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log10_multiple_times_F32_symbol	qb_do_log10_multiple_times_F32
#else
void qb_do_log10_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_log10_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log10_multiple_times_F64_symbol	qb_do_log10_multiple_times_F64
#else
void qb_do_log10_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_log10_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log1p_multiple_times_F32_symbol	qb_do_log1p_multiple_times_F32
#else
void qb_do_log1p_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_log1p_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log1p_multiple_times_F64_symbol	qb_do_log1p_multiple_times_F64
#else
void qb_do_log1p_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_log1p_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log2_multiple_times_F32_symbol	qb_do_log2_multiple_times_F32
#else
void qb_do_log2_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_log2_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log2_multiple_times_F64_symbol	qb_do_log2_multiple_times_F64
#else
void qb_do_log2_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_log2_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log_multiple_times_F32_symbol	qb_do_log_multiple_times_F32
#else
void qb_do_log_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_log_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_log_multiple_times_F64_symbol	qb_do_log_multiple_times_F64
#else
void qb_do_log_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_log_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_F32_symbol	qb_do_max_multiple_times_F32
#else
void qb_do_max_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_F64_symbol	qb_do_max_multiple_times_F64
#else
void qb_do_max_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_S08_symbol	qb_do_max_multiple_times_S08
#else
void qb_do_max_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_S16_symbol	qb_do_max_multiple_times_S16
#else
void qb_do_max_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_S32_symbol	qb_do_max_multiple_times_S32
#else
void qb_do_max_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_S64_symbol	qb_do_max_multiple_times_S64
#else
void qb_do_max_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_U08_symbol	qb_do_max_multiple_times_U08
#else
void qb_do_max_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_U16_symbol	qb_do_max_multiple_times_U16
#else
void qb_do_max_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_U32_symbol	qb_do_max_multiple_times_U32
#else
void qb_do_max_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_max_multiple_times_U64_symbol	qb_do_max_multiple_times_U64
#else
void qb_do_max_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_max_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_F32_symbol	qb_do_min_multiple_times_F32
#else
void qb_do_min_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_F64_symbol	qb_do_min_multiple_times_F64
#else
void qb_do_min_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_S08_symbol	qb_do_min_multiple_times_S08
#else
void qb_do_min_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_S16_symbol	qb_do_min_multiple_times_S16
#else
void qb_do_min_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_S32_symbol	qb_do_min_multiple_times_S32
#else
void qb_do_min_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_S64_symbol	qb_do_min_multiple_times_S64
#else
void qb_do_min_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_U08_symbol	qb_do_min_multiple_times_U08
#else
void qb_do_min_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_U16_symbol	qb_do_min_multiple_times_U16
#else
void qb_do_min_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_U32_symbol	qb_do_min_multiple_times_U32
#else
void qb_do_min_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_min_multiple_times_U64_symbol	qb_do_min_multiple_times_U64
#else
void qb_do_min_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_min_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_mix_multiple_times_F32_symbol	qb_do_mix_multiple_times_F32
#else
void qb_do_mix_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_mix_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_mix_multiple_times_F64_symbol	qb_do_mix_multiple_times_F64
#else
void qb_do_mix_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_mix_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_2x_multiple_times_F32_symbol	qb_do_modulo_2x_multiple_times_F32
#else
void qb_do_modulo_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_2x_multiple_times_F64_symbol	qb_do_modulo_2x_multiple_times_F64
#else
void qb_do_modulo_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_3x_multiple_times_F32_symbol	qb_do_modulo_3x_multiple_times_F32
#else
void qb_do_modulo_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_3x_multiple_times_F64_symbol	qb_do_modulo_3x_multiple_times_F64
#else
void qb_do_modulo_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_4x_multiple_times_F32_symbol	qb_do_modulo_4x_multiple_times_F32
#else
void qb_do_modulo_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_4x_multiple_times_F64_symbol	qb_do_modulo_4x_multiple_times_F64
#else
void qb_do_modulo_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_F32_symbol	qb_do_modulo_multiple_times_F32
#else
void qb_do_modulo_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_F64_symbol	qb_do_modulo_multiple_times_F64
#else
void qb_do_modulo_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_S08_symbol	qb_do_modulo_multiple_times_S08
#else
void qb_do_modulo_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_S16_symbol	qb_do_modulo_multiple_times_S16
#else
void qb_do_modulo_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_S32_symbol	qb_do_modulo_multiple_times_S32
#else
void qb_do_modulo_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_S64_symbol	qb_do_modulo_multiple_times_S64
#else
void qb_do_modulo_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_U08_symbol	qb_do_modulo_multiple_times_U08
#else
void qb_do_modulo_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_U16_symbol	qb_do_modulo_multiple_times_U16
#else
void qb_do_modulo_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_U32_symbol	qb_do_modulo_multiple_times_U32
#else
void qb_do_modulo_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_modulo_multiple_times_U64_symbol	qb_do_modulo_multiple_times_U64
#else
void qb_do_modulo_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_modulo_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_2x_multiple_times_F32_symbol	qb_do_multiply_2x_multiple_times_F32
#else
void qb_do_multiply_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_2x_multiple_times_F64_symbol	qb_do_multiply_2x_multiple_times_F64
#else
void qb_do_multiply_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_3x_multiple_times_F32_symbol	qb_do_multiply_3x_multiple_times_F32
#else
void qb_do_multiply_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_3x_multiple_times_F64_symbol	qb_do_multiply_3x_multiple_times_F64
#else
void qb_do_multiply_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_4x_multiple_times_F32_symbol	qb_do_multiply_4x_multiple_times_F32
#else
void qb_do_multiply_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_4x_multiple_times_F64_symbol	qb_do_multiply_4x_multiple_times_F64
#else
void qb_do_multiply_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_2x_multiple_times_F32_symbol	qb_do_multiply_accumulate_2x_multiple_times_F32
#else
void qb_do_multiply_accumulate_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_2x_multiple_times_F64_symbol	qb_do_multiply_accumulate_2x_multiple_times_F64
#else
void qb_do_multiply_accumulate_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_3x_multiple_times_F32_symbol	qb_do_multiply_accumulate_3x_multiple_times_F32
#else
void qb_do_multiply_accumulate_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_3x_multiple_times_F64_symbol	qb_do_multiply_accumulate_3x_multiple_times_F64
#else
void qb_do_multiply_accumulate_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_4x_multiple_times_F32_symbol	qb_do_multiply_accumulate_4x_multiple_times_F32
#else
void qb_do_multiply_accumulate_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_4x_multiple_times_F64_symbol	qb_do_multiply_accumulate_4x_multiple_times_F64
#else
void qb_do_multiply_accumulate_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_F32_symbol	qb_do_multiply_accumulate_multiple_times_F32
#else
void qb_do_multiply_accumulate_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_F64_symbol	qb_do_multiply_accumulate_multiple_times_F64
#else
void qb_do_multiply_accumulate_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_S32_symbol	qb_do_multiply_accumulate_multiple_times_S32
#else
void qb_do_multiply_accumulate_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_S64_symbol	qb_do_multiply_accumulate_multiple_times_S64
#else
void qb_do_multiply_accumulate_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *op3_ptr, uint32_t op3_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_U32_symbol	qb_do_multiply_accumulate_multiple_times_U32
#else
void qb_do_multiply_accumulate_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *op3_ptr, uint32_t op3_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_accumulate_multiple_times_U64_symbol	qb_do_multiply_accumulate_multiple_times_U64
#else
void qb_do_multiply_accumulate_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *op3_ptr, uint32_t op3_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_accumulate_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_2x_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_2x_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_3x_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_3x_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_3x_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_3x_F32(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_3x_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_3x_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_4x_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_4x_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_4x_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, float32_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_4x_F32(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_4x_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_4x_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_matrix_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32_symbol	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32
#else
void qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64_symbol	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64
#else
void qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_2x_F64_symbol	qb_do_multiply_matrix_by_vector_cm_2x_F64
#else
void qb_do_multiply_matrix_by_vector_cm_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_vector_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_3x_F64_symbol	qb_do_multiply_matrix_by_vector_cm_3x_F64
#else
void qb_do_multiply_matrix_by_vector_cm_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_vector_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_4x_F64_symbol	qb_do_multiply_matrix_by_vector_cm_4x_F64
#else
void qb_do_multiply_matrix_by_vector_cm_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_vector_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32_symbol	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32
#else
void qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64_symbol	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64
#else
void qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_F32_symbol	qb_do_multiply_matrix_by_vector_cm_F32
#else
void qb_do_multiply_matrix_by_vector_cm_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_multiply_matrix_by_vector_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_F64_symbol	qb_do_multiply_matrix_by_vector_cm_F64
#else
void qb_do_multiply_matrix_by_vector_cm_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_multiply_matrix_by_vector_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_multiple_times_F32_symbol	qb_do_multiply_matrix_by_vector_cm_multiple_times_F32
#else
void qb_do_multiply_matrix_by_vector_cm_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_matrix_by_vector_cm_multiple_times_F64_symbol	qb_do_multiply_matrix_by_vector_cm_multiple_times_F64
#else
void qb_do_multiply_matrix_by_vector_cm_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_matrix_by_vector_cm_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_F32_symbol	qb_do_multiply_multiple_times_F32
#else
void qb_do_multiply_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_F64_symbol	qb_do_multiply_multiple_times_F64
#else
void qb_do_multiply_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_S08_symbol	qb_do_multiply_multiple_times_S08
#else
void qb_do_multiply_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_S16_symbol	qb_do_multiply_multiple_times_S16
#else
void qb_do_multiply_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_S32_symbol	qb_do_multiply_multiple_times_S32
#else
void qb_do_multiply_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_S64_symbol	qb_do_multiply_multiple_times_S64
#else
void qb_do_multiply_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_U08_symbol	qb_do_multiply_multiple_times_U08
#else
void qb_do_multiply_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_U16_symbol	qb_do_multiply_multiple_times_U16
#else
void qb_do_multiply_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_U32_symbol	qb_do_multiply_multiple_times_U32
#else
void qb_do_multiply_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_multiple_times_U64_symbol	qb_do_multiply_multiple_times_U64
#else
void qb_do_multiply_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_2x_F64_symbol	qb_do_multiply_vector_by_matrix_cm_2x_F64
#else
void qb_do_multiply_vector_by_matrix_cm_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_vector_by_matrix_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32_symbol	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32
#else
void qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64_symbol	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64
#else
void qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_3x_F64_symbol	qb_do_multiply_vector_by_matrix_cm_3x_F64
#else
void qb_do_multiply_vector_by_matrix_cm_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_vector_by_matrix_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32_symbol	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32
#else
void qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64_symbol	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64
#else
void qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_4x_F64_symbol	qb_do_multiply_vector_by_matrix_cm_4x_F64
#else
void qb_do_multiply_vector_by_matrix_cm_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_multiply_vector_by_matrix_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32_symbol	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32
#else
void qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64_symbol	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64
#else
void qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_F32_symbol	qb_do_multiply_vector_by_matrix_cm_F32
#else
void qb_do_multiply_vector_by_matrix_cm_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_multiply_vector_by_matrix_cm_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_F64_symbol	qb_do_multiply_vector_by_matrix_cm_F64
#else
void qb_do_multiply_vector_by_matrix_cm_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_multiply_vector_by_matrix_cm_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_multiple_times_F32_symbol	qb_do_multiply_vector_by_matrix_cm_multiple_times_F32
#else
void qb_do_multiply_vector_by_matrix_cm_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_multiply_vector_by_matrix_cm_multiple_times_F64_symbol	qb_do_multiply_vector_by_matrix_cm_multiple_times_F64
#else
void qb_do_multiply_vector_by_matrix_cm_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_multiply_vector_by_matrix_cm_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_2x_multiple_times_F32_symbol	qb_do_negate_2x_multiple_times_F32
#else
void qb_do_negate_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_negate_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_2x_multiple_times_F64_symbol	qb_do_negate_2x_multiple_times_F64
#else
void qb_do_negate_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_negate_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_3x_multiple_times_F32_symbol	qb_do_negate_3x_multiple_times_F32
#else
void qb_do_negate_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_negate_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_3x_multiple_times_F64_symbol	qb_do_negate_3x_multiple_times_F64
#else
void qb_do_negate_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_negate_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_4x_multiple_times_F32_symbol	qb_do_negate_4x_multiple_times_F32
#else
void qb_do_negate_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_negate_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_4x_multiple_times_F64_symbol	qb_do_negate_4x_multiple_times_F64
#else
void qb_do_negate_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_negate_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_F32_symbol	qb_do_negate_multiple_times_F32
#else
void qb_do_negate_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_F64_symbol	qb_do_negate_multiple_times_F64
#else
void qb_do_negate_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_I08_symbol	qb_do_negate_multiple_times_I08
#else
void qb_do_negate_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_I08(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_I16_symbol	qb_do_negate_multiple_times_I16
#else
void qb_do_negate_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_I16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_I32_symbol	qb_do_negate_multiple_times_I32
#else
void qb_do_negate_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_negate_multiple_times_I64_symbol	qb_do_negate_multiple_times_I64
#else
void qb_do_negate_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_negate_multiple_times_I64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_2x_F64_symbol	qb_do_normalize_2x_F64
#else
void qb_do_normalize_2x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_normalize_2x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_2x_multiple_times_F32_symbol	qb_do_normalize_2x_multiple_times_F32
#else
void qb_do_normalize_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_2x_multiple_times_F64_symbol	qb_do_normalize_2x_multiple_times_F64
#else
void qb_do_normalize_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_3x_F64_symbol	qb_do_normalize_3x_F64
#else
void qb_do_normalize_3x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_normalize_3x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_3x_multiple_times_F32_symbol	qb_do_normalize_3x_multiple_times_F32
#else
void qb_do_normalize_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_3x_multiple_times_F64_symbol	qb_do_normalize_3x_multiple_times_F64
#else
void qb_do_normalize_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_4x_F64_symbol	qb_do_normalize_4x_F64
#else
void qb_do_normalize_4x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_normalize_4x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_4x_multiple_times_F32_symbol	qb_do_normalize_4x_multiple_times_F32
#else
void qb_do_normalize_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_4x_multiple_times_F64_symbol	qb_do_normalize_4x_multiple_times_F64
#else
void qb_do_normalize_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_F32_symbol	qb_do_normalize_F32
#else
void qb_do_normalize_F32_symbol(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_normalize_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_F64_symbol	qb_do_normalize_F64
#else
void qb_do_normalize_F64_symbol(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_normalize_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_multiple_times_F32_symbol	qb_do_normalize_multiple_times_F32
#else
void qb_do_normalize_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_multiple_times_F32(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_normalize_multiple_times_F64_symbol	qb_do_normalize_multiple_times_F64
#else
void qb_do_normalize_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_normalize_multiple_times_F64(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_F32_symbol	qb_do_not_equal_vector_multiple_times_F32
#else
void qb_do_not_equal_vector_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_F64_symbol	qb_do_not_equal_vector_multiple_times_F64
#else
void qb_do_not_equal_vector_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_I08_symbol	qb_do_not_equal_vector_multiple_times_I08
#else
void qb_do_not_equal_vector_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_I16_symbol	qb_do_not_equal_vector_multiple_times_I16
#else
void qb_do_not_equal_vector_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_I32_symbol	qb_do_not_equal_vector_multiple_times_I32
#else
void qb_do_not_equal_vector_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_equal_vector_multiple_times_I64_symbol	qb_do_not_equal_vector_multiple_times_I64
#else
void qb_do_not_equal_vector_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_equal_vector_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_not_vector_multiple_times_I32_symbol	qb_do_not_vector_multiple_times_I32
#else
void qb_do_not_vector_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_not_vector_multiple_times_I32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_pow_multiple_times_F32_symbol	qb_do_pow_multiple_times_F32
#else
void qb_do_pow_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_pow_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_pow_multiple_times_F64_symbol	qb_do_pow_multiple_times_F64
#else
void qb_do_pow_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_pow_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_F32_symbol	qb_do_print_multidimensional_variable_F32
#else
void qb_do_print_multidimensional_variable_F32_symbol(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_F32(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_F64_symbol	qb_do_print_multidimensional_variable_F64
#else
void qb_do_print_multidimensional_variable_F64_symbol(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_F64(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_S08_symbol	qb_do_print_multidimensional_variable_S08
#else
void qb_do_print_multidimensional_variable_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_S08(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_S16_symbol	qb_do_print_multidimensional_variable_S16
#else
void qb_do_print_multidimensional_variable_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_S16(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_S32_symbol	qb_do_print_multidimensional_variable_S32
#else
void qb_do_print_multidimensional_variable_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_S32(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_S64_symbol	qb_do_print_multidimensional_variable_S64
#else
void qb_do_print_multidimensional_variable_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_S64(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_U08_symbol	qb_do_print_multidimensional_variable_U08
#else
void qb_do_print_multidimensional_variable_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_U08(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_U16_symbol	qb_do_print_multidimensional_variable_U16
#else
void qb_do_print_multidimensional_variable_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_U16(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_U32_symbol	qb_do_print_multidimensional_variable_U32
#else
void qb_do_print_multidimensional_variable_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_U32(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_multidimensional_variable_U64_symbol	qb_do_print_multidimensional_variable_U64
#else
void qb_do_print_multidimensional_variable_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count) {
	qb_do_print_multidimensional_variable_U64(cxt, op1_ptr, op1_count, op2_ptr, op2_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_F32_symbol	qb_do_print_variable_F32
#else
void qb_do_print_variable_F32_symbol(qb_interpreter_context *cxt, float32_t op1) {
	qb_do_print_variable_F32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_F64_symbol	qb_do_print_variable_F64
#else
void qb_do_print_variable_F64_symbol(qb_interpreter_context *cxt, float64_t op1) {
	qb_do_print_variable_F64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_S08_symbol	qb_do_print_variable_S08
#else
void qb_do_print_variable_S08_symbol(qb_interpreter_context *cxt, int8_t op1) {
	qb_do_print_variable_S08(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_S16_symbol	qb_do_print_variable_S16
#else
void qb_do_print_variable_S16_symbol(qb_interpreter_context *cxt, int16_t op1) {
	qb_do_print_variable_S16(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_S32_symbol	qb_do_print_variable_S32
#else
void qb_do_print_variable_S32_symbol(qb_interpreter_context *cxt, int32_t op1) {
	qb_do_print_variable_S32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_S64_symbol	qb_do_print_variable_S64
#else
void qb_do_print_variable_S64_symbol(qb_interpreter_context *cxt, int64_t op1) {
	qb_do_print_variable_S64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_U08_symbol	qb_do_print_variable_U08
#else
void qb_do_print_variable_U08_symbol(qb_interpreter_context *cxt, uint8_t op1) {
	qb_do_print_variable_U08(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_U16_symbol	qb_do_print_variable_U16
#else
void qb_do_print_variable_U16_symbol(qb_interpreter_context *cxt, uint16_t op1) {
	qb_do_print_variable_U16(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_U32_symbol	qb_do_print_variable_U32
#else
void qb_do_print_variable_U32_symbol(qb_interpreter_context *cxt, uint32_t op1) {
	qb_do_print_variable_U32(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_U64_symbol	qb_do_print_variable_U64
#else
void qb_do_print_variable_U64_symbol(qb_interpreter_context *cxt, uint64_t op1) {
	qb_do_print_variable_U64(cxt, op1);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_F32_symbol	qb_do_print_variable_multiple_times_F32
#else
void qb_do_print_variable_multiple_times_F32_symbol(qb_interpreter_context *cxt, float32_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_F32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_F64_symbol	qb_do_print_variable_multiple_times_F64
#else
void qb_do_print_variable_multiple_times_F64_symbol(qb_interpreter_context *cxt, float64_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_F64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_S08_symbol	qb_do_print_variable_multiple_times_S08
#else
void qb_do_print_variable_multiple_times_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_S08(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_S16_symbol	qb_do_print_variable_multiple_times_S16
#else
void qb_do_print_variable_multiple_times_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_S16(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_S32_symbol	qb_do_print_variable_multiple_times_S32
#else
void qb_do_print_variable_multiple_times_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_S32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_S64_symbol	qb_do_print_variable_multiple_times_S64
#else
void qb_do_print_variable_multiple_times_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_S64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_U08_symbol	qb_do_print_variable_multiple_times_U08
#else
void qb_do_print_variable_multiple_times_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_U08(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_U16_symbol	qb_do_print_variable_multiple_times_U16
#else
void qb_do_print_variable_multiple_times_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_U16(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_U32_symbol	qb_do_print_variable_multiple_times_U32
#else
void qb_do_print_variable_multiple_times_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_U32(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_print_variable_multiple_times_U64_symbol	qb_do_print_variable_multiple_times_U64
#else
void qb_do_print_variable_multiple_times_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count) {
	qb_do_print_variable_multiple_times_U64(cxt, op1_ptr, op1_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_radian_to_degree_multiple_times_F32_symbol	qb_do_radian_to_degree_multiple_times_F32
#else
void qb_do_radian_to_degree_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_radian_to_degree_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_radian_to_degree_multiple_times_F64_symbol	qb_do_radian_to_degree_multiple_times_F64
#else
void qb_do_radian_to_degree_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_radian_to_degree_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_S08_symbol	qb_do_random_S08
#else
void qb_do_random_S08_symbol(qb_interpreter_context *cxt, int8_t op1, int8_t op2, int8_t *res_ptr) {
	qb_do_random_S08(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_S16_symbol	qb_do_random_S16
#else
void qb_do_random_S16_symbol(qb_interpreter_context *cxt, int16_t op1, int16_t op2, int16_t *res_ptr) {
	qb_do_random_S16(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_S32_symbol	qb_do_random_S32
#else
void qb_do_random_S32_symbol(qb_interpreter_context *cxt, int32_t op1, int32_t op2, int32_t *res_ptr) {
	qb_do_random_S32(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_S64_symbol	qb_do_random_S64
#else
void qb_do_random_S64_symbol(qb_interpreter_context *cxt, int64_t op1, int64_t op2, int64_t *res_ptr) {
	qb_do_random_S64(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_U08_symbol	qb_do_random_U08
#else
void qb_do_random_U08_symbol(qb_interpreter_context *cxt, uint8_t op1, uint8_t op2, uint8_t *res_ptr) {
	qb_do_random_U08(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_U16_symbol	qb_do_random_U16
#else
void qb_do_random_U16_symbol(qb_interpreter_context *cxt, uint16_t op1, uint16_t op2, uint16_t *res_ptr) {
	qb_do_random_U16(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_U32_symbol	qb_do_random_U32
#else
void qb_do_random_U32_symbol(qb_interpreter_context *cxt, uint32_t op1, uint32_t op2, uint32_t *res_ptr) {
	qb_do_random_U32(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_U64_symbol	qb_do_random_U64
#else
void qb_do_random_U64_symbol(qb_interpreter_context *cxt, uint64_t op1, uint64_t op2, uint64_t *res_ptr) {
	qb_do_random_U64(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_S08_symbol	qb_do_random_mt_S08
#else
void qb_do_random_mt_S08_symbol(qb_interpreter_context *cxt, int8_t op1, int8_t op2, int8_t *res_ptr) {
	qb_do_random_mt_S08(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_S16_symbol	qb_do_random_mt_S16
#else
void qb_do_random_mt_S16_symbol(qb_interpreter_context *cxt, int16_t op1, int16_t op2, int16_t *res_ptr) {
	qb_do_random_mt_S16(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_S32_symbol	qb_do_random_mt_S32
#else
void qb_do_random_mt_S32_symbol(qb_interpreter_context *cxt, int32_t op1, int32_t op2, int32_t *res_ptr) {
	qb_do_random_mt_S32(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_S64_symbol	qb_do_random_mt_S64
#else
void qb_do_random_mt_S64_symbol(qb_interpreter_context *cxt, int64_t op1, int64_t op2, int64_t *res_ptr) {
	qb_do_random_mt_S64(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_U08_symbol	qb_do_random_mt_U08
#else
void qb_do_random_mt_U08_symbol(qb_interpreter_context *cxt, uint8_t op1, uint8_t op2, uint8_t *res_ptr) {
	qb_do_random_mt_U08(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_U16_symbol	qb_do_random_mt_U16
#else
void qb_do_random_mt_U16_symbol(qb_interpreter_context *cxt, uint16_t op1, uint16_t op2, uint16_t *res_ptr) {
	qb_do_random_mt_U16(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_U32_symbol	qb_do_random_mt_U32
#else
void qb_do_random_mt_U32_symbol(qb_interpreter_context *cxt, uint32_t op1, uint32_t op2, uint32_t *res_ptr) {
	qb_do_random_mt_U32(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_U64_symbol	qb_do_random_mt_U64
#else
void qb_do_random_mt_U64_symbol(qb_interpreter_context *cxt, uint64_t op1, uint64_t op2, uint64_t *res_ptr) {
	qb_do_random_mt_U64(cxt, op1, op2, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_S08_symbol	qb_do_random_mt_multiple_times_S08
#else
void qb_do_random_mt_multiple_times_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_S08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_S16_symbol	qb_do_random_mt_multiple_times_S16
#else
void qb_do_random_mt_multiple_times_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_S16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_S32_symbol	qb_do_random_mt_multiple_times_S32
#else
void qb_do_random_mt_multiple_times_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_S32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_S64_symbol	qb_do_random_mt_multiple_times_S64
#else
void qb_do_random_mt_multiple_times_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_S64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_U08_symbol	qb_do_random_mt_multiple_times_U08
#else
void qb_do_random_mt_multiple_times_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_U08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_U16_symbol	qb_do_random_mt_multiple_times_U16
#else
void qb_do_random_mt_multiple_times_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_U16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_U32_symbol	qb_do_random_mt_multiple_times_U32
#else
void qb_do_random_mt_multiple_times_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_U32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_mt_multiple_times_U64_symbol	qb_do_random_mt_multiple_times_U64
#else
void qb_do_random_mt_multiple_times_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_random_mt_multiple_times_U64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_S08_symbol	qb_do_random_multiple_times_S08
#else
void qb_do_random_multiple_times_S08_symbol(qb_interpreter_context *cxt, int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_S08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_S16_symbol	qb_do_random_multiple_times_S16
#else
void qb_do_random_multiple_times_S16_symbol(qb_interpreter_context *cxt, int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_S16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_S32_symbol	qb_do_random_multiple_times_S32
#else
void qb_do_random_multiple_times_S32_symbol(qb_interpreter_context *cxt, int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_S32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_S64_symbol	qb_do_random_multiple_times_S64
#else
void qb_do_random_multiple_times_S64_symbol(qb_interpreter_context *cxt, int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_S64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_U08_symbol	qb_do_random_multiple_times_U08
#else
void qb_do_random_multiple_times_U08_symbol(qb_interpreter_context *cxt, uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_U08(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_U16_symbol	qb_do_random_multiple_times_U16
#else
void qb_do_random_multiple_times_U16_symbol(qb_interpreter_context *cxt, uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_U16(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_U32_symbol	qb_do_random_multiple_times_U32
#else
void qb_do_random_multiple_times_U32_symbol(qb_interpreter_context *cxt, uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_U32(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_random_multiple_times_U64_symbol	qb_do_random_multiple_times_U64
#else
void qb_do_random_multiple_times_U64_symbol(qb_interpreter_context *cxt, uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_random_multiple_times_U64(cxt, op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_F32_symbol	qb_do_range_F32
#else
void qb_do_range_F32_symbol(float32_t op1, float32_t op2, float32_t op3, uint32_t string_length, float32_t *res_ptr, uint32_t res_count) {
	qb_do_range_F32(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_F64_symbol	qb_do_range_F64
#else
void qb_do_range_F64_symbol(float64_t op1, float64_t op2, float64_t op3, uint32_t string_length, float64_t *res_ptr, uint32_t res_count) {
	qb_do_range_F64(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_S08_symbol	qb_do_range_S08
#else
void qb_do_range_S08_symbol(int8_t op1, int8_t op2, int8_t op3, uint32_t string_length, int8_t *res_ptr, uint32_t res_count) {
	qb_do_range_S08(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_S16_symbol	qb_do_range_S16
#else
void qb_do_range_S16_symbol(int16_t op1, int16_t op2, int16_t op3, uint32_t string_length, int16_t *res_ptr, uint32_t res_count) {
	qb_do_range_S16(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_S32_symbol	qb_do_range_S32
#else
void qb_do_range_S32_symbol(int32_t op1, int32_t op2, int32_t op3, uint32_t string_length, int32_t *res_ptr, uint32_t res_count) {
	qb_do_range_S32(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_S64_symbol	qb_do_range_S64
#else
void qb_do_range_S64_symbol(int64_t op1, int64_t op2, int64_t op3, uint32_t string_length, int64_t *res_ptr, uint32_t res_count) {
	qb_do_range_S64(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_U08_symbol	qb_do_range_U08
#else
void qb_do_range_U08_symbol(uint8_t op1, uint8_t op2, int8_t op3, uint32_t string_length, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_range_U08(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_U16_symbol	qb_do_range_U16
#else
void qb_do_range_U16_symbol(uint16_t op1, uint16_t op2, int16_t op3, uint32_t string_length, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_range_U16(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_U32_symbol	qb_do_range_U32
#else
void qb_do_range_U32_symbol(uint32_t op1, uint32_t op2, int32_t op3, uint32_t string_length, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_range_U32(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_range_U64_symbol	qb_do_range_U64
#else
void qb_do_range_U64_symbol(uint64_t op1, uint64_t op2, int64_t op3, uint32_t string_length, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_range_U64(op1, op2, op3, string_length, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_2x_F64_symbol	qb_do_reflect_2x_F64
#else
void qb_do_reflect_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_reflect_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_2x_multiple_times_F32_symbol	qb_do_reflect_2x_multiple_times_F32
#else
void qb_do_reflect_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_2x_multiple_times_F64_symbol	qb_do_reflect_2x_multiple_times_F64
#else
void qb_do_reflect_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_3x_F64_symbol	qb_do_reflect_3x_F64
#else
void qb_do_reflect_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_reflect_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_3x_multiple_times_F32_symbol	qb_do_reflect_3x_multiple_times_F32
#else
void qb_do_reflect_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_3x_multiple_times_F64_symbol	qb_do_reflect_3x_multiple_times_F64
#else
void qb_do_reflect_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_4x_F64_symbol	qb_do_reflect_4x_F64
#else
void qb_do_reflect_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_reflect_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_4x_multiple_times_F32_symbol	qb_do_reflect_4x_multiple_times_F32
#else
void qb_do_reflect_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_4x_multiple_times_F64_symbol	qb_do_reflect_4x_multiple_times_F64
#else
void qb_do_reflect_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_F32_symbol	qb_do_reflect_F32
#else
void qb_do_reflect_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_reflect_F32(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_F64_symbol	qb_do_reflect_F64
#else
void qb_do_reflect_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_reflect_F64(op1_ptr, op2_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_multiple_times_F32_symbol	qb_do_reflect_multiple_times_F32
#else
void qb_do_reflect_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reflect_multiple_times_F64_symbol	qb_do_reflect_multiple_times_F64
#else
void qb_do_reflect_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_reflect_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_2x_F64_symbol	qb_do_refract_2x_F64
#else
void qb_do_refract_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	qb_do_refract_2x_F64(op1_ptr, op2_ptr, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_2x_multiple_times_F32_symbol	qb_do_refract_2x_multiple_times_F32
#else
void qb_do_refract_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	qb_do_refract_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_2x_multiple_times_F64_symbol	qb_do_refract_2x_multiple_times_F64
#else
void qb_do_refract_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	qb_do_refract_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_3x_F64_symbol	qb_do_refract_3x_F64
#else
void qb_do_refract_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	qb_do_refract_3x_F64(op1_ptr, op2_ptr, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_3x_multiple_times_F32_symbol	qb_do_refract_3x_multiple_times_F32
#else
void qb_do_refract_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	qb_do_refract_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_3x_multiple_times_F64_symbol	qb_do_refract_3x_multiple_times_F64
#else
void qb_do_refract_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	qb_do_refract_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_4x_F64_symbol	qb_do_refract_4x_F64
#else
void qb_do_refract_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, float64_t *res_ptr) {
	qb_do_refract_4x_F64(op1_ptr, op2_ptr, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_4x_multiple_times_F32_symbol	qb_do_refract_4x_multiple_times_F32
#else
void qb_do_refract_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, float32_t *res_ptr, uint32_t res_count) {
	qb_do_refract_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_4x_multiple_times_F64_symbol	qb_do_refract_4x_multiple_times_F64
#else
void qb_do_refract_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, float64_t *res_ptr, uint32_t res_count) {
	qb_do_refract_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_F32_symbol	qb_do_refract_F32
#else
void qb_do_refract_F32_symbol(float32_t *op1_ptr, float32_t *op2_ptr, float32_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr) {
	qb_do_refract_F32(op1_ptr, op2_ptr, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_F64_symbol	qb_do_refract_F64
#else
void qb_do_refract_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr) {
	qb_do_refract_F64(op1_ptr, op2_ptr, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_multiple_times_F32_symbol	qb_do_refract_multiple_times_F32
#else
void qb_do_refract_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_refract_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_refract_multiple_times_F64_symbol	qb_do_refract_multiple_times_F64
#else
void qb_do_refract_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t op3, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, uint32_t MATRIX2_ROWS, uint32_t MATRIX2_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_refract_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, MATRIX1_ROWS, MATRIX1_COLS, MATRIX2_ROWS, MATRIX2_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_remove_premultiplication_multiple_times_F32_symbol	qb_do_remove_premultiplication_multiple_times_F32
#else
void qb_do_remove_premultiplication_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_remove_premultiplication_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_remove_premultiplication_multiple_times_F64_symbol	qb_do_remove_premultiplication_multiple_times_F64
#else
void qb_do_remove_premultiplication_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_remove_premultiplication_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_F32_symbol	qb_do_reverse_sort_F32
#else
void qb_do_reverse_sort_F32_symbol(uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_F32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_F64_symbol	qb_do_reverse_sort_F64
#else
void qb_do_reverse_sort_F64_symbol(uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_F64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_S08_symbol	qb_do_reverse_sort_S08
#else
void qb_do_reverse_sort_S08_symbol(uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_S08(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_S16_symbol	qb_do_reverse_sort_S16
#else
void qb_do_reverse_sort_S16_symbol(uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_S16(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_S32_symbol	qb_do_reverse_sort_S32
#else
void qb_do_reverse_sort_S32_symbol(uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_S32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_S64_symbol	qb_do_reverse_sort_S64
#else
void qb_do_reverse_sort_S64_symbol(uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_S64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_U08_symbol	qb_do_reverse_sort_U08
#else
void qb_do_reverse_sort_U08_symbol(uint32_t op1, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_U08(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_U16_symbol	qb_do_reverse_sort_U16
#else
void qb_do_reverse_sort_U16_symbol(uint32_t op1, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_U16(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_U32_symbol	qb_do_reverse_sort_U32
#else
void qb_do_reverse_sort_U32_symbol(uint32_t op1, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_U32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_reverse_sort_U64_symbol	qb_do_reverse_sort_U64
#else
void qb_do_reverse_sort_U64_symbol(uint32_t op1, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_reverse_sort_U64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_round_multiple_times_F32_symbol	qb_do_round_multiple_times_F32
#else
void qb_do_round_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_round_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_round_multiple_times_F64_symbol	qb_do_round_multiple_times_F64
#else
void qb_do_round_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_round_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_rsqrt_multiple_times_F32_symbol	qb_do_rsqrt_multiple_times_F32
#else
void qb_do_rsqrt_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_rsqrt_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_rsqrt_multiple_times_F64_symbol	qb_do_rsqrt_multiple_times_F64
#else
void qb_do_rsqrt_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_rsqrt_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_3x_F32_symbol	qb_do_sample_bilinear_3x_F32
#else
void qb_do_sample_bilinear_3x_F32_symbol(float32_t *op1_ptr, uint32_t op2, uint32_t op3, float32_t op4, float32_t op5, float32_t *res_ptr) {
	qb_do_sample_bilinear_3x_F32(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_3x_F64_symbol	qb_do_sample_bilinear_3x_F64
#else
void qb_do_sample_bilinear_3x_F64_symbol(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	qb_do_sample_bilinear_3x_F64(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_3x_multiple_times_F32_symbol	qb_do_sample_bilinear_3x_multiple_times_F32
#else
void qb_do_sample_bilinear_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sample_bilinear_3x_multiple_times_F32(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_3x_multiple_times_F64_symbol	qb_do_sample_bilinear_3x_multiple_times_F64
#else
void qb_do_sample_bilinear_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sample_bilinear_3x_multiple_times_F64(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_4x_F32_symbol	qb_do_sample_bilinear_4x_F32
#else
void qb_do_sample_bilinear_4x_F32_symbol(float32_t *op1_ptr, uint32_t op2, uint32_t op3, float32_t op4, float32_t op5, float32_t *res_ptr) {
	qb_do_sample_bilinear_4x_F32(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_4x_F64_symbol	qb_do_sample_bilinear_4x_F64
#else
void qb_do_sample_bilinear_4x_F64_symbol(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	qb_do_sample_bilinear_4x_F64(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_4x_multiple_times_F32_symbol	qb_do_sample_bilinear_4x_multiple_times_F32
#else
void qb_do_sample_bilinear_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sample_bilinear_4x_multiple_times_F32(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_bilinear_4x_multiple_times_F64_symbol	qb_do_sample_bilinear_4x_multiple_times_F64
#else
void qb_do_sample_bilinear_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sample_bilinear_4x_multiple_times_F64(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_3x_F64_symbol	qb_do_sample_nearest_3x_F64
#else
void qb_do_sample_nearest_3x_F64_symbol(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	qb_do_sample_nearest_3x_F64(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_3x_multiple_times_F32_symbol	qb_do_sample_nearest_3x_multiple_times_F32
#else
void qb_do_sample_nearest_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sample_nearest_3x_multiple_times_F32(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_3x_multiple_times_F64_symbol	qb_do_sample_nearest_3x_multiple_times_F64
#else
void qb_do_sample_nearest_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sample_nearest_3x_multiple_times_F64(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_4x_F64_symbol	qb_do_sample_nearest_4x_F64
#else
void qb_do_sample_nearest_4x_F64_symbol(float64_t *op1_ptr, uint32_t op2, uint32_t op3, float64_t op4, float64_t op5, float64_t *res_ptr) {
	qb_do_sample_nearest_4x_F64(op1_ptr, op2, op3, op4, op5, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_4x_multiple_times_F32_symbol	qb_do_sample_nearest_4x_multiple_times_F32
#else
void qb_do_sample_nearest_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float32_t *op4_ptr, uint32_t op4_count, float32_t *op5_ptr, uint32_t op5_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sample_nearest_4x_multiple_times_F32(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sample_nearest_4x_multiple_times_F64_symbol	qb_do_sample_nearest_4x_multiple_times_F64
#else
void qb_do_sample_nearest_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t op2, uint32_t op3, float64_t *op4_ptr, uint32_t op4_count, float64_t *op5_ptr, uint32_t op5_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sample_nearest_4x_multiple_times_F64(op1_ptr, op1_count, op2, op3, op4_ptr, op4_count, op5_ptr, op5_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_S08_symbol	qb_do_shift_left_multiple_times_S08
#else
void qb_do_shift_left_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_S16_symbol	qb_do_shift_left_multiple_times_S16
#else
void qb_do_shift_left_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_S32_symbol	qb_do_shift_left_multiple_times_S32
#else
void qb_do_shift_left_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_S64_symbol	qb_do_shift_left_multiple_times_S64
#else
void qb_do_shift_left_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_U08_symbol	qb_do_shift_left_multiple_times_U08
#else
void qb_do_shift_left_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_U16_symbol	qb_do_shift_left_multiple_times_U16
#else
void qb_do_shift_left_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_U32_symbol	qb_do_shift_left_multiple_times_U32
#else
void qb_do_shift_left_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_left_multiple_times_U64_symbol	qb_do_shift_left_multiple_times_U64
#else
void qb_do_shift_left_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_shift_left_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_S08_symbol	qb_do_shift_right_multiple_times_S08
#else
void qb_do_shift_right_multiple_times_S08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_S08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_S16_symbol	qb_do_shift_right_multiple_times_S16
#else
void qb_do_shift_right_multiple_times_S16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_S16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_S32_symbol	qb_do_shift_right_multiple_times_S32
#else
void qb_do_shift_right_multiple_times_S32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_S32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_S64_symbol	qb_do_shift_right_multiple_times_S64
#else
void qb_do_shift_right_multiple_times_S64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_S64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_U08_symbol	qb_do_shift_right_multiple_times_U08
#else
void qb_do_shift_right_multiple_times_U08_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint8_t *op2_ptr, uint32_t op2_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_U08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_U16_symbol	qb_do_shift_right_multiple_times_U16
#else
void qb_do_shift_right_multiple_times_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint16_t *op2_ptr, uint32_t op2_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_U16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_U32_symbol	qb_do_shift_right_multiple_times_U32
#else
void qb_do_shift_right_multiple_times_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint32_t *op2_ptr, uint32_t op2_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_U32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shift_right_multiple_times_U64_symbol	qb_do_shift_right_multiple_times_U64
#else
void qb_do_shift_right_multiple_times_U64_symbol(uint64_t *op1_ptr, uint32_t op1_count, uint64_t *op2_ptr, uint32_t op2_count, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_shift_right_multiple_times_U64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_F32_symbol	qb_do_shuffle_F32
#else
void qb_do_shuffle_F32_symbol(qb_interpreter_context *cxt, uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_F32(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_F64_symbol	qb_do_shuffle_F64
#else
void qb_do_shuffle_F64_symbol(qb_interpreter_context *cxt, uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_F64(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_I08_symbol	qb_do_shuffle_I08
#else
void qb_do_shuffle_I08_symbol(qb_interpreter_context *cxt, uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_I08(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_I16_symbol	qb_do_shuffle_I16
#else
void qb_do_shuffle_I16_symbol(qb_interpreter_context *cxt, uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_I16(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_I32_symbol	qb_do_shuffle_I32
#else
void qb_do_shuffle_I32_symbol(qb_interpreter_context *cxt, uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_I32(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_shuffle_I64_symbol	qb_do_shuffle_I64
#else
void qb_do_shuffle_I64_symbol(qb_interpreter_context *cxt, uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	qb_do_shuffle_I64(cxt, op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sign_multiple_times_F32_symbol	qb_do_sign_multiple_times_F32
#else
void qb_do_sign_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sign_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sign_multiple_times_F64_symbol	qb_do_sign_multiple_times_F64
#else
void qb_do_sign_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sign_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sin_multiple_times_F32_symbol	qb_do_sin_multiple_times_F32
#else
void qb_do_sin_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sin_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sin_multiple_times_F64_symbol	qb_do_sin_multiple_times_F64
#else
void qb_do_sin_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sin_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sinh_multiple_times_F32_symbol	qb_do_sinh_multiple_times_F32
#else
void qb_do_sinh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sinh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sinh_multiple_times_F64_symbol	qb_do_sinh_multiple_times_F64
#else
void qb_do_sinh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sinh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_smooth_step_multiple_times_F32_symbol	qb_do_smooth_step_multiple_times_F32
#else
void qb_do_smooth_step_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *op3_ptr, uint32_t op3_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_smooth_step_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_smooth_step_multiple_times_F64_symbol	qb_do_smooth_step_multiple_times_F64
#else
void qb_do_smooth_step_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *op3_ptr, uint32_t op3_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_smooth_step_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3_ptr, op3_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_F32_symbol	qb_do_sort_F32
#else
void qb_do_sort_F32_symbol(uint32_t op1, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sort_F32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_F64_symbol	qb_do_sort_F64
#else
void qb_do_sort_F64_symbol(uint32_t op1, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sort_F64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_S08_symbol	qb_do_sort_S08
#else
void qb_do_sort_S08_symbol(uint32_t op1, int8_t *res_ptr, uint32_t res_count) {
	qb_do_sort_S08(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_S16_symbol	qb_do_sort_S16
#else
void qb_do_sort_S16_symbol(uint32_t op1, int16_t *res_ptr, uint32_t res_count) {
	qb_do_sort_S16(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_S32_symbol	qb_do_sort_S32
#else
void qb_do_sort_S32_symbol(uint32_t op1, int32_t *res_ptr, uint32_t res_count) {
	qb_do_sort_S32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_S64_symbol	qb_do_sort_S64
#else
void qb_do_sort_S64_symbol(uint32_t op1, int64_t *res_ptr, uint32_t res_count) {
	qb_do_sort_S64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_U08_symbol	qb_do_sort_U08
#else
void qb_do_sort_U08_symbol(uint32_t op1, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_sort_U08(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_U16_symbol	qb_do_sort_U16
#else
void qb_do_sort_U16_symbol(uint32_t op1, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_sort_U16(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_U32_symbol	qb_do_sort_U32
#else
void qb_do_sort_U32_symbol(uint32_t op1, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_sort_U32(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sort_U64_symbol	qb_do_sort_U64
#else
void qb_do_sort_U64_symbol(uint32_t op1, uint64_t *res_ptr, uint32_t res_count) {
	qb_do_sort_U64(op1, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sqrt_multiple_times_F32_symbol	qb_do_sqrt_multiple_times_F32
#else
void qb_do_sqrt_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_sqrt_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_sqrt_multiple_times_F64_symbol	qb_do_sqrt_multiple_times_F64
#else
void qb_do_sqrt_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_sqrt_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_step_multiple_times_F32_symbol	qb_do_step_multiple_times_F32
#else
void qb_do_step_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_step_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_step_multiple_times_F64_symbol	qb_do_step_multiple_times_F64
#else
void qb_do_step_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_step_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_F32_symbol	qb_do_subarray_position_F32
#else
void qb_do_subarray_position_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_F64_symbol	qb_do_subarray_position_F64
#else
void qb_do_subarray_position_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_I08_symbol	qb_do_subarray_position_I08
#else
void qb_do_subarray_position_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_I08(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_I16_symbol	qb_do_subarray_position_I16
#else
void qb_do_subarray_position_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_I16(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_I32_symbol	qb_do_subarray_position_I32
#else
void qb_do_subarray_position_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_I32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_I64_symbol	qb_do_subarray_position_I64
#else
void qb_do_subarray_position_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_I64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_F32_symbol	qb_do_subarray_position_from_end_F32
#else
void qb_do_subarray_position_from_end_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_F32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_F64_symbol	qb_do_subarray_position_from_end_F64
#else
void qb_do_subarray_position_from_end_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_F64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_I08_symbol	qb_do_subarray_position_from_end_I08
#else
void qb_do_subarray_position_from_end_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_I08(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_I16_symbol	qb_do_subarray_position_from_end_I16
#else
void qb_do_subarray_position_from_end_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_I16(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_I32_symbol	qb_do_subarray_position_from_end_I32
#else
void qb_do_subarray_position_from_end_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_I32(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subarray_position_from_end_I64_symbol	qb_do_subarray_position_from_end_I64
#else
void qb_do_subarray_position_from_end_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int32_t op3, int32_t *res_ptr) {
	qb_do_subarray_position_from_end_I64(op1_ptr, op1_count, op2_ptr, op2_count, op3, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_2x_multiple_times_F32_symbol	qb_do_subtract_2x_multiple_times_F32
#else
void qb_do_subtract_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_2x_multiple_times_F64_symbol	qb_do_subtract_2x_multiple_times_F64
#else
void qb_do_subtract_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_3x_multiple_times_F32_symbol	qb_do_subtract_3x_multiple_times_F32
#else
void qb_do_subtract_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_3x_multiple_times_F64_symbol	qb_do_subtract_3x_multiple_times_F64
#else
void qb_do_subtract_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_4x_multiple_times_F32_symbol	qb_do_subtract_4x_multiple_times_F32
#else
void qb_do_subtract_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_4x_multiple_times_F64_symbol	qb_do_subtract_4x_multiple_times_F64
#else
void qb_do_subtract_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_F32_symbol	qb_do_subtract_multiple_times_F32
#else
void qb_do_subtract_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_F64_symbol	qb_do_subtract_multiple_times_F64
#else
void qb_do_subtract_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_I08_symbol	qb_do_subtract_multiple_times_I08
#else
void qb_do_subtract_multiple_times_I08_symbol(int8_t *op1_ptr, uint32_t op1_count, int8_t *op2_ptr, uint32_t op2_count, int8_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_I08(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_I16_symbol	qb_do_subtract_multiple_times_I16
#else
void qb_do_subtract_multiple_times_I16_symbol(int16_t *op1_ptr, uint32_t op1_count, int16_t *op2_ptr, uint32_t op2_count, int16_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_I16(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_I32_symbol	qb_do_subtract_multiple_times_I32
#else
void qb_do_subtract_multiple_times_I32_symbol(int32_t *op1_ptr, uint32_t op1_count, int32_t *op2_ptr, uint32_t op2_count, int32_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_I32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_subtract_multiple_times_I64_symbol	qb_do_subtract_multiple_times_I64
#else
void qb_do_subtract_multiple_times_I64_symbol(int64_t *op1_ptr, uint32_t op1_count, int64_t *op2_ptr, uint32_t op2_count, int64_t *res_ptr, uint32_t res_count) {
	qb_do_subtract_multiple_times_I64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_tan_multiple_times_F32_symbol	qb_do_tan_multiple_times_F32
#else
void qb_do_tan_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_tan_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_tan_multiple_times_F64_symbol	qb_do_tan_multiple_times_F64
#else
void qb_do_tan_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_tan_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_tanh_multiple_times_F32_symbol	qb_do_tanh_multiple_times_F32
#else
void qb_do_tanh_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_tanh_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_tanh_multiple_times_F64_symbol	qb_do_tanh_multiple_times_F64
#else
void qb_do_tanh_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_tanh_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_2x_F64_symbol	qb_do_transform_vector_cm_2x_F64
#else
void qb_do_transform_vector_cm_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_cm_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_2x_multiple_times_F32_symbol	qb_do_transform_vector_cm_2x_multiple_times_F32
#else
void qb_do_transform_vector_cm_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_2x_multiple_times_F64_symbol	qb_do_transform_vector_cm_2x_multiple_times_F64
#else
void qb_do_transform_vector_cm_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_3x_F64_symbol	qb_do_transform_vector_cm_3x_F64
#else
void qb_do_transform_vector_cm_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_cm_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_3x_multiple_times_F32_symbol	qb_do_transform_vector_cm_3x_multiple_times_F32
#else
void qb_do_transform_vector_cm_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_3x_multiple_times_F64_symbol	qb_do_transform_vector_cm_3x_multiple_times_F64
#else
void qb_do_transform_vector_cm_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_4x_F64_symbol	qb_do_transform_vector_cm_4x_F64
#else
void qb_do_transform_vector_cm_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_cm_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_4x_multiple_times_F32_symbol	qb_do_transform_vector_cm_4x_multiple_times_F32
#else
void qb_do_transform_vector_cm_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_cm_4x_multiple_times_F64_symbol	qb_do_transform_vector_cm_4x_multiple_times_F64
#else
void qb_do_transform_vector_cm_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_cm_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_2x_F64_symbol	qb_do_transform_vector_rm_2x_F64
#else
void qb_do_transform_vector_rm_2x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_rm_2x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_2x_multiple_times_F32_symbol	qb_do_transform_vector_rm_2x_multiple_times_F32
#else
void qb_do_transform_vector_rm_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_2x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_2x_multiple_times_F64_symbol	qb_do_transform_vector_rm_2x_multiple_times_F64
#else
void qb_do_transform_vector_rm_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_2x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_3x_F64_symbol	qb_do_transform_vector_rm_3x_F64
#else
void qb_do_transform_vector_rm_3x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_rm_3x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_3x_multiple_times_F32_symbol	qb_do_transform_vector_rm_3x_multiple_times_F32
#else
void qb_do_transform_vector_rm_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_3x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_3x_multiple_times_F64_symbol	qb_do_transform_vector_rm_3x_multiple_times_F64
#else
void qb_do_transform_vector_rm_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_3x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_4x_F64_symbol	qb_do_transform_vector_rm_4x_F64
#else
void qb_do_transform_vector_rm_4x_F64_symbol(float64_t *op1_ptr, float64_t *op2_ptr, float64_t *res_ptr) {
	qb_do_transform_vector_rm_4x_F64(op1_ptr, op2_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_4x_multiple_times_F32_symbol	qb_do_transform_vector_rm_4x_multiple_times_F32
#else
void qb_do_transform_vector_rm_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *op2_ptr, uint32_t op2_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_4x_multiple_times_F32(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transform_vector_rm_4x_multiple_times_F64_symbol	qb_do_transform_vector_rm_4x_multiple_times_F64
#else
void qb_do_transform_vector_rm_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *op2_ptr, uint32_t op2_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transform_vector_rm_4x_multiple_times_F64(op1_ptr, op1_count, op2_ptr, op2_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_2x_F64_symbol	qb_do_transpose_matrix_2x_F64
#else
void qb_do_transpose_matrix_2x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_transpose_matrix_2x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_2x_multiple_times_F32_symbol	qb_do_transpose_matrix_2x_multiple_times_F32
#else
void qb_do_transpose_matrix_2x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_2x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_2x_multiple_times_F64_symbol	qb_do_transpose_matrix_2x_multiple_times_F64
#else
void qb_do_transpose_matrix_2x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_2x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_3x_F32_symbol	qb_do_transpose_matrix_3x_F32
#else
void qb_do_transpose_matrix_3x_F32_symbol(float32_t *op1_ptr, float32_t *res_ptr) {
	qb_do_transpose_matrix_3x_F32(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_3x_F64_symbol	qb_do_transpose_matrix_3x_F64
#else
void qb_do_transpose_matrix_3x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_transpose_matrix_3x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_3x_multiple_times_F32_symbol	qb_do_transpose_matrix_3x_multiple_times_F32
#else
void qb_do_transpose_matrix_3x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_3x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_3x_multiple_times_F64_symbol	qb_do_transpose_matrix_3x_multiple_times_F64
#else
void qb_do_transpose_matrix_3x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_3x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_4x_F32_symbol	qb_do_transpose_matrix_4x_F32
#else
void qb_do_transpose_matrix_4x_F32_symbol(float32_t *op1_ptr, float32_t *res_ptr) {
	qb_do_transpose_matrix_4x_F32(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_4x_F64_symbol	qb_do_transpose_matrix_4x_F64
#else
void qb_do_transpose_matrix_4x_F64_symbol(float64_t *op1_ptr, float64_t *res_ptr) {
	qb_do_transpose_matrix_4x_F64(op1_ptr, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_4x_multiple_times_F32_symbol	qb_do_transpose_matrix_4x_multiple_times_F32
#else
void qb_do_transpose_matrix_4x_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_4x_multiple_times_F32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_4x_multiple_times_F64_symbol	qb_do_transpose_matrix_4x_multiple_times_F64
#else
void qb_do_transpose_matrix_4x_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_4x_multiple_times_F64(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_F32_symbol	qb_do_transpose_matrix_F32
#else
void qb_do_transpose_matrix_F32_symbol(float32_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr) {
	qb_do_transpose_matrix_F32(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_F64_symbol	qb_do_transpose_matrix_F64
#else
void qb_do_transpose_matrix_F64_symbol(float64_t *op1_ptr, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr) {
	qb_do_transpose_matrix_F64(op1_ptr, MATRIX1_ROWS, MATRIX1_COLS, res_ptr);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_multiple_times_F32_symbol	qb_do_transpose_matrix_multiple_times_F32
#else
void qb_do_transpose_matrix_multiple_times_F32_symbol(float32_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float32_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_multiple_times_F32(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_transpose_matrix_multiple_times_F64_symbol	qb_do_transpose_matrix_multiple_times_F64
#else
void qb_do_transpose_matrix_multiple_times_F64_symbol(float64_t *op1_ptr, uint32_t op1_count, uint32_t MATRIX1_ROWS, uint32_t MATRIX1_COLS, float64_t *res_ptr, uint32_t res_count) {
	qb_do_transpose_matrix_multiple_times_F64(op1_ptr, op1_count, MATRIX1_ROWS, MATRIX1_COLS, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_utf8decode_U16_symbol	qb_do_utf8decode_U16
#else
void qb_do_utf8decode_U16_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint16_t *res_ptr, uint32_t res_count) {
	qb_do_utf8decode_U16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_utf8decode_U32_symbol	qb_do_utf8decode_U32
#else
void qb_do_utf8decode_U32_symbol(uint8_t *op1_ptr, uint32_t op1_count, uint32_t *res_ptr, uint32_t res_count) {
	qb_do_utf8decode_U32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_utf8encode_U16_symbol	qb_do_utf8encode_U16
#else
void qb_do_utf8encode_U16_symbol(uint16_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_utf8encode_U16(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

#ifdef FASTCALL_MATCHES_CDECL
#define qb_do_utf8encode_U32_symbol	qb_do_utf8encode_U32
#else
void qb_do_utf8encode_U32_symbol(uint32_t *op1_ptr, uint32_t op1_count, uint8_t *res_ptr, uint32_t res_count) {
	qb_do_utf8encode_U32(op1_ptr, op1_count, res_ptr, res_count);
}
#endif

void _CIacos(void);
void _CIasin(void);
void _CIatan(void);
void _CIatan2(void);
void _CIcos(void);
void _CIcosh(void);
void _CIexp(void);
void _CIfmod(void);
void _CIlog(void);
void _CIlog10(void);
void _CIpow(void);
void _CIsin(void);
void _CIsinh(void);
void _CIsqrt(void);
void _CItan(void);
void _CItanh(void);

qb_native_symbol global_native_symbols[] = {
	{	0,	"_CIacos",	_CIacos	},
	{	0,	"_CIasin",	_CIasin	},
	{	0,	"_CIatan",	_CIatan	},
	{	0,	"_CIatan2",	_CIatan2	},
	{	0,	"_CIcos",	_CIcos	},
	{	0,	"_CIcosh",	_CIcosh	},
	{	0,	"_CIexp",	_CIexp	},
	{	0,	"_CIfmod",	_CIfmod	},
	{	0,	"_CIlog",	_CIlog	},
	{	0,	"_CIlog10",	_CIlog10	},
	{	0,	"_CIpow",	_CIpow	},
	{	0,	"_CIsin",	_CIsin	},
	{	0,	"_CIsinh",	_CIsinh	},
	{	0,	"_CIsqrt",	_CIsqrt	},
	{	0,	"_CItan",	_CItan	},
	{	0,	"_CItanh",	_CItanh	},
	{	0,	"_allshl",	_allshl	},
	{	0,	"_allshr",	_allshr	},
	{	0,	"_byteswap_uint64",	_byteswap_uint64	},
	{	0,	"_byteswap_ulong",	_byteswap_ulong	},
	{	0,	"_byteswap_ushort",	_byteswap_ushort	},
	{	0,	"_ftol2",	_ftol2	},
	{	0,	"_php_math_round",	_php_math_round	},
	{	0,	"abs",	abs	},
	{	0,	"acos",	acos	},
	{	0,	"acosf",	(void*) -1	},
	{	0,	"acosh",	acosh	},
	{	0,	"acoshf",	(void*) -1	},
	{	0,	"asin",	asin	},
	{	0,	"asinf",	(void*) -1	},
	{	0,	"asinh",	asinh	},
	{	0,	"asinhf",	(void*) -1	},
	{	0,	"atan",	atan	},
	{	0,	"atan2",	atan2	},
	{	0,	"atan2f",	(void*) -1	},
	{	0,	"atanf",	(void*) -1	},
	{	0,	"atanh",	atanh	},
	{	0,	"atanhf",	(void*) -1	},
	{	0,	"ceil",	ceil	},
	{	0,	"ceilf",	(void*) -1	},
	{	0,	"cos",	cos	},
	{	0,	"cosf",	(void*) -1	},
	{	0,	"cosh",	cosh	},
	{	0,	"coshf",	(void*) -1	},
	{	0,	"exp",	exp	},
	{	0,	"exp2",	exp2	},
	{	0,	"exp2f",	(void*) -1	},
	{	0,	"expf",	(void*) -1	},
	{	0,	"expm1",	expm1	},
	{	0,	"expm1f",	(void*) -1	},
	{	0,	"fabs",	fabs	},
	{	0,	"fabsf",	(void*) -1	},
	{	0,	"floor",	floor	},
	{	0,	"floorf",	(void*) -1	},
	{	0,	"fmod",	fmod	},
	{	0,	"fmodf",	(void*) -1	},
	{	0,	"hypot",	hypot	},
	{	0,	"hypotf",	(void*) -1	},
	{	0,	"llabs",	llabs	},
	{	0,	"log",	log	},
	{	0,	"log10",	log10	},
	{	0,	"log10f",	(void*) -1	},
	{	0,	"log1p",	log1p	},
	{	0,	"log1pf",	(void*) -1	},
	{	0,	"log2",	log2	},
	{	0,	"log2f",	(void*) -1	},
	{	0,	"logf",	(void*) -1	},
	{	0,	"memcpy",	memcpy	},
	{	0,	"memmove",	memmove	},
	{	0,	"php_combined_lcg",	php_combined_lcg	},
	{	0,	"php_write",	php_write	},
	{	0,	"pow",	pow	},
	{	0,	"powf",	(void*) -1	},
	{	0,	"qb_abort",	qb_abort	},
	{	0,	"qb_abort_divide_by_zero_error",	qb_abort_divide_by_zero_error	},
	{	0,	"qb_abort_range_error",	qb_abort_range_error	},
	{	0,	"qb_compare_array_F32",	qb_compare_array_F32_symbol	},
	{	0,	"qb_compare_array_F64",	qb_compare_array_F64_symbol	},
	{	0,	"qb_compare_array_S08",	qb_compare_array_S08_symbol	},
	{	0,	"qb_compare_array_S16",	qb_compare_array_S16_symbol	},
	{	0,	"qb_compare_array_S32",	qb_compare_array_S32_symbol	},
	{	0,	"qb_compare_array_S64",	qb_compare_array_S64_symbol	},
	{	0,	"qb_compare_array_U08",	qb_compare_array_U08_symbol	},
	{	0,	"qb_compare_array_U16",	qb_compare_array_U16_symbol	},
	{	0,	"qb_compare_array_U32",	qb_compare_array_U32_symbol	},
	{	0,	"qb_compare_array_U64",	qb_compare_array_U64_symbol	},
	{	0,	"qb_compare_ascending_F32",	qb_compare_ascending_F32	},
	{	0,	"qb_compare_ascending_F32_array",	qb_compare_ascending_F32_array	},
	{	0,	"qb_compare_ascending_F64",	qb_compare_ascending_F64	},
	{	0,	"qb_compare_ascending_F64_array",	qb_compare_ascending_F64_array	},
	{	0,	"qb_compare_ascending_S08",	qb_compare_ascending_S08	},
	{	0,	"qb_compare_ascending_S08_array",	qb_compare_ascending_S08_array	},
	{	0,	"qb_compare_ascending_S16",	qb_compare_ascending_S16	},
	{	0,	"qb_compare_ascending_S16_array",	qb_compare_ascending_S16_array	},
	{	0,	"qb_compare_ascending_S32",	qb_compare_ascending_S32	},
	{	0,	"qb_compare_ascending_S32_array",	qb_compare_ascending_S32_array	},
	{	0,	"qb_compare_ascending_S64",	qb_compare_ascending_S64	},
	{	0,	"qb_compare_ascending_S64_array",	qb_compare_ascending_S64_array	},
	{	0,	"qb_compare_ascending_U08",	qb_compare_ascending_U08	},
	{	0,	"qb_compare_ascending_U08_array",	qb_compare_ascending_U08_array	},
	{	0,	"qb_compare_ascending_U16",	qb_compare_ascending_U16	},
	{	0,	"qb_compare_ascending_U16_array",	qb_compare_ascending_U16_array	},
	{	0,	"qb_compare_ascending_U32",	qb_compare_ascending_U32	},
	{	0,	"qb_compare_ascending_U32_array",	qb_compare_ascending_U32_array	},
	{	0,	"qb_compare_ascending_U64",	qb_compare_ascending_U64	},
	{	0,	"qb_compare_ascending_U64_array",	qb_compare_ascending_U64_array	},
	{	0,	"qb_compare_descending_F32",	qb_compare_descending_F32	},
	{	0,	"qb_compare_descending_F32_array",	qb_compare_descending_F32_array	},
	{	0,	"qb_compare_descending_F64",	qb_compare_descending_F64	},
	{	0,	"qb_compare_descending_F64_array",	qb_compare_descending_F64_array	},
	{	0,	"qb_compare_descending_S08",	qb_compare_descending_S08	},
	{	0,	"qb_compare_descending_S08_array",	qb_compare_descending_S08_array	},
	{	0,	"qb_compare_descending_S16",	qb_compare_descending_S16	},
	{	0,	"qb_compare_descending_S16_array",	qb_compare_descending_S16_array	},
	{	0,	"qb_compare_descending_S32",	qb_compare_descending_S32	},
	{	0,	"qb_compare_descending_S32_array",	qb_compare_descending_S32_array	},
	{	0,	"qb_compare_descending_S64",	qb_compare_descending_S64	},
	{	0,	"qb_compare_descending_S64_array",	qb_compare_descending_S64_array	},
	{	0,	"qb_compare_descending_U08",	qb_compare_descending_U08	},
	{	0,	"qb_compare_descending_U08_array",	qb_compare_descending_U08_array	},
	{	0,	"qb_compare_descending_U16",	qb_compare_descending_U16	},
	{	0,	"qb_compare_descending_U16_array",	qb_compare_descending_U16_array	},
	{	0,	"qb_compare_descending_U32",	qb_compare_descending_U32	},
	{	0,	"qb_compare_descending_U32_array",	qb_compare_descending_U32_array	},
	{	0,	"qb_compare_descending_U64",	qb_compare_descending_U64	},
	{	0,	"qb_compare_descending_U64_array",	qb_compare_descending_U64_array	},
	{	0,	"qb_copy_argument",	qb_copy_argument_symbol	},
	{	0,	"qb_decode_fcall_mix_operand",	qb_decode_fcall_mix_operand_symbol	},
	{	0,	"qb_decode_fcall_variable_operand",	qb_decode_fcall_variable_operand_symbol	},
	{	0,	"qb_do_abs_multiple_times_F32",	qb_do_abs_multiple_times_F32_symbol	},
	{	0,	"qb_do_abs_multiple_times_F64",	qb_do_abs_multiple_times_F64_symbol	},
	{	0,	"qb_do_abs_multiple_times_S08",	qb_do_abs_multiple_times_S08_symbol	},
	{	0,	"qb_do_abs_multiple_times_S16",	qb_do_abs_multiple_times_S16_symbol	},
	{	0,	"qb_do_abs_multiple_times_S32",	qb_do_abs_multiple_times_S32_symbol	},
	{	0,	"qb_do_abs_multiple_times_S64",	qb_do_abs_multiple_times_S64_symbol	},
	{	0,	"qb_do_acos_multiple_times_F32",	qb_do_acos_multiple_times_F32_symbol	},
	{	0,	"qb_do_acos_multiple_times_F64",	qb_do_acos_multiple_times_F64_symbol	},
	{	0,	"qb_do_acosh_multiple_times_F32",	qb_do_acosh_multiple_times_F32_symbol	},
	{	0,	"qb_do_acosh_multiple_times_F64",	qb_do_acosh_multiple_times_F64_symbol	},
	{	0,	"qb_do_add_2x_multiple_times_F32",	qb_do_add_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_add_2x_multiple_times_F64",	qb_do_add_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_add_3x_multiple_times_F32",	qb_do_add_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_add_3x_multiple_times_F64",	qb_do_add_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_add_4x_multiple_times_F32",	qb_do_add_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_add_4x_multiple_times_F64",	qb_do_add_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_add_multiple_times_F32",	qb_do_add_multiple_times_F32_symbol	},
	{	0,	"qb_do_add_multiple_times_F64",	qb_do_add_multiple_times_F64_symbol	},
	{	0,	"qb_do_add_multiple_times_I08",	qb_do_add_multiple_times_I08_symbol	},
	{	0,	"qb_do_add_multiple_times_I16",	qb_do_add_multiple_times_I16_symbol	},
	{	0,	"qb_do_add_multiple_times_I32",	qb_do_add_multiple_times_I32_symbol	},
	{	0,	"qb_do_add_multiple_times_I64",	qb_do_add_multiple_times_I64_symbol	},
	{	0,	"qb_do_all_I32",	qb_do_all_I32_symbol	},
	{	0,	"qb_do_alpha_blend_multiple_times_F32",	qb_do_alpha_blend_multiple_times_F32_symbol	},
	{	0,	"qb_do_alpha_blend_multiple_times_F64",	qb_do_alpha_blend_multiple_times_F64_symbol	},
	{	0,	"qb_do_any_I32",	qb_do_any_I32_symbol	},
	{	0,	"qb_do_apply_premultiplication_multiple_times_F32",	qb_do_apply_premultiplication_multiple_times_F32_symbol	},
	{	0,	"qb_do_apply_premultiplication_multiple_times_F64",	qb_do_apply_premultiplication_multiple_times_F64_symbol	},
	{	0,	"qb_do_array_insert_F32",	(void*) -1	},
	{	0,	"qb_do_array_insert_F64",	(void*) -1	},
	{	0,	"qb_do_array_insert_I08",	(void*) -1	},
	{	0,	"qb_do_array_insert_I16",	(void*) -1	},
	{	0,	"qb_do_array_insert_I32",	(void*) -1	},
	{	0,	"qb_do_array_insert_I64",	(void*) -1	},
	{	0,	"qb_do_array_max_F32",	qb_do_array_max_F32_symbol	},
	{	0,	"qb_do_array_max_F64",	qb_do_array_max_F64_symbol	},
	{	0,	"qb_do_array_max_S08",	qb_do_array_max_S08_symbol	},
	{	0,	"qb_do_array_max_S16",	qb_do_array_max_S16_symbol	},
	{	0,	"qb_do_array_max_S32",	qb_do_array_max_S32_symbol	},
	{	0,	"qb_do_array_max_S64",	qb_do_array_max_S64_symbol	},
	{	0,	"qb_do_array_max_U08",	qb_do_array_max_U08_symbol	},
	{	0,	"qb_do_array_max_U16",	qb_do_array_max_U16_symbol	},
	{	0,	"qb_do_array_max_U32",	qb_do_array_max_U32_symbol	},
	{	0,	"qb_do_array_max_U64",	qb_do_array_max_U64_symbol	},
	{	0,	"qb_do_array_min_F32",	qb_do_array_min_F32_symbol	},
	{	0,	"qb_do_array_min_F64",	qb_do_array_min_F64_symbol	},
	{	0,	"qb_do_array_min_S08",	qb_do_array_min_S08_symbol	},
	{	0,	"qb_do_array_min_S16",	qb_do_array_min_S16_symbol	},
	{	0,	"qb_do_array_min_S32",	qb_do_array_min_S32_symbol	},
	{	0,	"qb_do_array_min_S64",	qb_do_array_min_S64_symbol	},
	{	0,	"qb_do_array_min_U08",	qb_do_array_min_U08_symbol	},
	{	0,	"qb_do_array_min_U16",	qb_do_array_min_U16_symbol	},
	{	0,	"qb_do_array_min_U32",	qb_do_array_min_U32_symbol	},
	{	0,	"qb_do_array_min_U64",	qb_do_array_min_U64_symbol	},
	{	0,	"qb_do_array_product_F32",	qb_do_array_product_F32_symbol	},
	{	0,	"qb_do_array_product_F64",	qb_do_array_product_F64_symbol	},
	{	0,	"qb_do_array_product_S08",	qb_do_array_product_S08_symbol	},
	{	0,	"qb_do_array_product_S16",	qb_do_array_product_S16_symbol	},
	{	0,	"qb_do_array_product_S32",	qb_do_array_product_S32_symbol	},
	{	0,	"qb_do_array_product_S64",	qb_do_array_product_S64_symbol	},
	{	0,	"qb_do_array_product_U08",	qb_do_array_product_U08_symbol	},
	{	0,	"qb_do_array_product_U16",	qb_do_array_product_U16_symbol	},
	{	0,	"qb_do_array_product_U32",	qb_do_array_product_U32_symbol	},
	{	0,	"qb_do_array_product_U64",	qb_do_array_product_U64_symbol	},
	{	0,	"qb_do_array_random",	qb_do_array_random_symbol	},
	{	0,	"qb_do_array_reverse_F32",	qb_do_array_reverse_F32_symbol	},
	{	0,	"qb_do_array_reverse_F64",	qb_do_array_reverse_F64_symbol	},
	{	0,	"qb_do_array_reverse_I08",	qb_do_array_reverse_I08_symbol	},
	{	0,	"qb_do_array_reverse_I16",	qb_do_array_reverse_I16_symbol	},
	{	0,	"qb_do_array_reverse_I32",	qb_do_array_reverse_I32_symbol	},
	{	0,	"qb_do_array_reverse_I64",	qb_do_array_reverse_I64_symbol	},
	{	0,	"qb_do_array_search_F32",	qb_do_array_search_F32_symbol	},
	{	0,	"qb_do_array_search_F64",	qb_do_array_search_F64_symbol	},
	{	0,	"qb_do_array_search_I08",	qb_do_array_search_I08_symbol	},
	{	0,	"qb_do_array_search_I16",	qb_do_array_search_I16_symbol	},
	{	0,	"qb_do_array_search_I32",	qb_do_array_search_I32_symbol	},
	{	0,	"qb_do_array_search_I64",	qb_do_array_search_I64_symbol	},
	{	0,	"qb_do_array_search_multiple_times_F32",	qb_do_array_search_multiple_times_F32_symbol	},
	{	0,	"qb_do_array_search_multiple_times_F64",	qb_do_array_search_multiple_times_F64_symbol	},
	{	0,	"qb_do_array_search_multiple_times_I08",	qb_do_array_search_multiple_times_I08_symbol	},
	{	0,	"qb_do_array_search_multiple_times_I16",	qb_do_array_search_multiple_times_I16_symbol	},
	{	0,	"qb_do_array_search_multiple_times_I32",	qb_do_array_search_multiple_times_I32_symbol	},
	{	0,	"qb_do_array_search_multiple_times_I64",	qb_do_array_search_multiple_times_I64_symbol	},
	{	0,	"qb_do_array_sum_F32",	qb_do_array_sum_F32_symbol	},
	{	0,	"qb_do_array_sum_F64",	qb_do_array_sum_F64_symbol	},
	{	0,	"qb_do_array_sum_S08",	qb_do_array_sum_S08_symbol	},
	{	0,	"qb_do_array_sum_S16",	qb_do_array_sum_S16_symbol	},
	{	0,	"qb_do_array_sum_S32",	qb_do_array_sum_S32_symbol	},
	{	0,	"qb_do_array_sum_S64",	qb_do_array_sum_S64_symbol	},
	{	0,	"qb_do_array_sum_U08",	qb_do_array_sum_U08_symbol	},
	{	0,	"qb_do_array_sum_U16",	qb_do_array_sum_U16_symbol	},
	{	0,	"qb_do_array_sum_U32",	qb_do_array_sum_U32_symbol	},
	{	0,	"qb_do_array_sum_U64",	qb_do_array_sum_U64_symbol	},
	{	0,	"qb_do_array_unique_F32",	qb_do_array_unique_F32_symbol	},
	{	0,	"qb_do_array_unique_F64",	qb_do_array_unique_F64_symbol	},
	{	0,	"qb_do_array_unique_I08",	qb_do_array_unique_I08_symbol	},
	{	0,	"qb_do_array_unique_I16",	qb_do_array_unique_I16_symbol	},
	{	0,	"qb_do_array_unique_I32",	qb_do_array_unique_I32_symbol	},
	{	0,	"qb_do_array_unique_I64",	qb_do_array_unique_I64_symbol	},
	{	0,	"qb_do_asin_multiple_times_F32",	qb_do_asin_multiple_times_F32_symbol	},
	{	0,	"qb_do_asin_multiple_times_F64",	qb_do_asin_multiple_times_F64_symbol	},
	{	0,	"qb_do_asinh_multiple_times_F32",	qb_do_asinh_multiple_times_F32_symbol	},
	{	0,	"qb_do_asinh_multiple_times_F64",	qb_do_asinh_multiple_times_F64_symbol	},
	{	0,	"qb_do_atan2_multiple_times_F32",	qb_do_atan2_multiple_times_F32_symbol	},
	{	0,	"qb_do_atan2_multiple_times_F64",	qb_do_atan2_multiple_times_F64_symbol	},
	{	0,	"qb_do_atan_multiple_times_F32",	qb_do_atan_multiple_times_F32_symbol	},
	{	0,	"qb_do_atan_multiple_times_F64",	qb_do_atan_multiple_times_F64_symbol	},
	{	0,	"qb_do_atanh_multiple_times_F32",	qb_do_atanh_multiple_times_F32_symbol	},
	{	0,	"qb_do_atanh_multiple_times_F64",	qb_do_atanh_multiple_times_F64_symbol	},
	{	0,	"qb_do_bitwise_and_multiple_times_I08",	qb_do_bitwise_and_multiple_times_I08_symbol	},
	{	0,	"qb_do_bitwise_and_multiple_times_I16",	qb_do_bitwise_and_multiple_times_I16_symbol	},
	{	0,	"qb_do_bitwise_and_multiple_times_I32",	qb_do_bitwise_and_multiple_times_I32_symbol	},
	{	0,	"qb_do_bitwise_and_multiple_times_I64",	qb_do_bitwise_and_multiple_times_I64_symbol	},
	{	0,	"qb_do_bitwise_not_multiple_times_I08",	qb_do_bitwise_not_multiple_times_I08_symbol	},
	{	0,	"qb_do_bitwise_not_multiple_times_I16",	qb_do_bitwise_not_multiple_times_I16_symbol	},
	{	0,	"qb_do_bitwise_not_multiple_times_I32",	qb_do_bitwise_not_multiple_times_I32_symbol	},
	{	0,	"qb_do_bitwise_not_multiple_times_I64",	qb_do_bitwise_not_multiple_times_I64_symbol	},
	{	0,	"qb_do_bitwise_or_multiple_times_I08",	qb_do_bitwise_or_multiple_times_I08_symbol	},
	{	0,	"qb_do_bitwise_or_multiple_times_I16",	qb_do_bitwise_or_multiple_times_I16_symbol	},
	{	0,	"qb_do_bitwise_or_multiple_times_I32",	qb_do_bitwise_or_multiple_times_I32_symbol	},
	{	0,	"qb_do_bitwise_or_multiple_times_I64",	qb_do_bitwise_or_multiple_times_I64_symbol	},
	{	0,	"qb_do_bitwise_xor_multiple_times_I08",	qb_do_bitwise_xor_multiple_times_I08_symbol	},
	{	0,	"qb_do_bitwise_xor_multiple_times_I16",	qb_do_bitwise_xor_multiple_times_I16_symbol	},
	{	0,	"qb_do_bitwise_xor_multiple_times_I32",	qb_do_bitwise_xor_multiple_times_I32_symbol	},
	{	0,	"qb_do_bitwise_xor_multiple_times_I64",	qb_do_bitwise_xor_multiple_times_I64_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_F32",	qb_do_boolean_cast_multiple_times_F32_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_F64",	qb_do_boolean_cast_multiple_times_F64_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_I08",	qb_do_boolean_cast_multiple_times_I08_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_I16",	qb_do_boolean_cast_multiple_times_I16_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_I32",	qb_do_boolean_cast_multiple_times_I32_symbol	},
	{	0,	"qb_do_boolean_cast_multiple_times_I64",	qb_do_boolean_cast_multiple_times_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_F64",	qb_do_cast_multiple_times_F32_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_S08",	qb_do_cast_multiple_times_F32_S08_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_S16",	qb_do_cast_multiple_times_F32_S16_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_S32",	qb_do_cast_multiple_times_F32_S32_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_S64",	qb_do_cast_multiple_times_F32_S64_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_U08",	qb_do_cast_multiple_times_F32_U08_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_U16",	qb_do_cast_multiple_times_F32_U16_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_U32",	qb_do_cast_multiple_times_F32_U32_symbol	},
	{	0,	"qb_do_cast_multiple_times_F32_U64",	qb_do_cast_multiple_times_F32_U64_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_F32",	qb_do_cast_multiple_times_F64_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_S08",	qb_do_cast_multiple_times_F64_S08_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_S16",	qb_do_cast_multiple_times_F64_S16_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_S32",	qb_do_cast_multiple_times_F64_S32_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_S64",	qb_do_cast_multiple_times_F64_S64_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_U08",	qb_do_cast_multiple_times_F64_U08_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_U16",	qb_do_cast_multiple_times_F64_U16_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_U32",	qb_do_cast_multiple_times_F64_U32_symbol	},
	{	0,	"qb_do_cast_multiple_times_F64_U64",	qb_do_cast_multiple_times_F64_U64_symbol	},
	{	0,	"qb_do_cast_multiple_times_I16_I08",	qb_do_cast_multiple_times_I16_I08_symbol	},
	{	0,	"qb_do_cast_multiple_times_I32_I08",	qb_do_cast_multiple_times_I32_I08_symbol	},
	{	0,	"qb_do_cast_multiple_times_I32_I16",	qb_do_cast_multiple_times_I32_I16_symbol	},
	{	0,	"qb_do_cast_multiple_times_I64_I08",	qb_do_cast_multiple_times_I64_I08_symbol	},
	{	0,	"qb_do_cast_multiple_times_I64_I16",	qb_do_cast_multiple_times_I64_I16_symbol	},
	{	0,	"qb_do_cast_multiple_times_I64_I32",	qb_do_cast_multiple_times_I64_I32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S08_F32",	qb_do_cast_multiple_times_S08_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S08_F64",	qb_do_cast_multiple_times_S08_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S08_I16",	qb_do_cast_multiple_times_S08_I16_symbol	},
	{	0,	"qb_do_cast_multiple_times_S08_I32",	qb_do_cast_multiple_times_S08_I32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S08_I64",	qb_do_cast_multiple_times_S08_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S16_F32",	qb_do_cast_multiple_times_S16_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S16_F64",	qb_do_cast_multiple_times_S16_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S16_I32",	qb_do_cast_multiple_times_S16_I32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S16_I64",	qb_do_cast_multiple_times_S16_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S32_F32",	qb_do_cast_multiple_times_S32_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S32_F64",	qb_do_cast_multiple_times_S32_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S32_I64",	qb_do_cast_multiple_times_S32_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_S64_F32",	qb_do_cast_multiple_times_S64_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_S64_F64",	qb_do_cast_multiple_times_S64_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U08_F32",	qb_do_cast_multiple_times_U08_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U08_F64",	qb_do_cast_multiple_times_U08_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U08_I16",	qb_do_cast_multiple_times_U08_I16_symbol	},
	{	0,	"qb_do_cast_multiple_times_U08_I32",	qb_do_cast_multiple_times_U08_I32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U08_I64",	qb_do_cast_multiple_times_U08_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U16_F32",	qb_do_cast_multiple_times_U16_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U16_F64",	qb_do_cast_multiple_times_U16_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U16_I32",	qb_do_cast_multiple_times_U16_I32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U16_I64",	qb_do_cast_multiple_times_U16_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U32_F32",	qb_do_cast_multiple_times_U32_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U32_F64",	qb_do_cast_multiple_times_U32_F64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U32_I64",	qb_do_cast_multiple_times_U32_I64_symbol	},
	{	0,	"qb_do_cast_multiple_times_U64_F32",	qb_do_cast_multiple_times_U64_F32_symbol	},
	{	0,	"qb_do_cast_multiple_times_U64_F64",	qb_do_cast_multiple_times_U64_F64_symbol	},
	{	0,	"qb_do_ceil_multiple_times_F32",	qb_do_ceil_multiple_times_F32_symbol	},
	{	0,	"qb_do_ceil_multiple_times_F64",	qb_do_ceil_multiple_times_F64_symbol	},
	{	0,	"qb_do_clamp_F32",	(void*) -1	},
	{	0,	"qb_do_clamp_F64",	(void*) -1	},
	{	0,	"qb_do_clamp_multiple_times_F32",	qb_do_clamp_multiple_times_F32_symbol	},
	{	0,	"qb_do_clamp_multiple_times_F64",	qb_do_clamp_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_abs_F64",	qb_do_complex_abs_F64_symbol	},
	{	0,	"qb_do_complex_abs_multiple_times_F32",	qb_do_complex_abs_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_abs_multiple_times_F64",	qb_do_complex_abs_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_argument_F64",	qb_do_complex_argument_F64_symbol	},
	{	0,	"qb_do_complex_argument_multiple_times_F32",	qb_do_complex_argument_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_argument_multiple_times_F64",	qb_do_complex_argument_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_cos_F32",	(void*) -1	},
	{	0,	"qb_do_complex_cos_F64",	qb_do_complex_cos_F64_symbol	},
	{	0,	"qb_do_complex_cos_multiple_times_F32",	qb_do_complex_cos_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_cos_multiple_times_F64",	qb_do_complex_cos_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_cosh_F32",	(void*) -1	},
	{	0,	"qb_do_complex_cosh_F64",	qb_do_complex_cosh_F64_symbol	},
	{	0,	"qb_do_complex_cosh_multiple_times_F32",	qb_do_complex_cosh_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_cosh_multiple_times_F64",	qb_do_complex_cosh_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_divide_F32",	(void*) -1	},
	{	0,	"qb_do_complex_divide_F64",	qb_do_complex_divide_F64_symbol	},
	{	0,	"qb_do_complex_divide_multiple_times_F32",	qb_do_complex_divide_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_divide_multiple_times_F64",	qb_do_complex_divide_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_exp_F32",	(void*) -1	},
	{	0,	"qb_do_complex_exp_F64",	qb_do_complex_exp_F64_symbol	},
	{	0,	"qb_do_complex_exp_multiple_times_F32",	qb_do_complex_exp_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_exp_multiple_times_F64",	qb_do_complex_exp_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_log_F32",	(void*) -1	},
	{	0,	"qb_do_complex_log_F64",	qb_do_complex_log_F64_symbol	},
	{	0,	"qb_do_complex_log_multiple_times_F32",	qb_do_complex_log_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_log_multiple_times_F64",	qb_do_complex_log_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_multiply_F32",	(void*) -1	},
	{	0,	"qb_do_complex_multiply_F64",	qb_do_complex_multiply_F64_symbol	},
	{	0,	"qb_do_complex_multiply_multiple_times_F32",	qb_do_complex_multiply_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_multiply_multiple_times_F64",	qb_do_complex_multiply_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_pow_F32",	(void*) -1	},
	{	0,	"qb_do_complex_pow_F64",	qb_do_complex_pow_F64_symbol	},
	{	0,	"qb_do_complex_pow_multiple_times_F32",	qb_do_complex_pow_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_pow_multiple_times_F64",	qb_do_complex_pow_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_sin_F32",	(void*) -1	},
	{	0,	"qb_do_complex_sin_F64",	qb_do_complex_sin_F64_symbol	},
	{	0,	"qb_do_complex_sin_multiple_times_F32",	qb_do_complex_sin_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_sin_multiple_times_F64",	qb_do_complex_sin_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_sinh_F32",	(void*) -1	},
	{	0,	"qb_do_complex_sinh_F64",	qb_do_complex_sinh_F64_symbol	},
	{	0,	"qb_do_complex_sinh_multiple_times_F32",	qb_do_complex_sinh_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_sinh_multiple_times_F64",	qb_do_complex_sinh_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_square_root_F32",	(void*) -1	},
	{	0,	"qb_do_complex_square_root_F64",	qb_do_complex_square_root_F64_symbol	},
	{	0,	"qb_do_complex_square_root_multiple_times_F32",	qb_do_complex_square_root_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_square_root_multiple_times_F64",	qb_do_complex_square_root_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_tan_F32",	(void*) -1	},
	{	0,	"qb_do_complex_tan_F64",	qb_do_complex_tan_F64_symbol	},
	{	0,	"qb_do_complex_tan_multiple_times_F32",	qb_do_complex_tan_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_tan_multiple_times_F64",	qb_do_complex_tan_multiple_times_F64_symbol	},
	{	0,	"qb_do_complex_tanh_F32",	(void*) -1	},
	{	0,	"qb_do_complex_tanh_F64",	qb_do_complex_tanh_F64_symbol	},
	{	0,	"qb_do_complex_tanh_multiple_times_F32",	qb_do_complex_tanh_multiple_times_F32_symbol	},
	{	0,	"qb_do_complex_tanh_multiple_times_F64",	qb_do_complex_tanh_multiple_times_F64_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_F32",	qb_do_concat_multidimensional_variable_F32_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_F64",	qb_do_concat_multidimensional_variable_F64_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_S08",	qb_do_concat_multidimensional_variable_S08_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_S16",	qb_do_concat_multidimensional_variable_S16_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_S32",	qb_do_concat_multidimensional_variable_S32_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_S64",	qb_do_concat_multidimensional_variable_S64_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_U08",	qb_do_concat_multidimensional_variable_U08_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_U16",	qb_do_concat_multidimensional_variable_U16_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_U32",	qb_do_concat_multidimensional_variable_U32_symbol	},
	{	0,	"qb_do_concat_multidimensional_variable_U64",	qb_do_concat_multidimensional_variable_U64_symbol	},
	{	0,	"qb_do_concat_variable_F32",	qb_do_concat_variable_F32_symbol	},
	{	0,	"qb_do_concat_variable_F64",	qb_do_concat_variable_F64_symbol	},
	{	0,	"qb_do_concat_variable_S08",	qb_do_concat_variable_S08_symbol	},
	{	0,	"qb_do_concat_variable_S16",	qb_do_concat_variable_S16_symbol	},
	{	0,	"qb_do_concat_variable_S32",	qb_do_concat_variable_S32_symbol	},
	{	0,	"qb_do_concat_variable_S64",	qb_do_concat_variable_S64_symbol	},
	{	0,	"qb_do_concat_variable_U08",	qb_do_concat_variable_U08_symbol	},
	{	0,	"qb_do_concat_variable_U16",	qb_do_concat_variable_U16_symbol	},
	{	0,	"qb_do_concat_variable_U32",	qb_do_concat_variable_U32_symbol	},
	{	0,	"qb_do_concat_variable_U64",	qb_do_concat_variable_U64_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_F32",	qb_do_concat_variable_multiple_times_F32_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_F64",	qb_do_concat_variable_multiple_times_F64_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_S08",	qb_do_concat_variable_multiple_times_S08_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_S16",	qb_do_concat_variable_multiple_times_S16_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_S32",	qb_do_concat_variable_multiple_times_S32_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_S64",	qb_do_concat_variable_multiple_times_S64_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_U08",	qb_do_concat_variable_multiple_times_U08_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_U16",	qb_do_concat_variable_multiple_times_U16_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_U32",	qb_do_concat_variable_multiple_times_U32_symbol	},
	{	0,	"qb_do_concat_variable_multiple_times_U64",	qb_do_concat_variable_multiple_times_U64_symbol	},
	{	0,	"qb_do_copy_2x_multiple_times_F32",	qb_do_copy_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_copy_2x_multiple_times_F64",	qb_do_copy_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_copy_3x_multiple_times_F32",	qb_do_copy_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_copy_3x_multiple_times_F64",	qb_do_copy_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_copy_4x_multiple_times_F32",	qb_do_copy_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_copy_4x_multiple_times_F64",	qb_do_copy_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_copy_multiple_times_F32",	qb_do_copy_multiple_times_F32_symbol	},
	{	0,	"qb_do_copy_multiple_times_F64",	qb_do_copy_multiple_times_F64_symbol	},
	{	0,	"qb_do_copy_multiple_times_I08",	qb_do_copy_multiple_times_I08_symbol	},
	{	0,	"qb_do_copy_multiple_times_I16",	qb_do_copy_multiple_times_I16_symbol	},
	{	0,	"qb_do_copy_multiple_times_I32",	qb_do_copy_multiple_times_I32_symbol	},
	{	0,	"qb_do_copy_multiple_times_I64",	qb_do_copy_multiple_times_I64_symbol	},
	{	0,	"qb_do_cos_multiple_times_F32",	qb_do_cos_multiple_times_F32_symbol	},
	{	0,	"qb_do_cos_multiple_times_F64",	qb_do_cos_multiple_times_F64_symbol	},
	{	0,	"qb_do_cosh_multiple_times_F32",	qb_do_cosh_multiple_times_F32_symbol	},
	{	0,	"qb_do_cosh_multiple_times_F64",	qb_do_cosh_multiple_times_F64_symbol	},
	{	0,	"qb_do_cross_product_2x_F32",	(void*) -1	},
	{	0,	"qb_do_cross_product_2x_F64",	qb_do_cross_product_2x_F64_symbol	},
	{	0,	"qb_do_cross_product_2x_multiple_times_F32",	qb_do_cross_product_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_cross_product_2x_multiple_times_F64",	qb_do_cross_product_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_cross_product_3x_F32",	(void*) -1	},
	{	0,	"qb_do_cross_product_3x_F64",	qb_do_cross_product_3x_F64_symbol	},
	{	0,	"qb_do_cross_product_3x_multiple_times_F32",	qb_do_cross_product_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_cross_product_3x_multiple_times_F64",	qb_do_cross_product_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_cross_product_4x_F32",	qb_do_cross_product_4x_F32_symbol	},
	{	0,	"qb_do_cross_product_4x_F64",	qb_do_cross_product_4x_F64_symbol	},
	{	0,	"qb_do_cross_product_4x_multiple_times_F32",	qb_do_cross_product_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_cross_product_4x_multiple_times_F64",	qb_do_cross_product_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_decrement_2x_multiple_times_F32",	qb_do_decrement_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_decrement_2x_multiple_times_F64",	qb_do_decrement_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_decrement_3x_multiple_times_F32",	qb_do_decrement_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_decrement_3x_multiple_times_F64",	qb_do_decrement_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_decrement_4x_multiple_times_F32",	qb_do_decrement_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_decrement_4x_multiple_times_F64",	qb_do_decrement_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_decrement_multiple_times_F32",	qb_do_decrement_multiple_times_F32_symbol	},
	{	0,	"qb_do_decrement_multiple_times_F64",	qb_do_decrement_multiple_times_F64_symbol	},
	{	0,	"qb_do_decrement_multiple_times_I08",	qb_do_decrement_multiple_times_I08_symbol	},
	{	0,	"qb_do_decrement_multiple_times_I16",	qb_do_decrement_multiple_times_I16_symbol	},
	{	0,	"qb_do_decrement_multiple_times_I32",	qb_do_decrement_multiple_times_I32_symbol	},
	{	0,	"qb_do_decrement_multiple_times_I64",	qb_do_decrement_multiple_times_I64_symbol	},
	{	0,	"qb_do_degree_to_radian_multiple_times_F32",	qb_do_degree_to_radian_multiple_times_F32_symbol	},
	{	0,	"qb_do_degree_to_radian_multiple_times_F64",	qb_do_degree_to_radian_multiple_times_F64_symbol	},
	{	0,	"qb_do_determinant_2x_F64",	qb_do_determinant_2x_F64_symbol	},
	{	0,	"qb_do_determinant_2x_multiple_times_F32",	qb_do_determinant_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_determinant_2x_multiple_times_F64",	qb_do_determinant_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_determinant_3x_F32",	(void*) -1	},
	{	0,	"qb_do_determinant_3x_F64",	qb_do_determinant_3x_F64_symbol	},
	{	0,	"qb_do_determinant_3x_multiple_times_F32",	qb_do_determinant_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_determinant_3x_multiple_times_F64",	qb_do_determinant_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_determinant_4x_F32",	(void*) -1	},
	{	0,	"qb_do_determinant_4x_F64",	qb_do_determinant_4x_F64_symbol	},
	{	0,	"qb_do_determinant_4x_multiple_times_F32",	qb_do_determinant_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_determinant_4x_multiple_times_F64",	qb_do_determinant_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_determinant_F32",	qb_do_determinant_F32_symbol	},
	{	0,	"qb_do_determinant_F64",	qb_do_determinant_F64_symbol	},
	{	0,	"qb_do_determinant_multiple_times_F32",	qb_do_determinant_multiple_times_F32_symbol	},
	{	0,	"qb_do_determinant_multiple_times_F64",	qb_do_determinant_multiple_times_F64_symbol	},
	{	0,	"qb_do_distance_2x_F32",	(void*) -1	},
	{	0,	"qb_do_distance_2x_F64",	qb_do_distance_2x_F64_symbol	},
	{	0,	"qb_do_distance_2x_multiple_times_F32",	qb_do_distance_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_distance_2x_multiple_times_F64",	qb_do_distance_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_distance_3x_F32",	(void*) -1	},
	{	0,	"qb_do_distance_3x_F64",	qb_do_distance_3x_F64_symbol	},
	{	0,	"qb_do_distance_3x_multiple_times_F32",	qb_do_distance_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_distance_3x_multiple_times_F64",	qb_do_distance_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_distance_4x_F32",	(void*) -1	},
	{	0,	"qb_do_distance_4x_F64",	qb_do_distance_4x_F64_symbol	},
	{	0,	"qb_do_distance_4x_multiple_times_F32",	qb_do_distance_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_distance_4x_multiple_times_F64",	qb_do_distance_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_distance_F32",	qb_do_distance_F32_symbol	},
	{	0,	"qb_do_distance_F64",	qb_do_distance_F64_symbol	},
	{	0,	"qb_do_distance_multiple_times_F32",	qb_do_distance_multiple_times_F32_symbol	},
	{	0,	"qb_do_distance_multiple_times_F64",	qb_do_distance_multiple_times_F64_symbol	},
	{	0,	"qb_do_divide_2x_multiple_times_F32",	qb_do_divide_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_divide_2x_multiple_times_F64",	qb_do_divide_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_divide_3x_multiple_times_F32",	qb_do_divide_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_divide_3x_multiple_times_F64",	qb_do_divide_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_divide_4x_multiple_times_F32",	qb_do_divide_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_divide_4x_multiple_times_F64",	qb_do_divide_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_divide_S08",	(void*) -1	},
	{	0,	"qb_do_divide_S16",	(void*) -1	},
	{	0,	"qb_do_divide_S32",	(void*) -1	},
	{	0,	"qb_do_divide_S64",	(void*) -1	},
	{	0,	"qb_do_divide_U08",	(void*) -1	},
	{	0,	"qb_do_divide_U16",	(void*) -1	},
	{	0,	"qb_do_divide_U32",	(void*) -1	},
	{	0,	"qb_do_divide_U64",	(void*) -1	},
	{	0,	"qb_do_divide_multiple_times_F32",	qb_do_divide_multiple_times_F32_symbol	},
	{	0,	"qb_do_divide_multiple_times_F64",	qb_do_divide_multiple_times_F64_symbol	},
	{	0,	"qb_do_divide_multiple_times_S08",	qb_do_divide_multiple_times_S08_symbol	},
	{	0,	"qb_do_divide_multiple_times_S16",	qb_do_divide_multiple_times_S16_symbol	},
	{	0,	"qb_do_divide_multiple_times_S32",	qb_do_divide_multiple_times_S32_symbol	},
	{	0,	"qb_do_divide_multiple_times_S64",	qb_do_divide_multiple_times_S64_symbol	},
	{	0,	"qb_do_divide_multiple_times_U08",	qb_do_divide_multiple_times_U08_symbol	},
	{	0,	"qb_do_divide_multiple_times_U16",	qb_do_divide_multiple_times_U16_symbol	},
	{	0,	"qb_do_divide_multiple_times_U32",	qb_do_divide_multiple_times_U32_symbol	},
	{	0,	"qb_do_divide_multiple_times_U64",	qb_do_divide_multiple_times_U64_symbol	},
	{	0,	"qb_do_dot_product_2x_F64",	qb_do_dot_product_2x_F64_symbol	},
	{	0,	"qb_do_dot_product_2x_multiple_times_F32",	qb_do_dot_product_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_dot_product_2x_multiple_times_F64",	qb_do_dot_product_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_dot_product_3x_F64",	qb_do_dot_product_3x_F64_symbol	},
	{	0,	"qb_do_dot_product_3x_multiple_times_F32",	qb_do_dot_product_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_dot_product_3x_multiple_times_F64",	qb_do_dot_product_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_dot_product_4x_F64",	qb_do_dot_product_4x_F64_symbol	},
	{	0,	"qb_do_dot_product_4x_multiple_times_F32",	qb_do_dot_product_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_dot_product_4x_multiple_times_F64",	qb_do_dot_product_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_dot_product_F32",	qb_do_dot_product_F32_symbol	},
	{	0,	"qb_do_dot_product_F64",	qb_do_dot_product_F64_symbol	},
	{	0,	"qb_do_dot_product_multiple_times_F32",	qb_do_dot_product_multiple_times_F32_symbol	},
	{	0,	"qb_do_dot_product_multiple_times_F64",	qb_do_dot_product_multiple_times_F64_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_F32",	qb_do_equal_vector_multiple_times_F32_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_F64",	qb_do_equal_vector_multiple_times_F64_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_I08",	qb_do_equal_vector_multiple_times_I08_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_I16",	qb_do_equal_vector_multiple_times_I16_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_I32",	qb_do_equal_vector_multiple_times_I32_symbol	},
	{	0,	"qb_do_equal_vector_multiple_times_I64",	qb_do_equal_vector_multiple_times_I64_symbol	},
	{	0,	"qb_do_exp2_multiple_times_F32",	qb_do_exp2_multiple_times_F32_symbol	},
	{	0,	"qb_do_exp2_multiple_times_F64",	qb_do_exp2_multiple_times_F64_symbol	},
	{	0,	"qb_do_exp_m1_multiple_times_F32",	qb_do_exp_m1_multiple_times_F32_symbol	},
	{	0,	"qb_do_exp_m1_multiple_times_F64",	qb_do_exp_m1_multiple_times_F64_symbol	},
	{	0,	"qb_do_exp_multiple_times_F32",	qb_do_exp_multiple_times_F32_symbol	},
	{	0,	"qb_do_exp_multiple_times_F64",	qb_do_exp_multiple_times_F64_symbol	},
	{	0,	"qb_do_face_forward_2x_F32",	(void*) -1	},
	{	0,	"qb_do_face_forward_2x_F64",	qb_do_face_forward_2x_F64_symbol	},
	{	0,	"qb_do_face_forward_2x_multiple_times_F32",	qb_do_face_forward_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_face_forward_2x_multiple_times_F64",	qb_do_face_forward_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_face_forward_3x_F32",	(void*) -1	},
	{	0,	"qb_do_face_forward_3x_F64",	qb_do_face_forward_3x_F64_symbol	},
	{	0,	"qb_do_face_forward_3x_multiple_times_F32",	qb_do_face_forward_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_face_forward_3x_multiple_times_F64",	qb_do_face_forward_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_face_forward_4x_F32",	(void*) -1	},
	{	0,	"qb_do_face_forward_4x_F64",	qb_do_face_forward_4x_F64_symbol	},
	{	0,	"qb_do_face_forward_4x_multiple_times_F32",	qb_do_face_forward_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_face_forward_4x_multiple_times_F64",	qb_do_face_forward_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_face_forward_F32",	qb_do_face_forward_F32_symbol	},
	{	0,	"qb_do_face_forward_F64",	qb_do_face_forward_F64_symbol	},
	{	0,	"qb_do_face_forward_multiple_times_F32",	qb_do_face_forward_multiple_times_F32_symbol	},
	{	0,	"qb_do_face_forward_multiple_times_F64",	qb_do_face_forward_multiple_times_F64_symbol	},
	{	0,	"qb_do_floor_multiple_times_F32",	qb_do_floor_multiple_times_F32_symbol	},
	{	0,	"qb_do_floor_multiple_times_F64",	qb_do_floor_multiple_times_F64_symbol	},
	{	0,	"qb_do_floored_division_modulo_multiple_times_F32",	qb_do_floored_division_modulo_multiple_times_F32_symbol	},
	{	0,	"qb_do_floored_division_modulo_multiple_times_F64",	qb_do_floored_division_modulo_multiple_times_F64_symbol	},
	{	0,	"qb_do_fract_multiple_times_F32",	qb_do_fract_multiple_times_F32_symbol	},
	{	0,	"qb_do_fract_multiple_times_F64",	qb_do_fract_multiple_times_F64_symbol	},
	{	0,	"qb_do_hypot_multiple_times_F32",	qb_do_hypot_multiple_times_F32_symbol	},
	{	0,	"qb_do_hypot_multiple_times_F64",	qb_do_hypot_multiple_times_F64_symbol	},
	{	0,	"qb_do_in_array_F32",	(void*) -1	},
	{	0,	"qb_do_in_array_F64",	(void*) -1	},
	{	0,	"qb_do_in_array_I08",	(void*) -1	},
	{	0,	"qb_do_in_array_I16",	(void*) -1	},
	{	0,	"qb_do_in_array_I32",	(void*) -1	},
	{	0,	"qb_do_in_array_I64",	(void*) -1	},
	{	0,	"qb_do_in_array_multiple_times_F32",	qb_do_in_array_multiple_times_F32_symbol	},
	{	0,	"qb_do_in_array_multiple_times_F64",	qb_do_in_array_multiple_times_F64_symbol	},
	{	0,	"qb_do_in_array_multiple_times_I08",	qb_do_in_array_multiple_times_I08_symbol	},
	{	0,	"qb_do_in_array_multiple_times_I16",	qb_do_in_array_multiple_times_I16_symbol	},
	{	0,	"qb_do_in_array_multiple_times_I32",	qb_do_in_array_multiple_times_I32_symbol	},
	{	0,	"qb_do_in_array_multiple_times_I64",	qb_do_in_array_multiple_times_I64_symbol	},
	{	0,	"qb_do_increment_2x_multiple_times_F32",	qb_do_increment_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_increment_2x_multiple_times_F64",	qb_do_increment_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_increment_3x_multiple_times_F32",	qb_do_increment_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_increment_3x_multiple_times_F64",	qb_do_increment_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_increment_4x_multiple_times_F32",	qb_do_increment_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_increment_4x_multiple_times_F64",	qb_do_increment_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_increment_multiple_times_F32",	qb_do_increment_multiple_times_F32_symbol	},
	{	0,	"qb_do_increment_multiple_times_F64",	qb_do_increment_multiple_times_F64_symbol	},
	{	0,	"qb_do_increment_multiple_times_I08",	qb_do_increment_multiple_times_I08_symbol	},
	{	0,	"qb_do_increment_multiple_times_I16",	qb_do_increment_multiple_times_I16_symbol	},
	{	0,	"qb_do_increment_multiple_times_I32",	qb_do_increment_multiple_times_I32_symbol	},
	{	0,	"qb_do_increment_multiple_times_I64",	qb_do_increment_multiple_times_I64_symbol	},
	{	0,	"qb_do_invert_matrix_2x_F32",	qb_do_invert_matrix_2x_F32_symbol	},
	{	0,	"qb_do_invert_matrix_2x_F64",	qb_do_invert_matrix_2x_F64_symbol	},
	{	0,	"qb_do_invert_matrix_2x_multiple_times_F32",	qb_do_invert_matrix_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_invert_matrix_2x_multiple_times_F64",	qb_do_invert_matrix_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_invert_matrix_3x_F32",	qb_do_invert_matrix_3x_F32_symbol	},
	{	0,	"qb_do_invert_matrix_3x_F64",	qb_do_invert_matrix_3x_F64_symbol	},
	{	0,	"qb_do_invert_matrix_3x_multiple_times_F32",	qb_do_invert_matrix_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_invert_matrix_3x_multiple_times_F64",	qb_do_invert_matrix_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_invert_matrix_4x_F32",	qb_do_invert_matrix_4x_F32_symbol	},
	{	0,	"qb_do_invert_matrix_4x_F64",	qb_do_invert_matrix_4x_F64_symbol	},
	{	0,	"qb_do_invert_matrix_4x_multiple_times_F32",	qb_do_invert_matrix_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_invert_matrix_4x_multiple_times_F64",	qb_do_invert_matrix_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_invert_matrix_F32",	qb_do_invert_matrix_F32_symbol	},
	{	0,	"qb_do_invert_matrix_F64",	qb_do_invert_matrix_F64_symbol	},
	{	0,	"qb_do_invert_matrix_multiple_times_F32",	qb_do_invert_matrix_multiple_times_F32_symbol	},
	{	0,	"qb_do_invert_matrix_multiple_times_F64",	qb_do_invert_matrix_multiple_times_F64_symbol	},
	{	0,	"qb_do_is_finite_multiple_times_F32",	qb_do_is_finite_multiple_times_F32_symbol	},
	{	0,	"qb_do_is_finite_multiple_times_F64",	qb_do_is_finite_multiple_times_F64_symbol	},
	{	0,	"qb_do_is_infinite_multiple_times_F32",	qb_do_is_infinite_multiple_times_F32_symbol	},
	{	0,	"qb_do_is_infinite_multiple_times_F64",	qb_do_is_infinite_multiple_times_F64_symbol	},
	{	0,	"qb_do_is_nan_multiple_times_F32",	qb_do_is_nan_multiple_times_F32_symbol	},
	{	0,	"qb_do_is_nan_multiple_times_F64",	qb_do_is_nan_multiple_times_F64_symbol	},
	{	0,	"qb_do_lcg_F32",	qb_do_lcg_F32_symbol	},
	{	0,	"qb_do_lcg_F64",	qb_do_lcg_F64_symbol	},
	{	0,	"qb_do_lcg_multiple_times_F32",	qb_do_lcg_multiple_times_F32_symbol	},
	{	0,	"qb_do_lcg_multiple_times_F64",	qb_do_lcg_multiple_times_F64_symbol	},
	{	0,	"qb_do_length_2x_F32",	(void*) -1	},
	{	0,	"qb_do_length_2x_F64",	qb_do_length_2x_F64_symbol	},
	{	0,	"qb_do_length_2x_multiple_times_F32",	qb_do_length_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_length_2x_multiple_times_F64",	qb_do_length_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_length_3x_F32",	(void*) -1	},
	{	0,	"qb_do_length_3x_F64",	qb_do_length_3x_F64_symbol	},
	{	0,	"qb_do_length_3x_multiple_times_F32",	qb_do_length_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_length_3x_multiple_times_F64",	qb_do_length_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_length_4x_F32",	(void*) -1	},
	{	0,	"qb_do_length_4x_F64",	qb_do_length_4x_F64_symbol	},
	{	0,	"qb_do_length_4x_multiple_times_F32",	qb_do_length_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_length_4x_multiple_times_F64",	qb_do_length_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_length_F32",	qb_do_length_F32_symbol	},
	{	0,	"qb_do_length_F64",	qb_do_length_F64_symbol	},
	{	0,	"qb_do_length_multiple_times_F32",	qb_do_length_multiple_times_F32_symbol	},
	{	0,	"qb_do_length_multiple_times_F64",	qb_do_length_multiple_times_F64_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_F32",	qb_do_less_than_or_equal_vector_multiple_times_F32_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_F64",	qb_do_less_than_or_equal_vector_multiple_times_F64_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_S08",	qb_do_less_than_or_equal_vector_multiple_times_S08_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_S16",	qb_do_less_than_or_equal_vector_multiple_times_S16_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_S32",	qb_do_less_than_or_equal_vector_multiple_times_S32_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_S64",	qb_do_less_than_or_equal_vector_multiple_times_S64_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_U08",	qb_do_less_than_or_equal_vector_multiple_times_U08_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_U16",	qb_do_less_than_or_equal_vector_multiple_times_U16_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_U32",	qb_do_less_than_or_equal_vector_multiple_times_U32_symbol	},
	{	0,	"qb_do_less_than_or_equal_vector_multiple_times_U64",	qb_do_less_than_or_equal_vector_multiple_times_U64_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_F32",	qb_do_less_than_vector_multiple_times_F32_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_F64",	qb_do_less_than_vector_multiple_times_F64_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_S08",	qb_do_less_than_vector_multiple_times_S08_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_S16",	qb_do_less_than_vector_multiple_times_S16_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_S32",	qb_do_less_than_vector_multiple_times_S32_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_S64",	qb_do_less_than_vector_multiple_times_S64_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_U08",	qb_do_less_than_vector_multiple_times_U08_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_U16",	qb_do_less_than_vector_multiple_times_U16_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_U32",	qb_do_less_than_vector_multiple_times_U32_symbol	},
	{	0,	"qb_do_less_than_vector_multiple_times_U64",	qb_do_less_than_vector_multiple_times_U64_symbol	},
	{	0,	"qb_do_log10_multiple_times_F32",	qb_do_log10_multiple_times_F32_symbol	},
	{	0,	"qb_do_log10_multiple_times_F64",	qb_do_log10_multiple_times_F64_symbol	},
	{	0,	"qb_do_log1p_multiple_times_F32",	qb_do_log1p_multiple_times_F32_symbol	},
	{	0,	"qb_do_log1p_multiple_times_F64",	qb_do_log1p_multiple_times_F64_symbol	},
	{	0,	"qb_do_log2_multiple_times_F32",	qb_do_log2_multiple_times_F32_symbol	},
	{	0,	"qb_do_log2_multiple_times_F64",	qb_do_log2_multiple_times_F64_symbol	},
	{	0,	"qb_do_log_multiple_times_F32",	qb_do_log_multiple_times_F32_symbol	},
	{	0,	"qb_do_log_multiple_times_F64",	qb_do_log_multiple_times_F64_symbol	},
	{	0,	"qb_do_max_multiple_times_F32",	qb_do_max_multiple_times_F32_symbol	},
	{	0,	"qb_do_max_multiple_times_F64",	qb_do_max_multiple_times_F64_symbol	},
	{	0,	"qb_do_max_multiple_times_S08",	qb_do_max_multiple_times_S08_symbol	},
	{	0,	"qb_do_max_multiple_times_S16",	qb_do_max_multiple_times_S16_symbol	},
	{	0,	"qb_do_max_multiple_times_S32",	qb_do_max_multiple_times_S32_symbol	},
	{	0,	"qb_do_max_multiple_times_S64",	qb_do_max_multiple_times_S64_symbol	},
	{	0,	"qb_do_max_multiple_times_U08",	qb_do_max_multiple_times_U08_symbol	},
	{	0,	"qb_do_max_multiple_times_U16",	qb_do_max_multiple_times_U16_symbol	},
	{	0,	"qb_do_max_multiple_times_U32",	qb_do_max_multiple_times_U32_symbol	},
	{	0,	"qb_do_max_multiple_times_U64",	qb_do_max_multiple_times_U64_symbol	},
	{	0,	"qb_do_min_multiple_times_F32",	qb_do_min_multiple_times_F32_symbol	},
	{	0,	"qb_do_min_multiple_times_F64",	qb_do_min_multiple_times_F64_symbol	},
	{	0,	"qb_do_min_multiple_times_S08",	qb_do_min_multiple_times_S08_symbol	},
	{	0,	"qb_do_min_multiple_times_S16",	qb_do_min_multiple_times_S16_symbol	},
	{	0,	"qb_do_min_multiple_times_S32",	qb_do_min_multiple_times_S32_symbol	},
	{	0,	"qb_do_min_multiple_times_S64",	qb_do_min_multiple_times_S64_symbol	},
	{	0,	"qb_do_min_multiple_times_U08",	qb_do_min_multiple_times_U08_symbol	},
	{	0,	"qb_do_min_multiple_times_U16",	qb_do_min_multiple_times_U16_symbol	},
	{	0,	"qb_do_min_multiple_times_U32",	qb_do_min_multiple_times_U32_symbol	},
	{	0,	"qb_do_min_multiple_times_U64",	qb_do_min_multiple_times_U64_symbol	},
	{	0,	"qb_do_mix_multiple_times_F32",	qb_do_mix_multiple_times_F32_symbol	},
	{	0,	"qb_do_mix_multiple_times_F64",	qb_do_mix_multiple_times_F64_symbol	},
	{	0,	"qb_do_modulo_2x_multiple_times_F32",	qb_do_modulo_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_modulo_2x_multiple_times_F64",	qb_do_modulo_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_modulo_3x_multiple_times_F32",	qb_do_modulo_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_modulo_3x_multiple_times_F64",	qb_do_modulo_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_modulo_4x_multiple_times_F32",	qb_do_modulo_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_modulo_4x_multiple_times_F64",	qb_do_modulo_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_modulo_multiple_times_F32",	qb_do_modulo_multiple_times_F32_symbol	},
	{	0,	"qb_do_modulo_multiple_times_F64",	qb_do_modulo_multiple_times_F64_symbol	},
	{	0,	"qb_do_modulo_multiple_times_S08",	qb_do_modulo_multiple_times_S08_symbol	},
	{	0,	"qb_do_modulo_multiple_times_S16",	qb_do_modulo_multiple_times_S16_symbol	},
	{	0,	"qb_do_modulo_multiple_times_S32",	qb_do_modulo_multiple_times_S32_symbol	},
	{	0,	"qb_do_modulo_multiple_times_S64",	qb_do_modulo_multiple_times_S64_symbol	},
	{	0,	"qb_do_modulo_multiple_times_U08",	qb_do_modulo_multiple_times_U08_symbol	},
	{	0,	"qb_do_modulo_multiple_times_U16",	qb_do_modulo_multiple_times_U16_symbol	},
	{	0,	"qb_do_modulo_multiple_times_U32",	qb_do_modulo_multiple_times_U32_symbol	},
	{	0,	"qb_do_modulo_multiple_times_U64",	qb_do_modulo_multiple_times_U64_symbol	},
	{	0,	"qb_do_multiply_2x_multiple_times_F32",	qb_do_multiply_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_2x_multiple_times_F64",	qb_do_multiply_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_3x_multiple_times_F32",	qb_do_multiply_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_3x_multiple_times_F64",	qb_do_multiply_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_4x_multiple_times_F32",	qb_do_multiply_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_4x_multiple_times_F64",	qb_do_multiply_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_accumulate_2x_multiple_times_F32",	qb_do_multiply_accumulate_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_accumulate_2x_multiple_times_F64",	qb_do_multiply_accumulate_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_accumulate_3x_multiple_times_F32",	qb_do_multiply_accumulate_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_accumulate_3x_multiple_times_F64",	qb_do_multiply_accumulate_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_accumulate_4x_multiple_times_F32",	qb_do_multiply_accumulate_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_accumulate_4x_multiple_times_F64",	qb_do_multiply_accumulate_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_F32",	qb_do_multiply_accumulate_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_F64",	qb_do_multiply_accumulate_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_S32",	qb_do_multiply_accumulate_multiple_times_S32_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_S64",	qb_do_multiply_accumulate_multiple_times_S64_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_U32",	qb_do_multiply_accumulate_multiple_times_U32_symbol	},
	{	0,	"qb_do_multiply_accumulate_multiple_times_U64",	qb_do_multiply_accumulate_multiple_times_U64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_2x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_2x_F64",	qb_do_multiply_matrix_by_matrix_cm_2x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32",	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64",	qb_do_multiply_matrix_by_matrix_cm_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_3x_F32",	qb_do_multiply_matrix_by_matrix_cm_3x_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_3x_F64",	qb_do_multiply_matrix_by_matrix_cm_3x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32",	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64",	qb_do_multiply_matrix_by_matrix_cm_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32",	qb_do_multiply_matrix_by_matrix_cm_3x_padded_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_4x_F32",	qb_do_multiply_matrix_by_matrix_cm_4x_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_4x_F64",	qb_do_multiply_matrix_by_matrix_cm_4x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32",	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64",	qb_do_multiply_matrix_by_matrix_cm_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_F32",	qb_do_multiply_matrix_by_matrix_cm_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_F64",	qb_do_multiply_matrix_by_matrix_cm_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32",	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64",	qb_do_multiply_matrix_by_matrix_cm_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_2x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_2x_F64",	qb_do_multiply_matrix_by_vector_cm_2x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32",	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64",	qb_do_multiply_matrix_by_vector_cm_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_3x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_3x_F64",	qb_do_multiply_matrix_by_vector_cm_3x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32",	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64",	qb_do_multiply_matrix_by_vector_cm_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_3x_padded_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_4x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_4x_F64",	qb_do_multiply_matrix_by_vector_cm_4x_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32",	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64",	qb_do_multiply_matrix_by_vector_cm_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_F32",	qb_do_multiply_matrix_by_vector_cm_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_F64",	qb_do_multiply_matrix_by_vector_cm_F64_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_multiple_times_F32",	qb_do_multiply_matrix_by_vector_cm_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_matrix_by_vector_cm_multiple_times_F64",	qb_do_multiply_matrix_by_vector_cm_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_multiple_times_F32",	qb_do_multiply_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_multiple_times_F64",	qb_do_multiply_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_multiple_times_S08",	qb_do_multiply_multiple_times_S08_symbol	},
	{	0,	"qb_do_multiply_multiple_times_S16",	qb_do_multiply_multiple_times_S16_symbol	},
	{	0,	"qb_do_multiply_multiple_times_S32",	qb_do_multiply_multiple_times_S32_symbol	},
	{	0,	"qb_do_multiply_multiple_times_S64",	qb_do_multiply_multiple_times_S64_symbol	},
	{	0,	"qb_do_multiply_multiple_times_U08",	qb_do_multiply_multiple_times_U08_symbol	},
	{	0,	"qb_do_multiply_multiple_times_U16",	qb_do_multiply_multiple_times_U16_symbol	},
	{	0,	"qb_do_multiply_multiple_times_U32",	qb_do_multiply_multiple_times_U32_symbol	},
	{	0,	"qb_do_multiply_multiple_times_U64",	qb_do_multiply_multiple_times_U64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_2x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_2x_F64",	qb_do_multiply_vector_by_matrix_cm_2x_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32",	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64",	qb_do_multiply_vector_by_matrix_cm_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_3x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_3x_F64",	qb_do_multiply_vector_by_matrix_cm_3x_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32",	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64",	qb_do_multiply_vector_by_matrix_cm_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_3x_padded_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_4x_F32",	(void*) -1	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_4x_F64",	qb_do_multiply_vector_by_matrix_cm_4x_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32",	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64",	qb_do_multiply_vector_by_matrix_cm_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_F32",	qb_do_multiply_vector_by_matrix_cm_F32_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_F64",	qb_do_multiply_vector_by_matrix_cm_F64_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_multiple_times_F32",	qb_do_multiply_vector_by_matrix_cm_multiple_times_F32_symbol	},
	{	0,	"qb_do_multiply_vector_by_matrix_cm_multiple_times_F64",	qb_do_multiply_vector_by_matrix_cm_multiple_times_F64_symbol	},
	{	0,	"qb_do_negate_2x_multiple_times_F32",	qb_do_negate_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_negate_2x_multiple_times_F64",	qb_do_negate_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_negate_3x_multiple_times_F32",	qb_do_negate_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_negate_3x_multiple_times_F64",	qb_do_negate_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_negate_4x_multiple_times_F32",	qb_do_negate_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_negate_4x_multiple_times_F64",	qb_do_negate_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_negate_multiple_times_F32",	qb_do_negate_multiple_times_F32_symbol	},
	{	0,	"qb_do_negate_multiple_times_F64",	qb_do_negate_multiple_times_F64_symbol	},
	{	0,	"qb_do_negate_multiple_times_I08",	qb_do_negate_multiple_times_I08_symbol	},
	{	0,	"qb_do_negate_multiple_times_I16",	qb_do_negate_multiple_times_I16_symbol	},
	{	0,	"qb_do_negate_multiple_times_I32",	qb_do_negate_multiple_times_I32_symbol	},
	{	0,	"qb_do_negate_multiple_times_I64",	qb_do_negate_multiple_times_I64_symbol	},
	{	0,	"qb_do_normalize_2x_F32",	(void*) -1	},
	{	0,	"qb_do_normalize_2x_F64",	qb_do_normalize_2x_F64_symbol	},
	{	0,	"qb_do_normalize_2x_multiple_times_F32",	qb_do_normalize_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_normalize_2x_multiple_times_F64",	qb_do_normalize_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_normalize_3x_F32",	(void*) -1	},
	{	0,	"qb_do_normalize_3x_F64",	qb_do_normalize_3x_F64_symbol	},
	{	0,	"qb_do_normalize_3x_multiple_times_F32",	qb_do_normalize_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_normalize_3x_multiple_times_F64",	qb_do_normalize_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_normalize_4x_F32",	(void*) -1	},
	{	0,	"qb_do_normalize_4x_F64",	qb_do_normalize_4x_F64_symbol	},
	{	0,	"qb_do_normalize_4x_multiple_times_F32",	qb_do_normalize_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_normalize_4x_multiple_times_F64",	qb_do_normalize_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_normalize_F32",	qb_do_normalize_F32_symbol	},
	{	0,	"qb_do_normalize_F64",	qb_do_normalize_F64_symbol	},
	{	0,	"qb_do_normalize_multiple_times_F32",	qb_do_normalize_multiple_times_F32_symbol	},
	{	0,	"qb_do_normalize_multiple_times_F64",	qb_do_normalize_multiple_times_F64_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_F32",	qb_do_not_equal_vector_multiple_times_F32_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_F64",	qb_do_not_equal_vector_multiple_times_F64_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_I08",	qb_do_not_equal_vector_multiple_times_I08_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_I16",	qb_do_not_equal_vector_multiple_times_I16_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_I32",	qb_do_not_equal_vector_multiple_times_I32_symbol	},
	{	0,	"qb_do_not_equal_vector_multiple_times_I64",	qb_do_not_equal_vector_multiple_times_I64_symbol	},
	{	0,	"qb_do_not_vector_multiple_times_I32",	qb_do_not_vector_multiple_times_I32_symbol	},
	{	0,	"qb_do_pack_F32",	(void*) -1	},
	{	0,	"qb_do_pack_F64",	(void*) -1	},
	{	0,	"qb_do_pow_multiple_times_F32",	qb_do_pow_multiple_times_F32_symbol	},
	{	0,	"qb_do_pow_multiple_times_F64",	qb_do_pow_multiple_times_F64_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_F32",	qb_do_print_multidimensional_variable_F32_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_F64",	qb_do_print_multidimensional_variable_F64_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_S08",	qb_do_print_multidimensional_variable_S08_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_S16",	qb_do_print_multidimensional_variable_S16_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_S32",	qb_do_print_multidimensional_variable_S32_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_S64",	qb_do_print_multidimensional_variable_S64_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_U08",	qb_do_print_multidimensional_variable_U08_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_U16",	qb_do_print_multidimensional_variable_U16_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_U32",	qb_do_print_multidimensional_variable_U32_symbol	},
	{	0,	"qb_do_print_multidimensional_variable_U64",	qb_do_print_multidimensional_variable_U64_symbol	},
	{	0,	"qb_do_print_variable_F32",	qb_do_print_variable_F32_symbol	},
	{	0,	"qb_do_print_variable_F64",	qb_do_print_variable_F64_symbol	},
	{	0,	"qb_do_print_variable_S08",	qb_do_print_variable_S08_symbol	},
	{	0,	"qb_do_print_variable_S16",	qb_do_print_variable_S16_symbol	},
	{	0,	"qb_do_print_variable_S32",	qb_do_print_variable_S32_symbol	},
	{	0,	"qb_do_print_variable_S64",	qb_do_print_variable_S64_symbol	},
	{	0,	"qb_do_print_variable_U08",	qb_do_print_variable_U08_symbol	},
	{	0,	"qb_do_print_variable_U16",	qb_do_print_variable_U16_symbol	},
	{	0,	"qb_do_print_variable_U32",	qb_do_print_variable_U32_symbol	},
	{	0,	"qb_do_print_variable_U64",	qb_do_print_variable_U64_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_F32",	qb_do_print_variable_multiple_times_F32_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_F64",	qb_do_print_variable_multiple_times_F64_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_S08",	qb_do_print_variable_multiple_times_S08_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_S16",	qb_do_print_variable_multiple_times_S16_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_S32",	qb_do_print_variable_multiple_times_S32_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_S64",	qb_do_print_variable_multiple_times_S64_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_U08",	qb_do_print_variable_multiple_times_U08_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_U16",	qb_do_print_variable_multiple_times_U16_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_U32",	qb_do_print_variable_multiple_times_U32_symbol	},
	{	0,	"qb_do_print_variable_multiple_times_U64",	qb_do_print_variable_multiple_times_U64_symbol	},
	{	0,	"qb_do_radian_to_degree_multiple_times_F32",	qb_do_radian_to_degree_multiple_times_F32_symbol	},
	{	0,	"qb_do_radian_to_degree_multiple_times_F64",	qb_do_radian_to_degree_multiple_times_F64_symbol	},
	{	0,	"qb_do_random_S08",	qb_do_random_S08_symbol	},
	{	0,	"qb_do_random_S16",	qb_do_random_S16_symbol	},
	{	0,	"qb_do_random_S32",	qb_do_random_S32_symbol	},
	{	0,	"qb_do_random_S64",	qb_do_random_S64_symbol	},
	{	0,	"qb_do_random_U08",	qb_do_random_U08_symbol	},
	{	0,	"qb_do_random_U16",	qb_do_random_U16_symbol	},
	{	0,	"qb_do_random_U32",	qb_do_random_U32_symbol	},
	{	0,	"qb_do_random_U64",	qb_do_random_U64_symbol	},
	{	0,	"qb_do_random_mt_S08",	qb_do_random_mt_S08_symbol	},
	{	0,	"qb_do_random_mt_S16",	qb_do_random_mt_S16_symbol	},
	{	0,	"qb_do_random_mt_S32",	qb_do_random_mt_S32_symbol	},
	{	0,	"qb_do_random_mt_S64",	qb_do_random_mt_S64_symbol	},
	{	0,	"qb_do_random_mt_U08",	qb_do_random_mt_U08_symbol	},
	{	0,	"qb_do_random_mt_U16",	qb_do_random_mt_U16_symbol	},
	{	0,	"qb_do_random_mt_U32",	qb_do_random_mt_U32_symbol	},
	{	0,	"qb_do_random_mt_U64",	qb_do_random_mt_U64_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_S08",	qb_do_random_mt_multiple_times_S08_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_S16",	qb_do_random_mt_multiple_times_S16_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_S32",	qb_do_random_mt_multiple_times_S32_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_S64",	qb_do_random_mt_multiple_times_S64_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_U08",	qb_do_random_mt_multiple_times_U08_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_U16",	qb_do_random_mt_multiple_times_U16_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_U32",	qb_do_random_mt_multiple_times_U32_symbol	},
	{	0,	"qb_do_random_mt_multiple_times_U64",	qb_do_random_mt_multiple_times_U64_symbol	},
	{	0,	"qb_do_random_multiple_times_S08",	qb_do_random_multiple_times_S08_symbol	},
	{	0,	"qb_do_random_multiple_times_S16",	qb_do_random_multiple_times_S16_symbol	},
	{	0,	"qb_do_random_multiple_times_S32",	qb_do_random_multiple_times_S32_symbol	},
	{	0,	"qb_do_random_multiple_times_S64",	qb_do_random_multiple_times_S64_symbol	},
	{	0,	"qb_do_random_multiple_times_U08",	qb_do_random_multiple_times_U08_symbol	},
	{	0,	"qb_do_random_multiple_times_U16",	qb_do_random_multiple_times_U16_symbol	},
	{	0,	"qb_do_random_multiple_times_U32",	qb_do_random_multiple_times_U32_symbol	},
	{	0,	"qb_do_random_multiple_times_U64",	qb_do_random_multiple_times_U64_symbol	},
	{	0,	"qb_do_range_F32",	qb_do_range_F32_symbol	},
	{	0,	"qb_do_range_F64",	qb_do_range_F64_symbol	},
	{	0,	"qb_do_range_S08",	qb_do_range_S08_symbol	},
	{	0,	"qb_do_range_S16",	qb_do_range_S16_symbol	},
	{	0,	"qb_do_range_S32",	qb_do_range_S32_symbol	},
	{	0,	"qb_do_range_S64",	qb_do_range_S64_symbol	},
	{	0,	"qb_do_range_U08",	qb_do_range_U08_symbol	},
	{	0,	"qb_do_range_U16",	qb_do_range_U16_symbol	},
	{	0,	"qb_do_range_U32",	qb_do_range_U32_symbol	},
	{	0,	"qb_do_range_U64",	qb_do_range_U64_symbol	},
	{	0,	"qb_do_reflect_2x_F32",	(void*) -1	},
	{	0,	"qb_do_reflect_2x_F64",	qb_do_reflect_2x_F64_symbol	},
	{	0,	"qb_do_reflect_2x_multiple_times_F32",	qb_do_reflect_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_reflect_2x_multiple_times_F64",	qb_do_reflect_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_reflect_3x_F32",	(void*) -1	},
	{	0,	"qb_do_reflect_3x_F64",	qb_do_reflect_3x_F64_symbol	},
	{	0,	"qb_do_reflect_3x_multiple_times_F32",	qb_do_reflect_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_reflect_3x_multiple_times_F64",	qb_do_reflect_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_reflect_4x_F32",	(void*) -1	},
	{	0,	"qb_do_reflect_4x_F64",	qb_do_reflect_4x_F64_symbol	},
	{	0,	"qb_do_reflect_4x_multiple_times_F32",	qb_do_reflect_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_reflect_4x_multiple_times_F64",	qb_do_reflect_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_reflect_F32",	qb_do_reflect_F32_symbol	},
	{	0,	"qb_do_reflect_F64",	qb_do_reflect_F64_symbol	},
	{	0,	"qb_do_reflect_multiple_times_F32",	qb_do_reflect_multiple_times_F32_symbol	},
	{	0,	"qb_do_reflect_multiple_times_F64",	qb_do_reflect_multiple_times_F64_symbol	},
	{	0,	"qb_do_refract_2x_F32",	(void*) -1	},
	{	0,	"qb_do_refract_2x_F64",	qb_do_refract_2x_F64_symbol	},
	{	0,	"qb_do_refract_2x_multiple_times_F32",	qb_do_refract_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_refract_2x_multiple_times_F64",	qb_do_refract_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_refract_3x_F32",	(void*) -1	},
	{	0,	"qb_do_refract_3x_F64",	qb_do_refract_3x_F64_symbol	},
	{	0,	"qb_do_refract_3x_multiple_times_F32",	qb_do_refract_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_refract_3x_multiple_times_F64",	qb_do_refract_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_refract_4x_F32",	(void*) -1	},
	{	0,	"qb_do_refract_4x_F64",	qb_do_refract_4x_F64_symbol	},
	{	0,	"qb_do_refract_4x_multiple_times_F32",	qb_do_refract_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_refract_4x_multiple_times_F64",	qb_do_refract_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_refract_F32",	qb_do_refract_F32_symbol	},
	{	0,	"qb_do_refract_F64",	qb_do_refract_F64_symbol	},
	{	0,	"qb_do_refract_multiple_times_F32",	qb_do_refract_multiple_times_F32_symbol	},
	{	0,	"qb_do_refract_multiple_times_F64",	qb_do_refract_multiple_times_F64_symbol	},
	{	0,	"qb_do_remove_premultiplication_multiple_times_F32",	qb_do_remove_premultiplication_multiple_times_F32_symbol	},
	{	0,	"qb_do_remove_premultiplication_multiple_times_F64",	qb_do_remove_premultiplication_multiple_times_F64_symbol	},
	{	0,	"qb_do_reverse_sort_F32",	qb_do_reverse_sort_F32_symbol	},
	{	0,	"qb_do_reverse_sort_F64",	qb_do_reverse_sort_F64_symbol	},
	{	0,	"qb_do_reverse_sort_S08",	qb_do_reverse_sort_S08_symbol	},
	{	0,	"qb_do_reverse_sort_S16",	qb_do_reverse_sort_S16_symbol	},
	{	0,	"qb_do_reverse_sort_S32",	qb_do_reverse_sort_S32_symbol	},
	{	0,	"qb_do_reverse_sort_S64",	qb_do_reverse_sort_S64_symbol	},
	{	0,	"qb_do_reverse_sort_U08",	qb_do_reverse_sort_U08_symbol	},
	{	0,	"qb_do_reverse_sort_U16",	qb_do_reverse_sort_U16_symbol	},
	{	0,	"qb_do_reverse_sort_U32",	qb_do_reverse_sort_U32_symbol	},
	{	0,	"qb_do_reverse_sort_U64",	qb_do_reverse_sort_U64_symbol	},
	{	0,	"qb_do_round_multiple_times_F32",	qb_do_round_multiple_times_F32_symbol	},
	{	0,	"qb_do_round_multiple_times_F64",	qb_do_round_multiple_times_F64_symbol	},
	{	0,	"qb_do_rsqrt_multiple_times_F32",	qb_do_rsqrt_multiple_times_F32_symbol	},
	{	0,	"qb_do_rsqrt_multiple_times_F64",	qb_do_rsqrt_multiple_times_F64_symbol	},
	{	0,	"qb_do_sample_bilinear_3x_F32",	qb_do_sample_bilinear_3x_F32_symbol	},
	{	0,	"qb_do_sample_bilinear_3x_F64",	qb_do_sample_bilinear_3x_F64_symbol	},
	{	0,	"qb_do_sample_bilinear_3x_multiple_times_F32",	qb_do_sample_bilinear_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_sample_bilinear_3x_multiple_times_F64",	qb_do_sample_bilinear_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_sample_bilinear_4x_F32",	qb_do_sample_bilinear_4x_F32_symbol	},
	{	0,	"qb_do_sample_bilinear_4x_F64",	qb_do_sample_bilinear_4x_F64_symbol	},
	{	0,	"qb_do_sample_bilinear_4x_multiple_times_F32",	qb_do_sample_bilinear_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_sample_bilinear_4x_multiple_times_F64",	qb_do_sample_bilinear_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_sample_nearest_3x_F32",	(void*) -1	},
	{	0,	"qb_do_sample_nearest_3x_F64",	qb_do_sample_nearest_3x_F64_symbol	},
	{	0,	"qb_do_sample_nearest_3x_multiple_times_F32",	qb_do_sample_nearest_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_sample_nearest_3x_multiple_times_F64",	qb_do_sample_nearest_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_sample_nearest_4x_F32",	(void*) -1	},
	{	0,	"qb_do_sample_nearest_4x_F64",	qb_do_sample_nearest_4x_F64_symbol	},
	{	0,	"qb_do_sample_nearest_4x_multiple_times_F32",	qb_do_sample_nearest_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_sample_nearest_4x_multiple_times_F64",	qb_do_sample_nearest_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_S08",	qb_do_shift_left_multiple_times_S08_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_S16",	qb_do_shift_left_multiple_times_S16_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_S32",	qb_do_shift_left_multiple_times_S32_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_S64",	qb_do_shift_left_multiple_times_S64_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_U08",	qb_do_shift_left_multiple_times_U08_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_U16",	qb_do_shift_left_multiple_times_U16_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_U32",	qb_do_shift_left_multiple_times_U32_symbol	},
	{	0,	"qb_do_shift_left_multiple_times_U64",	qb_do_shift_left_multiple_times_U64_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_S08",	qb_do_shift_right_multiple_times_S08_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_S16",	qb_do_shift_right_multiple_times_S16_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_S32",	qb_do_shift_right_multiple_times_S32_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_S64",	qb_do_shift_right_multiple_times_S64_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_U08",	qb_do_shift_right_multiple_times_U08_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_U16",	qb_do_shift_right_multiple_times_U16_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_U32",	qb_do_shift_right_multiple_times_U32_symbol	},
	{	0,	"qb_do_shift_right_multiple_times_U64",	qb_do_shift_right_multiple_times_U64_symbol	},
	{	0,	"qb_do_shuffle_F32",	qb_do_shuffle_F32_symbol	},
	{	0,	"qb_do_shuffle_F64",	qb_do_shuffle_F64_symbol	},
	{	0,	"qb_do_shuffle_I08",	qb_do_shuffle_I08_symbol	},
	{	0,	"qb_do_shuffle_I16",	qb_do_shuffle_I16_symbol	},
	{	0,	"qb_do_shuffle_I32",	qb_do_shuffle_I32_symbol	},
	{	0,	"qb_do_shuffle_I64",	qb_do_shuffle_I64_symbol	},
	{	0,	"qb_do_sign_F32",	(void*) -1	},
	{	0,	"qb_do_sign_F64",	(void*) -1	},
	{	0,	"qb_do_sign_multiple_times_F32",	qb_do_sign_multiple_times_F32_symbol	},
	{	0,	"qb_do_sign_multiple_times_F64",	qb_do_sign_multiple_times_F64_symbol	},
	{	0,	"qb_do_sin_multiple_times_F32",	qb_do_sin_multiple_times_F32_symbol	},
	{	0,	"qb_do_sin_multiple_times_F64",	qb_do_sin_multiple_times_F64_symbol	},
	{	0,	"qb_do_sinh_multiple_times_F32",	qb_do_sinh_multiple_times_F32_symbol	},
	{	0,	"qb_do_sinh_multiple_times_F64",	qb_do_sinh_multiple_times_F64_symbol	},
	{	0,	"qb_do_smooth_step_F32",	(void*) -1	},
	{	0,	"qb_do_smooth_step_F64",	(void*) -1	},
	{	0,	"qb_do_smooth_step_multiple_times_F32",	qb_do_smooth_step_multiple_times_F32_symbol	},
	{	0,	"qb_do_smooth_step_multiple_times_F64",	qb_do_smooth_step_multiple_times_F64_symbol	},
	{	0,	"qb_do_sort_F32",	qb_do_sort_F32_symbol	},
	{	0,	"qb_do_sort_F64",	qb_do_sort_F64_symbol	},
	{	0,	"qb_do_sort_S08",	qb_do_sort_S08_symbol	},
	{	0,	"qb_do_sort_S16",	qb_do_sort_S16_symbol	},
	{	0,	"qb_do_sort_S32",	qb_do_sort_S32_symbol	},
	{	0,	"qb_do_sort_S64",	qb_do_sort_S64_symbol	},
	{	0,	"qb_do_sort_U08",	qb_do_sort_U08_symbol	},
	{	0,	"qb_do_sort_U16",	qb_do_sort_U16_symbol	},
	{	0,	"qb_do_sort_U32",	qb_do_sort_U32_symbol	},
	{	0,	"qb_do_sort_U64",	qb_do_sort_U64_symbol	},
	{	0,	"qb_do_sqrt_multiple_times_F32",	qb_do_sqrt_multiple_times_F32_symbol	},
	{	0,	"qb_do_sqrt_multiple_times_F64",	qb_do_sqrt_multiple_times_F64_symbol	},
	{	0,	"qb_do_step_multiple_times_F32",	qb_do_step_multiple_times_F32_symbol	},
	{	0,	"qb_do_step_multiple_times_F64",	qb_do_step_multiple_times_F64_symbol	},
	{	0,	"qb_do_subarray_position_F32",	qb_do_subarray_position_F32_symbol	},
	{	0,	"qb_do_subarray_position_F64",	qb_do_subarray_position_F64_symbol	},
	{	0,	"qb_do_subarray_position_I08",	qb_do_subarray_position_I08_symbol	},
	{	0,	"qb_do_subarray_position_I16",	qb_do_subarray_position_I16_symbol	},
	{	0,	"qb_do_subarray_position_I32",	qb_do_subarray_position_I32_symbol	},
	{	0,	"qb_do_subarray_position_I64",	qb_do_subarray_position_I64_symbol	},
	{	0,	"qb_do_subarray_position_from_end_F32",	qb_do_subarray_position_from_end_F32_symbol	},
	{	0,	"qb_do_subarray_position_from_end_F64",	qb_do_subarray_position_from_end_F64_symbol	},
	{	0,	"qb_do_subarray_position_from_end_I08",	qb_do_subarray_position_from_end_I08_symbol	},
	{	0,	"qb_do_subarray_position_from_end_I16",	qb_do_subarray_position_from_end_I16_symbol	},
	{	0,	"qb_do_subarray_position_from_end_I32",	qb_do_subarray_position_from_end_I32_symbol	},
	{	0,	"qb_do_subarray_position_from_end_I64",	qb_do_subarray_position_from_end_I64_symbol	},
	{	0,	"qb_do_subtract_2x_multiple_times_F32",	qb_do_subtract_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_subtract_2x_multiple_times_F64",	qb_do_subtract_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_subtract_3x_multiple_times_F32",	qb_do_subtract_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_subtract_3x_multiple_times_F64",	qb_do_subtract_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_subtract_4x_multiple_times_F32",	qb_do_subtract_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_subtract_4x_multiple_times_F64",	qb_do_subtract_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_subtract_multiple_times_F32",	qb_do_subtract_multiple_times_F32_symbol	},
	{	0,	"qb_do_subtract_multiple_times_F64",	qb_do_subtract_multiple_times_F64_symbol	},
	{	0,	"qb_do_subtract_multiple_times_I08",	qb_do_subtract_multiple_times_I08_symbol	},
	{	0,	"qb_do_subtract_multiple_times_I16",	qb_do_subtract_multiple_times_I16_symbol	},
	{	0,	"qb_do_subtract_multiple_times_I32",	qb_do_subtract_multiple_times_I32_symbol	},
	{	0,	"qb_do_subtract_multiple_times_I64",	qb_do_subtract_multiple_times_I64_symbol	},
	{	0,	"qb_do_tan_multiple_times_F32",	qb_do_tan_multiple_times_F32_symbol	},
	{	0,	"qb_do_tan_multiple_times_F64",	qb_do_tan_multiple_times_F64_symbol	},
	{	0,	"qb_do_tanh_multiple_times_F32",	qb_do_tanh_multiple_times_F32_symbol	},
	{	0,	"qb_do_tanh_multiple_times_F64",	qb_do_tanh_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_2x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_cm_2x_F64",	qb_do_transform_vector_cm_2x_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_2x_multiple_times_F32",	qb_do_transform_vector_cm_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_cm_2x_multiple_times_F64",	qb_do_transform_vector_cm_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_3x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_cm_3x_F64",	qb_do_transform_vector_cm_3x_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_3x_multiple_times_F32",	qb_do_transform_vector_cm_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_cm_3x_multiple_times_F64",	qb_do_transform_vector_cm_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_4x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_cm_4x_F64",	qb_do_transform_vector_cm_4x_F64_symbol	},
	{	0,	"qb_do_transform_vector_cm_4x_multiple_times_F32",	qb_do_transform_vector_cm_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_cm_4x_multiple_times_F64",	qb_do_transform_vector_cm_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_2x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_rm_2x_F64",	qb_do_transform_vector_rm_2x_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_2x_multiple_times_F32",	qb_do_transform_vector_rm_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_rm_2x_multiple_times_F64",	qb_do_transform_vector_rm_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_3x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_rm_3x_F64",	qb_do_transform_vector_rm_3x_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_3x_multiple_times_F32",	qb_do_transform_vector_rm_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_rm_3x_multiple_times_F64",	qb_do_transform_vector_rm_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_4x_F32",	(void*) -1	},
	{	0,	"qb_do_transform_vector_rm_4x_F64",	qb_do_transform_vector_rm_4x_F64_symbol	},
	{	0,	"qb_do_transform_vector_rm_4x_multiple_times_F32",	qb_do_transform_vector_rm_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transform_vector_rm_4x_multiple_times_F64",	qb_do_transform_vector_rm_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_2x_F32",	(void*) -1	},
	{	0,	"qb_do_transpose_matrix_2x_F64",	qb_do_transpose_matrix_2x_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_2x_multiple_times_F32",	qb_do_transpose_matrix_2x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_2x_multiple_times_F64",	qb_do_transpose_matrix_2x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_3x_F32",	qb_do_transpose_matrix_3x_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_3x_F64",	qb_do_transpose_matrix_3x_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_3x_multiple_times_F32",	qb_do_transpose_matrix_3x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_3x_multiple_times_F64",	qb_do_transpose_matrix_3x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_4x_F32",	qb_do_transpose_matrix_4x_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_4x_F64",	qb_do_transpose_matrix_4x_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_4x_multiple_times_F32",	qb_do_transpose_matrix_4x_multiple_times_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_4x_multiple_times_F64",	qb_do_transpose_matrix_4x_multiple_times_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_F32",	qb_do_transpose_matrix_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_F64",	qb_do_transpose_matrix_F64_symbol	},
	{	0,	"qb_do_transpose_matrix_multiple_times_F32",	qb_do_transpose_matrix_multiple_times_F32_symbol	},
	{	0,	"qb_do_transpose_matrix_multiple_times_F64",	qb_do_transpose_matrix_multiple_times_F64_symbol	},
	{	0,	"qb_do_utf8decode_U16",	qb_do_utf8decode_U16_symbol	},
	{	0,	"qb_do_utf8decode_U32",	qb_do_utf8decode_U32_symbol	},
	{	0,	"qb_do_utf8encode_U16",	qb_do_utf8encode_U16_symbol	},
	{	0,	"qb_do_utf8encode_U32",	qb_do_utf8encode_U32_symbol	},
	{	0,	"qb_enlarge_segment",	qb_enlarge_segment_symbol	},
	{	0,	"qb_execute_function_call",	qb_execute_function_call_symbol	},
	{	0,	"qb_fast_rsqrt",	qb_fast_rsqrt	},
	{	0,	"qb_fast_rsqrtf",	qb_fast_rsqrtf	},
	{	0,	"qb_fast_sqrt",	qb_fast_sqrt	},
	{	0,	"qb_fast_sqrtf",	qb_fast_sqrtf	},
	{	0,	"qb_finalize_function_call",	qb_finalize_function_call_symbol	},
	{	0,	"qb_get_array_sprintf_length_F32",	qb_get_array_sprintf_length_F32_symbol	},
	{	0,	"qb_get_array_sprintf_length_F64",	qb_get_array_sprintf_length_F64_symbol	},
	{	0,	"qb_get_array_sprintf_length_S08",	qb_get_array_sprintf_length_S08_symbol	},
	{	0,	"qb_get_array_sprintf_length_S16",	qb_get_array_sprintf_length_S16_symbol	},
	{	0,	"qb_get_array_sprintf_length_S32",	qb_get_array_sprintf_length_S32_symbol	},
	{	0,	"qb_get_array_sprintf_length_S64",	qb_get_array_sprintf_length_S64_symbol	},
	{	0,	"qb_get_array_sprintf_length_U08",	qb_get_array_sprintf_length_U08_symbol	},
	{	0,	"qb_get_array_sprintf_length_U16",	qb_get_array_sprintf_length_U16_symbol	},
	{	0,	"qb_get_array_sprintf_length_U32",	qb_get_array_sprintf_length_U32_symbol	},
	{	0,	"qb_get_array_sprintf_length_U64",	qb_get_array_sprintf_length_U64_symbol	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_F32",	qb_get_multidimensional_array_sprintf_length_F32	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_F64",	qb_get_multidimensional_array_sprintf_length_F64	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_S08",	qb_get_multidimensional_array_sprintf_length_S08	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_S16",	qb_get_multidimensional_array_sprintf_length_S16	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_S32",	qb_get_multidimensional_array_sprintf_length_S32	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_S64",	qb_get_multidimensional_array_sprintf_length_S64	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_U08",	qb_get_multidimensional_array_sprintf_length_U08	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_U16",	qb_get_multidimensional_array_sprintf_length_U16	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_U32",	qb_get_multidimensional_array_sprintf_length_U32	},
	{	0,	"qb_get_multidimensional_array_sprintf_length_U64",	qb_get_multidimensional_array_sprintf_length_U64	},
	{	0,	"qb_get_range_length_F32",	qb_get_range_length_F32	},
	{	0,	"qb_get_range_length_F64",	qb_get_range_length_F64	},
	{	0,	"qb_get_range_length_S08",	qb_get_range_length_S08	},
	{	0,	"qb_get_range_length_S16",	qb_get_range_length_S16	},
	{	0,	"qb_get_range_length_S32",	qb_get_range_length_S32	},
	{	0,	"qb_get_range_length_S64",	qb_get_range_length_S64	},
	{	0,	"qb_get_range_length_U08",	qb_get_range_length_U08	},
	{	0,	"qb_get_range_length_U16",	qb_get_range_length_U16	},
	{	0,	"qb_get_range_length_U32",	qb_get_range_length_U32	},
	{	0,	"qb_get_range_length_U64",	qb_get_range_length_U64	},
	{	0,	"qb_get_scalar_sprintf_length_F32",	qb_get_scalar_sprintf_length_F32_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_F64",	qb_get_scalar_sprintf_length_F64_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_S08",	qb_get_scalar_sprintf_length_S08_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_S16",	qb_get_scalar_sprintf_length_S16_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_S32",	qb_get_scalar_sprintf_length_S32_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_S64",	qb_get_scalar_sprintf_length_S64_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_U08",	qb_get_scalar_sprintf_length_U08_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_U16",	qb_get_scalar_sprintf_length_U16_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_U32",	qb_get_scalar_sprintf_length_U32_symbol	},
	{	0,	"qb_get_scalar_sprintf_length_U64",	qb_get_scalar_sprintf_length_U64_symbol	},
	{	0,	"qb_get_unique_element_count_F32",	qb_get_unique_element_count_F32	},
	{	0,	"qb_get_unique_element_count_F64",	qb_get_unique_element_count_F64	},
	{	0,	"qb_get_unique_element_count_I08",	qb_get_unique_element_count_I08	},
	{	0,	"qb_get_unique_element_count_I16",	qb_get_unique_element_count_I16	},
	{	0,	"qb_get_unique_element_count_I32",	qb_get_unique_element_count_I32	},
	{	0,	"qb_get_unique_element_count_I64",	qb_get_unique_element_count_I64	},
	{	0,	"qb_get_utf8_codepoint_count",	qb_get_utf8_codepoint_count_symbol	},
	{	0,	"qb_get_utf8_encoded_length_U16",	qb_get_utf8_encoded_length_U16_symbol	},
	{	0,	"qb_get_utf8_encoded_length_U32",	qb_get_utf8_encoded_length_U32_symbol	},
	{	0,	"qb_initialize_function_call",	qb_initialize_function_call_symbol	},
	{	0,	"qb_quick_floor",	(void*) -1	},
	{	0,	"qb_quick_floorf",	(void*) -1	},
	{	0,	"qb_quick_round",	(void*) -1	},
	{	0,	"qb_quick_roundf",	(void*) -1	},
	{	0,	"qb_resync_argument",	qb_resync_argument_symbol	},
	{	0,	"qb_run_zend_extension_op",	qb_run_zend_extension_op_symbol	},
	{	0,	"qb_shrink_segment",	qb_shrink_segment_symbol	},
	{	0,	"sin",	sin	},
	{	0,	"sinf",	(void*) -1	},
	{	0,	"sinh",	sinh	},
	{	0,	"sinhf",	(void*) -1	},
	{	0,	"sqrt",	sqrt	},
	{	0,	"sqrtf",	(void*) -1	},
	{	0,	"tan",	tan	},
	{	0,	"tanf",	(void*) -1	},
	{	0,	"tanh",	tanh	},
	{	0,	"tanhf",	(void*) -1	},
	{	0,	"zend_bailout",	zend_bailout_symbol	},
	{	0,	"zend_finite",	zend_finite_symbol	},
	{	0,	"zend_isinf",	zend_isinf_symbol	},
	{	0,	"zend_isnan",	zend_isnan_symbol	},
	{	0,	"zend_timeout",	zend_timeout	},
};

uint32_t global_native_symbol_count = 1135;
