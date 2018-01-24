//
//  MAFConstants.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 1/15/13.
//
//

/**
 * Request states
 */
typedef enum MAFEXT_REQUEST_STATUS {
	MAFEXT_REQUEST_PENDING		= 0,		///< Request fired and executing asynchronously
    MAFEXT_REQUEST_IMMEDIATE    = 1,		///< Request fired and executed (synchronous behaviour)
    MAFEXT_REQUEST_UNKNOWN      = 0xff		///< Request status is undefined
} MAFEXT_REQUEST_STATUS;

extern NSString* const kMAFProcessFurtherActions;
extern NSString* const kMAFDeleteFurtherActionsFromQueue;

#pragma mark - Undo Manager Constants

//! Max Undo/Redo Levels
extern const unsigned int kMAFExtDefMaxBOUndoLevels;