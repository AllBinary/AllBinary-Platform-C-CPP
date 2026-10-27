
        /* Generated Code Do Not Modify */
        


        #ifndef _APPTEST_CPP
        #define _APPTEST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "AppTest.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/junit/jupiter/api/Assertions.h>

      
#include <org/junit/jupiter/api/DisplayName.h>

      
#include <org/junit/jupiter/api/Test.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AppTest::AppTest() {
        }
        
    auto AppTest::testAddition() -> void{
Assertions::assertEquals(2, 1 +1);
    
}


    auto AppTest::testStringEquality() -> void{

    std::string expected = "Hello World!";;
    

    std::string actual = "Hello World!";;
    
Assertions::assertEquals(expected, actual);
    
}


    auto AppTest::testBooleanAssertions() -> void{
Assertions::assertTrue(true);
    
Assertions::assertFalse(false);
    
}




        #endif //_APPTEST_CPP
