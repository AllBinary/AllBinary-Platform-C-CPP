
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
        



        #ifndef ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H
        #define ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AppletUtil;
class J2MEUtil;
class GameCommandsFactory;
class MyCanvas;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomGameMenuUtil
            : public virtual Object
         {

    public: static void add(MyCanvas* canvas);


            
    public: CustomGameMenuUtil();
        
};

            


        #endif //ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/AppletUtil.h>)
#include <org/allbinary/AppletUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif

        #endif
    
