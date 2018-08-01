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

#ifndef _rockchip_rga_h_
#define _rockchip_rga_h_

#include <stdint.h>
#include <vector>
#include <sys/types.h>

#include <system/window.h>

#include <utils/Thread.h>

#ifndef UN_NEED_GL
#include <EGL/egl.h>
#include <GLES/gl.h>
#endif

//////////////////////////////////////////////////////////////////////////////////
#include <hardware/hardware.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>
#include <utils/Singleton.h>

#include <sys/mman.h>
#include <linux/stddef.h>

#include <hardware/rga.h>
#include "stdio.h"

#include "drmrga.h"
#ifndef UN_NEED_GL
#include "GraphicBuffer.h"
#endif
//////////////////////////////////////////////////////////////////////////////////

namespace android {
// -------------------------------------------------------------------------------

class RockchipRga :public Singleton<RockchipRga>
{
/************************************public**************************************/

public:

    static inline RockchipRga& get() {return getInstance();}

    int         RkRgaInit();
    int         RkRgaGetBufferFd(buffer_handle_t handle, int *fd);
    int         RkRgaBlit(rga_info *src, rga_info *dst, rga_info *src1);
    int         RkRgaCollorFill(rga_info *dst);
    int         RkRgaFlush();

    void        RkRgaSetLogOnceFlag(int log) {mLogOnce = log;}
    void        RkRgaSetAlwaysLogFlag(bool log) {mLogAlways = log;}
    void        RkRgaLogOutRgaReq(struct rga_req rgaReg);
    int         RkRgaLogOutUserPara(rga_info *rgaInfo);
    inline bool RkRgaIsReady() { return mSupportRga; }

/************************************private***********************************/
private:
    bool                            mSupportRga;
    int                             mLogOnce;
    int                             mLogAlways;
    void *                          mContext;
    static Mutex                    mMutex;

    friend class Singleton<RockchipRga>;
                RockchipRga();
                 ~RockchipRga();



};

// ---------------------------------------------------------------------------

}; // namespace android

#endif // ANDROID_BOOTANIMATION_H

