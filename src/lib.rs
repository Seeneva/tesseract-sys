// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]

use leptonica_sys::{Boxa, Pix, Pixa};
use libc::*;

include!(concat!(env!("OUT_DIR"), "/bindings.rs"));
