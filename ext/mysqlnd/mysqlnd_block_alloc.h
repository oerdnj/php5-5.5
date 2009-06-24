/*
  +----------------------------------------------------------------------+
  | PHP Version 6                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 2006-2009 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors: Georg Richter <georg@mysql.com>                             |
  |          Andrey Hristov <andrey@mysql.com>                           |
  |          Ulf Wendel <uwendel@mysql.com>                              |
  +----------------------------------------------------------------------+
*/

/* $Id: mysqlnd_block_alloc.h,v 1.1.2.3 2009/06/16 09:15:38 andrey Exp $ */

#ifndef MYSQLND_BLOCK_ALLOC_H
#define MYSQLND_BLOCK_ALLOC_H

MYSQLND_MEMORY_POOL *	mysqlnd_mempool_create(size_t arena_size TSRMLS_DC);
void 					mysqlnd_mempool_destroy(MYSQLND_MEMORY_POOL * pool TSRMLS_DC);
void					mysqlnd_mempool_resize_chunk(MYSQLND_MEMORY_POOL_CHUNK * chunk, unsigned int size TSRMLS_DC);
void					mysqlnd_mempool_free_chunk(MYSQLND_MEMORY_POOL_CHUNK * chunk, zend_bool cache_it TSRMLS_DC);


#endif	/* MYSQLND_BLOCK_ALLOC_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */