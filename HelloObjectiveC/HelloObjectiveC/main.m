#import <Foundation/Foundation.h>
#import "Greeter.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        Greeter* myGreeter = [[Greeter alloc] init];
        
        [myGreeter setGreetingText: @"Hello Objective-C!!"];
        
        [myGreeter issueGreeting];
        [myGreeter release];
    }
    return 0;
}

