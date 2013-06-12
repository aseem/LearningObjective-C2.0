//
//  Greeter.h
//  HelloObjectiveC
//
//  Created by Aseem on 6/10/13.
//  Copyright (c) 2013 Aseem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Greeting.h"

@interface Greeter : NSObject
{
    Greeting* myGreetingText;
    Greeting* myVipGreeting;
}

- (NSString*) getGreetingText;
- (void) setGreetingText: (NSString*) newText;

- (NSString*) getVipGreeting;
- (void) setVipGreeting: (NSString*) newText;
- (void) addVipGreeting:(Greeting*) newGreeting;

- (void) issueGreeting: (int) whichGreeting;

@end
