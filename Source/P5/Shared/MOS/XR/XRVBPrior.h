
#ifndef _INC_XRVBPRIOR
#define _INC_XRVBPRIOR


#ifdef PLATFORM_PS2

#define CXR_VBPRIORITY_PORTALLEAFOFFSET 0.001f
enum
{
//	CXR_VBPRIORITY_PORTALLEAFOFFSET		= 0.001f,

	CXR_VBPRIORITY_BACKDROP				= -10,
	CXR_VBPRIORITY_DYNLIGHT_TEXZFILL	= -4,

	CXR_VBPRIORITY_CLEAR_COLORBUFFER	= 10,
	CXR_VBPRIORITY_LIGHTMAP				= 11,
	CXR_VBPRIORITY_DYNLIGHTFIRST		= 12,
	CXR_VBPRIORITY_DYNLIGHT				= 13,
	CXR_VBPRIORITY_WALLMARK				= 14,
	CXR_VBPRIORITY_POSTDYNLIGHT			= 15,
	CXR_VBPRIORITY_APPLY_COLORBUFFER	= 17,
	CXR_VBPRIORITY_VOLUMETRICFOG		= 18,
	CXR_VBPRIORITY_DEPTHFOG				= 19,
	CXR_VBPRIORITY_FOGPORTAL			= 20,

	CXR_VBPRIORITY_MODEL_OPAQUE_LM		= 0,
	CXR_VBPRIORITY_MODEL_OPAQUE			= 18,
	CXR_VBPRIORITY_MODEL_TRANSPARENT	= 22,

	CXR_VBPRIORITY_GLOWFILTER			= 1000,

	CXR_VBPRIORITY_FLARE				= 9999,

	CXR_VBPRIORITY_WINDOWS				= 10000,
	CXR_VBPRIORITY_CURSOR				= 10100,

	CXR_VBPRIORITY_UNIFIED_ZBUFFER		= -20,
	CXR_VBPRIORITY_UNIFIED_MATERIAL		= 8192,
};


#else

enum
{
	CXR_VBPRIORITY_PORTALLEAFOFFSET		= 30,

	CXR_VBPRIORITY_BACKDROP				= -10,
	CXR_VBPRIORITY_FOGPORTAL			= -5,
	CXR_VBPRIORITY_DYNLIGHT_TEXZFILL	= -4,
	CXR_VBPRIORITY_LIGHTMAP				= -3,
	CXR_VBPRIORITY_DYNLIGHTFIRST		= -2,
	CXR_VBPRIORITY_DYNLIGHT				= -1,
	CXR_VBPRIORITY_WALLMARK				= 7,
	CXR_VBPRIORITY_DEPTHFOG				= 8,
	CXR_VBPRIORITY_POSTDYNLIGHT			= 9,
	CXR_VBPRIORITY_VOLUMETRICFOG		= 11,

	CXR_VBPRIORITY_MODEL_OPAQUE			= 2048,
	CXR_VBPRIORITY_MODEL_TRANSPARENT	= 2048+15,

	CXR_VBPRIORITY_FLARE				= 9999,

	CXR_VBPRIORITY_WINDOWS				= 10000,
	CXR_VBPRIORITY_CURSOR				= 10100,

	CXR_VBPRIORITY_UNIFIED_ZBUFFER		= -20,
	CXR_VBPRIORITY_UNIFIED_MATERIAL		= 8192,
};

#endif

#define CXR_VBPRIORITY_MODEL_LAYEROFFSET	0.0001f

#endif //_INC_XRVBPRIOR