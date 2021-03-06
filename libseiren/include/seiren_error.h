/*
 *
 * Copyright 2012 Samsung Electronics S.LSI Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SEIREN_ERROR_H_
#define _SEIREN_ERROR_H_

typedef enum {
    SEIREN_RETURN_OK = 0,

    SEIREN_ERROR_OPEN_FAIL       = -1000,
    SEIREN_ERROR_ALREADY_OPEN    = -1001,
    SEIREN_ERROR_NOT_READY       = -1002,

    SEIREN_ERROR_IBUF_OVERFLOW   = -2000,
    SEIREN_ERROR_IBUF_INFO       = -2001,

    SEIREN_ERROR_OBUF_READ       = -3000,
    SEIREN_ERROR_OBUF_INFO       = -3001,
    SEIREN_ERROR_OBUF_MMAP       = -3002,

    SEIREN_ERROR_INVALID_SETTING = -4000,
    SEIREN_ERROR_GETINFO_FAIL    = -4001
} SEIREN_ERRORTYPE;

#endif /* _SEIREN_ERROR_H_ */
