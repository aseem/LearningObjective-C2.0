//
//  Greeting.h
//  HelloObjectiveC
//
//  Created by Aseem on 6/10/13.
//  Copyright (c) 2013 Aseem. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Greeting : NSObject
{
    NSString *greetingText;
    NSString *greetingDesc;
}

- (NSString*) getGreetingText;
- (NSString*) getGreetingDesc;
- (void) setGreetingText: (NSString*) newText;
- (void) setGreetingDesc: (NSString*) newText;
- (void) issueGreeting;

@end
