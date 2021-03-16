// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.
#ifndef TESS_CAPI_INCLUDE_BASEAPI
#define TESS_CAPI_INCLUDE_BASEAPI
#endif

#include "extraapi.h"

TESS_API int TESS_CALL TessBaseAPIInitExtra(TessBaseAPI *handle,
                                            const char *data,
                                            int data_size,
                                            const char *language,
                                            TessOcrEngineMode oem,
                                            char **configs,
                                            int configs_size)
{
    return handle->Init(data, data_size, language, oem, configs, configs_size, nullptr,
                        nullptr, false, nullptr);
}