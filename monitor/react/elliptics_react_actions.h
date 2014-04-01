/*
* 2013+ Copyright (c) Andrey Kashin <kashin.andrej@gmail.com>
* All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*/

#ifndef ELLIPTICS_REACT_ACTIONS_H
#define ELLIPTICS_REACT_ACTIONS_H

#include <react/react.h>

#define DEFINE_ACTION_BASE(CODE) extern const int CODE

// This define allows to specify actions list only in one place.
// Actually, we need to define action code as extern int value to use it everywhere,
// but also we need to set it's value inside action_set_t reverbrain_actions and
// it can only be done in .cpp file. That's why this define unfolds differently
// in ellptics_react_actions.cpp file where ELLIPTICS_REACT_ACTIONS_CPP is defined.
#ifdef ELLIPTICS_REACT_ACTIONS_CPP
	#define DEFINE_ACTION(CODE) DEFINE_ACTION_BASE(ACTION_ ## CODE); const int ACTION_ ## CODE = react_define_new_action(#CODE)
#else
	#define DEFINE_ACTION(CODE) DEFINE_ACTION_BASE(ACTION_ ## CODE)
#endif

DEFINE_ACTION(DNET_PROCESS_CMD_RAW);
DEFINE_ACTION(DNET_MONITOR_PROCESS_CMD);
DEFINE_ACTION(DNET_PROCESS_INDEXES);
DEFINE_ACTION(DNET_CMD_REVERSE_LOOKUP);
DEFINE_ACTION(DNET_CMD_JOIN_CLIENT);
DEFINE_ACTION(DNET_UPDATE_NOTIFY);
DEFINE_ACTION(DNET_NOTIFY_ADD);
DEFINE_ACTION(DNET_CMD_EXEC);
DEFINE_ACTION(DNET_CMD_STAT_COUNT);
DEFINE_ACTION(DNET_CMD_STATUS);
DEFINE_ACTION(DNET_CMD_AUTH);
DEFINE_ACTION(DNET_CMD_ITERATOR);
DEFINE_ACTION(DNET_CMD_BULK_READ);
DEFINE_ACTION(DNET_CMD_ROUTE_LIST);

DEFINE_ACTION(CACHE);
DEFINE_ACTION(CACHE_WRITE);
DEFINE_ACTION(CACHE_READ);
DEFINE_ACTION(CACHE_REMOVE);
DEFINE_ACTION(CACHE_LOOKUP);
DEFINE_ACTION(CACHE_LOCK);
DEFINE_ACTION(CACHE_FIND);
DEFINE_ACTION(CACHE_ADD_TO_PAGE);
DEFINE_ACTION(CACHE_RESIZE_PAGE);
DEFINE_ACTION(CACHE_SYNC_AFTER_APPEND);
DEFINE_ACTION(CACHE_WRITE_APPEND_ONLY);
DEFINE_ACTION(CACHE_WRITE_AFTER_APPEND_ONLY);
DEFINE_ACTION(CACHE_POPULATE_FROM_DISK);
DEFINE_ACTION(CACHE_CLEAR);
DEFINE_ACTION(CACHE_LIFECHECK);
DEFINE_ACTION(CACHE_CREATE_DATA);
DEFINE_ACTION(CACHE_CAS);
DEFINE_ACTION(CACHE_MODIFY);
DEFINE_ACTION(CACHE_DECREASE_KEY);
DEFINE_ACTION(CACHE_MOVE_RECORD);
DEFINE_ACTION(CACHE_ERASE);
DEFINE_ACTION(CACHE_REMOVE_LOCAL);
DEFINE_ACTION(CACHE_LOCAL_LOOKUP);
DEFINE_ACTION(CACHE_LOCAL_READ);
DEFINE_ACTION(CACHE_LOCAL_WRITE);
DEFINE_ACTION(CACHE_PREPARE_SYNC);
DEFINE_ACTION(CACHE_SYNC);
DEFINE_ACTION(CACHE_SYNC_BEFORE_OPERATION);
DEFINE_ACTION(CACHE_ERASE_ITERATE);
DEFINE_ACTION(CACHE_SYNC_ITERATE);
DEFINE_ACTION(CACHE_DNET_OPLOCK);
DEFINE_ACTION(CACHE_DESTRUCT);

DEFINE_ACTION(BACKEND_EBLOB);
DEFINE_ACTION(BACKEND_EBLOB_WRITE);
DEFINE_ACTION(BACKEND_EBLOB_READ);
DEFINE_ACTION(BACKEND_EBLOB_READ_RANGE);
DEFINE_ACTION(BACKEND_EBLOB_DEL_RANGE);
DEFINE_ACTION(BACKEND_EBLOB_FILE_INFO);
DEFINE_ACTION(BACKEND_EBLOB_DEL);
DEFINE_ACTION(BACKEND_EBLOB_START_DEFRAG);


#endif // ELLIPTICS_REACT_ACTIONS_H
