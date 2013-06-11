//
//  Greeting.m
//  HelloObjectiveC
//
//  Created by Aseem on 6/10/13.
//  Copyright (c) 2013 Aseem. All rights reserved.
//

#import "Greeting.h"

@implementation Greeting


- (NSString*) getGreetingText
{
    return greetingText;
}

- (NSString*) getGreetingDesc
{
    return greetingDesc;
}

- (void) setGreetingText: (NSString *) newText
{
    [newText retain];
    [greetingText release];
    greetingText = newText;
}

- (void) setGreetingDesc:(NSString *)newText
{
    [newText retain];
    [greetingDesc release];
    greetingDesc = newText;
}

- (void) issueGreeting
{
    NSLog(@"%@", [self getGreetingText]);
}

- (void) dealloc
{
    [greetingText release];
    [greetingDesc release];
    [super dealloc];
}


@end
