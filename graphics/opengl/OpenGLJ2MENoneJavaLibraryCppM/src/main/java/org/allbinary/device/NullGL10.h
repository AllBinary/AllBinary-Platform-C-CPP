
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DEVICE_NULLGL10_H
        #define ORG_ALLBINARY_DEVICE_NULLGL10_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullGL10
            : public virtual Object
        , public virtual GL10 {

    private: static NullGL10* NULL_GL10_owner();
    public: static NullGL10* NULL_GL10;


            
    public: NullGL10();
        
};

            


        #endif //ORG_ALLBINARY_DEVICE_NULLGL10_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEVICE_NULLGL10_H_COMPLETE)
        #define ORG_ALLBINARY_DEVICE_NULLGL10_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif

        #endif
    
