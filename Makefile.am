AM_CXXFLAGS = -O2 -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wshadow

AM_CPPFLAGS = $(VapourSynth_CFLAGS) $(SNDFILE_CFLAGS)

lib_LTLIBRARIES = libdamb.la

libdamb_la_SOURCES = src/damb.cpp

libdamb_la_LDFLAGS = -no-undefined -avoid-version $(PLUGINLDFLAGS)

libdamb_la_LIBADD = $(SNDFILE_LIBS)
