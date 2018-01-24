//
//  MAFVersioning.h
//  MAFConfigurationComponent/Version (public)
//
//  Created by Farkas, Zoltan on 05/07/13.
//

#import <Foundation/Foundation.h>
#import <stdint.h>

#define MAFEXTMAKEVERSION(major,minor,patch,build) (major << 24) + (minor << 16) + (patch << 8) + build

typedef enum TEN_MAFEXT_VERSIONS : uint32_t {
	MAFEXT_VERSION_INVALID	= MAFEXTMAKEVERSION(0,0,0,0),
	MAFEXT_VERSION_1_0		= MAFEXTMAKEVERSION(1,0,0,0),
	MAFEXT_VERSION_1_1		= MAFEXTMAKEVERSION(1,1,0,0),
	MAFEXT_VERSION_1_2		= MAFEXTMAKEVERSION(1,2,0,0),
	MAFEXT_VERSION_1_3		= MAFEXTMAKEVERSION(1,3,0,0),
	
	MAFEXT_VERSION_CURRENT	= MAFEXT_VERSION_1_3
} TEN_MAFEXT_VERSIONS;

#undef MAFEXTMAKEVERSION
