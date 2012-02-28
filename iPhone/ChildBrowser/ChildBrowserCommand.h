//
//  Cordova ! ChildBrowserCommand
//
//
//  Created by Jesse MacFadyen on 10-05-29.
//  Copyright 2010 Nitobi. All rights reserved.
//  Updated March, 2012
//

#import <Foundation/Foundation.h>
#ifdef CORDOVA_FRAMEWORK
	#import <Cordova/CDVPlugin.h>
#else
	#import "CDVPlugin.h"
#endif
#import "ChildBrowserViewController.h"



@interface ChildBrowserCommand : CDVPlugin <ChildBrowserDelegate>  {

	ChildBrowserViewController* childBrowser;
}

@property (nonatomic, retain) ChildBrowserViewController *childBrowser;


- (void) showWebPage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
-(void) onChildLocationChange:(NSString*)newLoc;

@end
