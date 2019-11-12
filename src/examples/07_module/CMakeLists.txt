add_library(ex_07_library "shapes.cpp" "shapes.h"
                                "circles.cpp" "circles.h"
								"lines.cpp" "lines.h")
add_executable(ex_07_exe "main.cpp" "shapes.cpp" "circles.cpp" "lines.cpp")