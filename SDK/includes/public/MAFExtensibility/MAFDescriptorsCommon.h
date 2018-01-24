//
//  MAFDescriptorsCommon.h
//  MAFConfigurationComponent
//
//  Created on 09/06/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//
// Defines types that are used by multiple descriptor classes

#import <Foundation/Foundation.h>

/**
 * How should the UI behave while downloading data
 */
typedef enum MAFEXT_UI_BLOCKING {
	MAFEXT_UI_BLOCKING_NONE			= 0,
	MAFEXT_UI_BLOCKING_CANCELABLE	= 1,
	MAFEXT_UI_BLOCKING_PROGRESS		= 2
} MAFEXT_UI_BLOCKING;
