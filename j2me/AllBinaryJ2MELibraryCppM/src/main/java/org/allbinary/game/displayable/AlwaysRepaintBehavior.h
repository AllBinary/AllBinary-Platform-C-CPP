
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class ARunnable;
class Canvas;
class Features;
class DisplayInfoSingleton;
class OpenGLFeatureFactory;
class LogUtil;
class CommonStrings;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/RepaintBehavior.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AlwaysRepaintBehavior: public RepaintBehavior {

    private: static AlwaysRepaintBehavior* instanceC_owner();
    private: static AlwaysRepaintBehavior* instanceC;

    public: static AlwaysRepaintBehavior* getInstance();


            
    public: AlwaysRepaintBehavior();
        
    private: const std::string NAME = "AlwaysRepaintBehavior";

    public: void repaint(Canvas* canvas);

    public: void onChangeRepaint(Canvas* canvas);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

#if __has_include("org/allbinary/game/displayable/RepaintBehavior.h")
#include "org/allbinary/game/displayable/RepaintBehavior.h"
#endif

        #endif
    
