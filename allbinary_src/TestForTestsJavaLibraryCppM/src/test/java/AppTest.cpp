
        /* Generated Code Do Not Modify */
        


            #include "java/lang/Object.h"
        
#include <org/junit/jupiter/api/Assertions.h>

      
#include <org/junit/jupiter/api/DisplayName.h>

      
#include <org/junit/jupiter/api/Test.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AppTest
            : public Object
         {

    void testAddition(){
Assertions::assertEquals(2, 1 +1);
    
}


    void testStringEquality(){

    std::string expected = "Hello World!";;
    

    std::string actual = "Hello World!";;
    
Assertions::assertEquals(expected, actual);
    
}


    void testBooleanAssertions(){
Assertions::assertTrue(true);
    
Assertions::assertFalse(false);
    
}


};

            

