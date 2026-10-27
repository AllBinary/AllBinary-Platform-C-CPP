
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
        #define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicDecimal;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Orientation
            : public virtual Object
         {

    private: static Orientation* NONE_owner();
    public: static Orientation* NONE;

    private: static Orientation* SINGLETON_owner();
    private: static Orientation* SINGLETON;

    public: static Orientation* getInstance(int32_t yaw, int32_t pitch, int32_t roll);

    public: BasicDecimal* yaw;

    public: BasicDecimal* pitch;

    public: BasicDecimal* roll;

private: Orientation(int32_t yaw, int32_t pitch, int32_t roll);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

        #endif
    
