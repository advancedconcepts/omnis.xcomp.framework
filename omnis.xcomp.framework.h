/*
 *  omnis.xcomp.framework
 *  =====================
 *
 *  omnis.xcomp.framework.h
 *  This include file simply ensures all required header files are imported into our files
 *
 *  Bastiaan Olij
 *
 *  Todos:
 *  - investigate if we can compile this into a library/framework instead of having to include all the files in our projects.
 *  - add better checking if we get object returned, maybe start using exception handling where appropriate
 *
 *  https://github.com/BastiaanOlij/omnis.xcomp.framework
 */

#ifndef omnisxcompframeworkh
#define omnisxcompframeworkh

// A note about string usage, in non-unicode qchar and char are the same but in unicode qchar is a 32bit unicode string while char is a standard 8bit string
// We use char to mainly interact with the system API. For the most part we assume that char will contain a UTF-8 string and convert between char and qchar
// accordingly.

// Include our standard stuff
#include "xCompStandardIncludes.h"

// add in our framework header files
#include "oBaseComponent.h"
#include "oBaseNVComponent.h"
#include "oBaseVisComponent.h"
#include "oDrawingCanvas.h"
#include "oRGBAImage.h"
#include "oUTF8.h"
#include "oXCompLib.h"
#include "qArray.h"
#include "qString.h"

#endif