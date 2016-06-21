/*
minetest_world_manager_base64.h

This is an altered source version.
This is not the original source code written by René Nyffenegger.

Copyright (C) 2016 YuGiOhJCJ
Copyright (C) 2004-2008 René Nyffenegger

This source code is provided 'as-is', without any express or implied
warranty. In no event will the author be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this source code must not be misrepresented; you must not
   claim that you wrote the original source code. If you use this source code
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original source code.

3. This notice may not be removed or altered from any source distribution.

YuGiOhJCJ <yugiohjcj@1s.fr>
René Nyffenegger <rene.nyffenegger@adp-gmbh.ch>
*/
#ifndef minetest_world_manager_base64_h
#define minetest_world_manager_base64_h
char *minetest_world_manager_base64_decode(const char *encoded_string, size_t *ret_size);
char *minetest_world_manager_base64_encode(unsigned char const *bytes_to_encode, unsigned int in_len);
#endif
