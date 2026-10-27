
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
        



        #ifndef ORG_ALLBINARY_MATH_POSITIONSTRINGS_H
        #define ORG_ALLBINARY_MATH_POSITIONSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PositionStrings
            : public virtual Object
         {

    private: static PositionStrings* instance_owner();
    private: static PositionStrings* instance;

    public: static PositionStrings* getInstance();


            
    public: PositionStrings();
        
    public: const std::string X = "x";

    public: const std::string Y = "y";

    public: const std::string X_LABEL = "x: ";

    public: const std::string Y_LABEL = "y: ";

    public: const std::string Z_LABEL = "z: ";

    public: const std::string DX_LABEL = "dx: ";

    public: const std::string DY_LABEL = "dy: ";

    public: const std::string DZ_LABEL = "dz: ";

};

            


        #endif //ORG_ALLBINARY_MATH_POSITIONSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_POSITIONSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_POSITIONSTRINGS_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif

        #endif
    
