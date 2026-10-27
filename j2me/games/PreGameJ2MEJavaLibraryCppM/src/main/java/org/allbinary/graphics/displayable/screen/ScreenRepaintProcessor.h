
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Displayable;
#include <org/allbinary/canvas/Processor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScreenRepaintUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenRepaintProcessor: public Processor {

    private: Displayable* displayable;

public: ScreenRepaintProcessor(Displayable* displayable);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/ScreenRepaintUtil.h")
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintUtil.h"
#endif

        #endif
    
