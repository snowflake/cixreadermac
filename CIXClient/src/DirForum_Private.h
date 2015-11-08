//
//  DirForum_Private.h
//  CIXClient
//
//  Created by Steve Palmer on 10/10/2014.
//  Copyright (c) 2014-2015 CIXOnline Ltd. All rights reserved.
//

#ifndef CIXClient_DirForum_Private_h
#define CIXClient_DirForum_Private_h

#import "DirForum.h"

/* Private DirForum class accessors
 */
@interface DirForum (Private)
    -(void)sync;
    -(void)save;
@end

#endif
