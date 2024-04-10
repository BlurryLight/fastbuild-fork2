// Time.h
//------------------------------------------------------------------------------
#pragma once

// Includes
//------------------------------------------------------------------------------
#include "Core/Env/Types.h"
#include <time.h> //time_t

// Time
//------------------------------------------------------------------------------
class Time
{
public:
    static uint64_t GetCurrentFileTime();
    static uint64_t FileTimeToSeconds( uint64_t filetime );
    static time_t   GetNow();
};

//------------------------------------------------------------------------------
