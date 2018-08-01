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

#ifndef _rockchip_rga_drm_gralloc_h_
#define _rockchip_rga_drm_gralloc_h_

#ifndef RK3368

#ifdef ANDROID_7_DRM
#include <hardware/gralloc.h>
#include <gralloc_drm.h>
#include <gralloc_drm_priv.h>
#else
#include <gralloc_priv.h>
#endif

#else
#include <hardware/gralloc.h>
#include <hardware/img_gralloc_public.h>

#ifndef GRALLOC_MODULE_PERFORM_GET_HADNLE_PRIME_FD
#define GRALLOC_MODULE_PERFORM_GET_HADNLE_PRIME_FD 0x08100002
#endif

#ifndef GRALLOC_MODULE_PERFORM_GET_HADNLE_ATTRIBUTES
#define GRALLOC_MODULE_PERFORM_GET_HADNLE_ATTRIBUTES 0x08100004
#endif

#ifndef GRALLOC_MODULE_PERFORM_GET_INTERNAL_FORMAT 
#define GRALLOC_MODULE_PERFORM_GET_INTERNAL_FORMAT 0x08100006
#endif

#ifndef GRALLOC_MODULE_PERFORM_GET_USAGE
#define	GRALLOC_MODULE_PERFORM_GET_USAGE 0x0feeff03
#endif
#endif

#endif

