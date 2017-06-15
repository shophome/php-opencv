#include "../../../php_opencv.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

void imgcodecs_init(int module_number)
{
    /**
     * imread const flags
     */
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_UNCHANGED", CV_LOAD_IMAGE_UNCHANGED, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_GRAYSCALE", CV_LOAD_IMAGE_GRAYSCALE, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_COLOR", CV_LOAD_IMAGE_COLOR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_ANYDEPTH", CV_LOAD_IMAGE_ANYDEPTH, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_ANYCOLOR", CV_LOAD_IMAGE_ANYCOLOR, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_LOAD_IMAGE_IGNORE_ORIENTATION", CV_LOAD_IMAGE_IGNORE_ORIENTATION, CONST_CS | CONST_PERSISTENT);
}