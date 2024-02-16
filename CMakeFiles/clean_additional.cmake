# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CTunes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CTunes_autogen.dir\\ParseCache.txt"
  "CTunes_autogen"
  )
endif()
