#import "Greeter.h"

@implementation Greeter

- (id) init
{
    self = [super init];
    if (self)
    {
        myGreetingText = [[Greeting alloc] init];
    }
    
    return self;
}

- (NSString*) getGreetingText
{
    return [myGreetingText getGreetingText];
}

- (void) setGreetingText: (NSString *) newText
{
    [myGreetingText setGreetingText:newText];
}

- (NSString*) getVipText
{
    return [myVipGreeting getGreetingText];
}

- (void) setVipGreeting: (NSString *) newText
{
    [myVipGreeting setGreetingText:newText];
}

- (void) addVipGreeting:(Greeting*) newGreeting;
{
    [newGreeting retain];
    [myVipGreeting release];
    myVipGreeting = newGreeting;
}

- (void) issueGreeting: (int) whichGreeting
{
    if (whichGreeting == 0)
    {
        [myGreetingText issueGreeting];
        return;
    }
    
    if (whichGreeting == 1)
        [myVipGreeting issueGreeting];
    else
        NSLog(@"ERROR: invalid greeting parameter");
}

- (void) dealloc
{
    [myGreetingText release];
    [super dealloc];
}

@end
