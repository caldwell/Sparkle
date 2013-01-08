//
//  SUDiskImageUnarchiver.h
//  Sparkle
//
//  Created by Andy Matuschak on 6/16/08.
//  Copyright 2008 Andy Matuschak. All rights reserved.
//

#ifndef SUDISKIMAGEUNARCHIVER_H
#define SUDISKIMAGEUNARCHIVER_H

#import <Cocoa/Cocoa.h>
#import "SUUnarchiver.h"

@interface SUDiskImageUnarchiver : SUUnarchiver {
}

- (void)extractDMGWithPassword:(NSString *)password;
- (BOOL)isEncrypted:(NSData*)resultData;
- (void)requestPasswordFromDelegate;
- (void)continueWithPassword:(NSString *)password;
@end

#endif
