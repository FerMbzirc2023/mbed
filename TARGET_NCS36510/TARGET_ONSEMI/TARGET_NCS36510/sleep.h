/**
 *******************************************************************************
 * @file    sleep.c
 * @brief Implementation of a sleep functionality
 * @internal
 * @author  ON Semiconductor
 * $Rev:  $
 * $Date: $
 ******************************************************************************
 * Copyright 2016 Semiconductor Components Industries LLC (d/b/a ?ON Semiconductor?).
 * All rights reserved.  This software and/or documentation is licensed by ON Semiconductor
 * under limited terms and conditions.  The terms and conditions pertaining to the software
 * and/or documentation are available at http://www.onsemi.com/site/pdf/ONSEMI_T&C.pdf
 * (?ON Semiconductor Standard Terms and Conditions of Sale, Section 8 Software?) and
 * if applicable the software license agreement.  Do not use this software and/or
 * documentation unless you have carefully read and you agree to the limited terms and
 * conditions.  By using this software and/or documentation, you agree to the limited
 * terms and conditions.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ON SEMICONDUCTOR SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL,
 * INCIDENTAL, OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 * @endinternal
 *
 * @ingroup sleep
 *
 * @details
 * Sleep implementation TBD - Dummy function is fine for first release
 *
 */

#ifndef SLEEP_H_
#define SLEEP_H_

/* Orion specific includes */
#include "types.h"
#include "memory_map.h"
#include "gpio_map.h"
#include "pad_map.h"
#include "crossbar.h"
#include "clock.h"

#define SLEEP_TYPE_NONE			0
#define SLEEP_TYPE_SLEEP		1
#define SLEEP_TYPE_DEEPSLEEP	2
#define SLEEP_TYPE_COMA			3

#define SLEEP_DURATION_SLEEP_MIN		10  		/* msec */
#define SLEEP_DURATION_SLEEP_MAX		200 		/* msec */
#define SLEEP_DURATION_DEEPSLEEP_MAX	500 		/* msec */
#define SLEEP_DURATION_COMA_MAX			1000000000 	/* TODO 1000 sec */

void sleep(void);
void deepsleep(void);
void coma(void);

#endif // SLEEP_H_
