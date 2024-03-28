#ifndef __APICAL_DEFECT_PIXEL_MEM_CONFIG_H__
#define __APICAL_DEFECT_PIXEL_MEM_CONFIG_H__


/*-----------------------------------------------------------------------------
  This confidential and proprietary software/information may be used only
  as authorized by a licensing agreement from Apical Limited

  (C) COPYRIGHT 2011 - 2014 Apical Limited
  ALL RIGHTS RESERVED

  The entire notice above must be reproduced on all authorized
  copies and copies may only be made to the extent permitted
  by a licensing agreement from Apical Limited.
  -----------------------------------------------------------------------------*/

#include "apical_isp_io.h"

// ------------------------------------------------------------------------------ //
// Instance 'defect_pixel_mem' of module 'defect_pixel_mem'
// ------------------------------------------------------------------------------ //

#define APICAL_DEFECT_PIXEL_MEM_BASE_ADDR (0xc000L)
#define APICAL_DEFECT_PIXEL_MEM_SIZE (0x4000)

#define APICAL_DEFECT_PIXEL_MEM_ARRAY_DATA_DEFAULT (0x0)
#define APICAL_DEFECT_PIXEL_MEM_ARRAY_DATA_DATASIZE (32)

// args: index (0-4095), data (32-bit)
static __inline void apical_defect_pixel_mem_array_data_write(uint32_t index, uint32_t data) {
	APICAL_WRITE_32(0xc000L + (index << 2), data);
}
static __inline uint32_t apical_defect_pixel_mem_array_data_read(uint32_t index) {
	return APICAL_READ_32(0xc000L + (index << 2));
}
// ------------------------------------------------------------------------------ //
#endif //__APICAL_DEFECT_PIXEL_MEM_CONFIG_H__
