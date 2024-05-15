# project(SeqLib)

set(HEADERS sequence.h)
set(SOURCES sequence.cpp)

add_library(SeqLib SHARED ${SOURCES} ${HEADERS})
