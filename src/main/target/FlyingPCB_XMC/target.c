/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
		//DEF_TIM(tim, chan, global, ccu8, pin, flags, out)
	    DEF_TIM(CCU40_CC40, CH1, CCU40, 0, P13, 0, 0),
		DEF_TIM(CCU40_CC41, CH1, CCU40, 0, P12, 0, 0),
		DEF_TIM(CCU40_CC42, CH1, CCU40, 0, P11, 0, 0),
		DEF_TIM(CCU40_CC43, CH1, CCU40, 0, P10, 0, 0),
	    DEF_TIM(CCU41_CC40, CH1, CCU41, 0, P25, 0, 0),
		DEF_TIM(CCU41_CC41, CH1, CCU41, 0, P24, 0, 0),
		DEF_TIM(CCU41_CC42, CH1, CCU41, 0, P23, 0, 0),
		DEF_TIM(CCU41_CC43, CH1, CCU41, 0, P22, 0, 0),
	    DEF_TIM(CCU42_CC40, CH1, CCU42, 0, P36, 0, 0),
		DEF_TIM(CCU42_CC41, CH1, CCU42, 0, P35, 0, 0),
		DEF_TIM(CCU42_CC42, CH1, CCU42, 0, P34, 0, 0),
		DEF_TIM(CCU42_CC43, CH1, CCU42, 0, P33, 0, 0),
	    DEF_TIM(CCU43_CC40, CH1, CCU43, 0, P46, 0, 0),
		DEF_TIM(CCU43_CC41, CH1, CCU43, 0, P45, 0, 0),
		DEF_TIM(CCU43_CC42, CH1, CCU43, 0, P44, 0, 0),
		DEF_TIM(CCU43_CC43, CH1, CCU43, 0, P43, 0, 0),
		DEF_TIM(CCU80_CC80, CH1, CCU80, 1, P05, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC80, CH2, CCU80, 1, P010, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC81, CH1, CCU80, 1, P04, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC81, CH2, CCU80, 1, P09, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC82, CH1, CCU80, 1, P03, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC82, CH2, CCU80, 1, P29, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU80_CC83, CH1, CCU80, 1, P06, 0, 0),
		DEF_TIM(CCU80_CC83, CH2, CCU80, 1, P28, 0, 0),
		DEF_TIM(CCU81_CC80, CH1, CCU81, 1, P115, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC80, CH2, CCU81, 1, P57, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC81, CH1, CCU81, 1, P114, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC81, CH2, CCU81, 1, P55, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC82, CH1, CCU81, 1, P113, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC82, CH2, CCU81, 1, P53, TIM_USE_MOTOR, 0),
		DEF_TIM(CCU81_CC83, CH1, CCU81, 1, P61, 0, 0),
		DEF_TIM(CCU81_CC83, CH2, CCU81, 1, P51, 0, 0),
};

