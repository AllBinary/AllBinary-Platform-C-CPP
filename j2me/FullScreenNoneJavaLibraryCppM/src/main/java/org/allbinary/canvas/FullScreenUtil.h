
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
        



        #ifndef ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
        #define ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class CommandListener;
class Features;
class MainFeatureFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FullScreenUtil
            : public virtual Object
         {

    private: static FullScreenUtil* instance_owner();
    private: static FullScreenUtil* instance;

    public: static FullScreenUtil* getInstance();


            
    public: FullScreenUtil();
        
                //@Throws(Exception.constructor)
            
    public: void initOnRun(Canvas* fullScreenInterface, CommandListener* commandListener);

    public: void init(Canvas* fullScreenInterface);

    public: bool isScreenChange(bool isFullScreen);

    public: bool isScreenChangeCanvas(Canvas* fullScreenInterface);

};

            


        #endif //ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif

        #endif
    
