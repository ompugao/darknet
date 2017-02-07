#ifndef DEMO
#define DEMO

#include "image.h"

#if defined (__cplusplus)
extern "C" {
#endif

void demo(char *cfgfile, char *weightfile, float thresh, int cam_index, const char *filename, char **names, int classes, int frame_skip, char *prefix, float hier_thresh);
#if defined (__cplusplus)
}
#endif
#endif
