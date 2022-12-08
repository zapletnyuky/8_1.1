#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    
    char str[] = { "towhilesp"} ;
    char cs[] = { "while" };
    int t = Count(str, cs);
    XCTAssertEqual(t, 1);
    
}



@end
