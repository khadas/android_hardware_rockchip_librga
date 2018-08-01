#
# Copyright (C) 2018  Fuzhou Rockchip Electronics Co., Ltd. All rights reserved.
# Authors:
#     lihuang <putin.li@rock-chips.com>
#     libin <bin.li@rock-chips.com>
#
# This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# BY DOWNLOADING, INSTALLING, COPYING, SAVING OR OTHERWISE USING THIS SOFTWARE,
# YOU ACKNOWLEDGE THAT YOU AGREE THE SOFTWARE RECEIVED FORM ROCKCHIP IS PROVIDED
# TO YOU ON AN "AS IS" BASIS and ROCKCHP DISCLAIMS ANY AND ALL WARRANTIES AND
# REPRESENTATIONS WITH RESPECT TO SUCH FILE, WHETHER EXPRESS, IMPLIED, STATUTORY
# OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY IMPLIED WARRANTIES OF TITLE,
# NON-INFRINGEMENT, MERCHANTABILITY, SATISFACTROY QUALITY, ACCURACY OR FITNESS FOR
# A PARTICULAR PURPOSE.
#

#!/bin/bash
rm -f version.h

COMMIT_ID=$(cd $(dirname $0) && git log -1 | awk 'NR==1{print}')
SUB_COMMIT_ID=$(echo "$COMMIT_ID" | cut -c8-14)
CUR_TIME=$(date "+%G-%m-%d %H:%M:%S")
RK_GRAPHICS_VERSION=$SUB_COMMIT_ID+"$CUR_TIME"

cd $(dirname $0) && cat version.h.template | sed "s/\$FULL_VERSION/$RK_GRAPHICS_VERSION/g" > version.h
echo "Generated version.h"
