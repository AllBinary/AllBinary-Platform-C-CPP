
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Displayable;
class J2MEUtil;
class Processor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScreenRepaintProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenRepaintProcessorFactory
            : public virtual Object
         {

    private: static ScreenRepaintProcessorFactory* instance_owner();
    private: static ScreenRepaintProcessorFactory* instance;

    public: static ScreenRepaintProcessorFactory* getInstance();

private: ScreenRepaintProcessorFactory();

    public: Processor* create(Displayable* displayable);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h")
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h"
#endif

        #endif
    
