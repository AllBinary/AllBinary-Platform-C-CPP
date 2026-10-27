
        /* Generated Code Do Not Modify */
        


        #ifndef _APPTEST_H
        #define _APPTEST_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Assertions;
class DisplayName;
class Test;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AppTest
            : public virtual Object
         {


            
    public: AppTest();
        
    public: void testAddition();

    public: void testStringEquality();

    public: void testBooleanAssertions();

};

            


        #endif //_APPTEST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(_APPTEST_H_COMPLETE)
        #define _APPTEST_H_COMPLETE
        #if __has_include(<org/junit/jupiter/api/Assertions.h>)
#include <org/junit/jupiter/api/Assertions.h>
#endif
#if __has_include(<org/junit/jupiter/api/DisplayName.h>)
#include <org/junit/jupiter/api/DisplayName.h>
#endif
#if __has_include(<org/junit/jupiter/api/Test.h>)
#include <org/junit/jupiter/api/Test.h>
#endif

        #endif
    
