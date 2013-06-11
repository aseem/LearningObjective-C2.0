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

- (void) issueGreeting
{
    [myGreetingText issueGreeting];
}

- (void) dealloc
{
    [myGreetingText release];
    [super dealloc];
}

@end
