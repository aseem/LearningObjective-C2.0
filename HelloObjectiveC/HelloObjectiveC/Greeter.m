#import "Greeter.h"

@implementation Greeter

// init method
- (id) init
{
    self = [super init];
    if (self)
    {
        myGreetingText = [[Greeting alloc] init];
        myVipGreeting = [[Greeting alloc] init];
    }
    
    return self;
}

// Get the Greeting text
- (NSString*) getGreetingText
{
    return [myGreetingText getGreetingText];
}

// Set the Greeting text
- (void) setGreetingText: (NSString *) newText
{
    [newText retain];
    [myGreetingText setGreetingText:newText];
    [newText release];
}

//
- (NSString*) getVipGreeting
{
    return [myVipGreeting getGreetingText];
}

- (void) setVipGreeting: (NSString *) newText
{
    [newText retain];
    [myVipGreeting setGreetingText:newText];
    [newText release];
}

- (void) addVipGreeting:(Greeting*) newGreeting;
{
    [newGreeting retain];
    [myVipGreeting release];
    myVipGreeting = newGreeting;
}

- (void) setGreetingText:(NSString *)newText
                 vipText:(NSString *)vipText;
{
    [self setGreetingText:newText];
    [self setVipGreeting:vipText];
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
