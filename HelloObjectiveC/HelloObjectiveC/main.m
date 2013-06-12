#import <Foundation/Foundation.h>
#import "Greeter.h"
#import "Greeting.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        Greeter* myGreeter = [[Greeter alloc] init];
        Greeting *vipGreeting = [[Greeting alloc] init];
        
        // give the greetings some text
        [myGreeter setGreetingText: @"Hello Objective-C!!"];
        [vipGreeting setGreetingText:@"This is the VIP Greeting!"];
        
        // add the VIP greeting to the greeter
        [myGreeter addVipGreeting:vipGreeting];
        
        // issue both greetings
        [myGreeter issueGreeting:0];
        [myGreeter issueGreeting:1];
        [myGreeter issueGreeting:2];    // negative test case
        
        // clean up
        [myGreeter release];
    }
    return 0;
}

