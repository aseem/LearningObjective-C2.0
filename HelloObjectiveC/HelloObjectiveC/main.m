#import <Foundation/Foundation.h>
#import "Greeter.h"
#import "Greeting.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        Greeter* myGreeter = [[Greeter alloc] init];
        
        
        // give the greetings some text
        [myGreeter setGreetingText: @"Hello Objective-C!!"
                           vipText: @"This is the VIP Greeting!"];
        
        // issue both greetings
        [myGreeter performSelector: @selector(issueGreeting:)
                        withObject:0];
        
        [myGreeter issueGreeting:1];
        [myGreeter issueGreeting:2];    // negative test case
        
        // clean up
        [myGreeter release];
    }
    return 0;
}

