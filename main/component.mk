#
# "main" pseudo-component makefile.
#
# (Uses default behaviour of compiling all source files in directory, adding 'include' to include path.)

#添加头文件目录
COMPONENT_ADD_INCLUDEDIRS := \
./st7789v \
./wifi \
./tcp \
./LittleVGL \
./LittleVGL/src \
./LittleVGL/src/lv_core \
./LittleVGL/src/lv_draw \
./LittleVGL/src/lv_font \
./LittleVGL/src/lv_gpu \
./LittleVGL/src/lv_hal \
./LittleVGL/src/lv_misc \
./LittleVGL/src/lv_themes \
./LittleVGL/src/lv_widgets \
./LittleVGL/examples/porting \
./lv_examples \
./lv_examples/src \
./lv_examples/src/lv_demo_widgets \

#添加源文件目录
COMPONENT_SRCDIRS := \
./ \
./st7789v \
./wifi \
./tcp \
./LittleVGL \
./LittleVGL/src \
./LittleVGL/src/lv_core \
./LittleVGL/src/lv_draw \
./LittleVGL/src/lv_font \
./LittleVGL/src/lv_gpu \
./LittleVGL/src/lv_hal \
./LittleVGL/src/lv_misc \
./LittleVGL/src/lv_themes \
./LittleVGL/src/lv_widgets \
./LittleVGL/examples/porting \
./lv_examples \
./lv_examples/src \
./lv_examples/src/lv_demo_widgets \

