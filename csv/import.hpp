#pragma once

#ifdef _WIN32
#    define OPENTRACK_CSV_LINKAGE __declspec(dllimport)
#else
#    define OPENTRACK_CSV_LINKAGE
#endif

#ifndef _MSC_VER
#    define OPENTRACK_CSV_EXPORT __attribute__ ((visibility ("default"))) OPENTRACK_CSV_LINKAGE
#else
#    define OPENTRACK_CSV_EXPORT OPENTRACK_CSV_LINKAGE
#endif
