
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
        



        #ifndef ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H
        #define ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Features;
class OpenGLFeatureFactory;
class StringMaker;
class CommonSeps;
class Memory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameStatisticsFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialMessageUtil
            : public virtual Object
         {

    private: static SpecialMessageUtil* SINGLETON_owner();
    private: static SpecialMessageUtil* SINGLETON;

    public: static SpecialMessageUtil* getInstance();


            
    public: SpecialMessageUtil();
        
    public: std::string get();

};

            


        #endif //ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/system/Memory.h>)
#include <org/allbinary/system/Memory.h>
#endif
#if __has_include("org/allbinary/canvas/GameStatisticsFactory.h")
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#endif

        #endif
    
