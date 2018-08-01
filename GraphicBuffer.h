/*
 * Copyright (C) 2018  Fuzhou Rockchip Electronics Co., Ltd. All rights reserved.
 * Authors:
 *     lihuang <putin.li@rock-chips.com>
 *     libin <bin.li@rock-chips.com>
 *
 * This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * BY DOWNLOADING, INSTALLING, COPYING, SAVING OR OTHERWISE USING THIS SOFTWARE,
 * YOU ACKNOWLEDGE THAT YOU AGREE THE SOFTWARE RECEIVED FORM ROCKCHIP IS PROVIDED
 * TO YOU ON AN "AS IS" BASIS and ROCKCHP DISCLAIMS ANY AND ALL WARRANTIES AND
 * REPRESENTATIONS WITH RESPECT TO SUCH FILE, WHETHER EXPRESS, IMPLIED, STATUTORY
 * OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY IMPLIED WARRANTIES OF TITLE,
 * NON-INFRINGEMENT, MERCHANTABILITY, SATISFACTROY QUALITY, ACCURACY OR FITNESS FOR
 * A PARTICULAR PURPOSE.
 */

#ifndef _rk_graphic_buffer_h_
#define _rk_graphic_buffer_h_
#include <stdint.h>
#include <vector>
#include <sys/types.h>

#include <system/window.h>
#include <system/graphics.h>

#include <utils/Thread.h>

#include <EGL/egl.h>
#include <GLES/gl.h>

//////////////////////////////////////////////////////////////////////////////////
#include <hardware/hardware.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>

#include <sys/mman.h>
#include <linux/stddef.h>

#include <hardware/rga.h>
#include "stdio.h"

#include <utils/Atomic.h>
#include <utils/Errors.h>
#include <utils/Log.h>

#include "drmrga.h"

#ifndef RK_FORMAT_YCbCr_420_SP_10B
#define RK_FORMAT_YCbCr_420_SP_10B  0x20
#endif

#ifndef RK_FORMAT_YCrCb_420_SP_10B
#define RK_FORMAT_YCrCb_420_SP_10B  0x21
#endif
// -------------------------------------------------------------------------------
int         RkRgaGetHandleFd(buffer_handle_t handle, int *fd);
int         RkRgaGetHandleAttributes(buffer_handle_t handle,
                            std::vector<int> *attrs);
int         RkRgaGetHandleMapAddress(buffer_handle_t handle,
                                    void **buf);

int         RkRgaGetRgaFormat(int format);
#endif
