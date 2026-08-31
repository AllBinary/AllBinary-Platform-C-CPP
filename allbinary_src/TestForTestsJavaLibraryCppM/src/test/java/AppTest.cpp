
        /* Generated Code Do Not Modify */
        


            #include "java/lang/Object.h"
        
#include <org/junit/jupiter/api/Assertions.h>

      
#include <org/junit/jupiter/api/DisplayName.h>

      
#include <org/junit/jupiter/api/Test.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AppTest
            : public Object
         {
        

    testAddition(){
Assertions.assertEquals(2, 1 +1);
    
}


    testStringEquality(){

    expected: string = "Hello World!";;
    

    actual: string = "Hello World!";;
    
Assertions.assertEquals(expected, actual);
    
}


    testBooleanAssertions(){
Assertions.assertTrue(true);
    
Assertions.assertFalse(false);
    
}


};

            

