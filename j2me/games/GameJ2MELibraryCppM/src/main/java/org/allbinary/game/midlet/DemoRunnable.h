
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class ProgressCanvasFactory;
class MyCommandsFactory;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DemoGameMidlet;
class DemoGameMidletEvent;
class DemoGameMidletStateFactory;
class DemoGameMidletEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoRunnable
            : public virtual Object
        , public virtual Runnable {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: DemoGameMidlet* demoGameMidlet;

    private: DemoGameMidletEvent* startDemoGameMidletEvent;

public: DemoRunnable(DemoGameMidlet* demoGameMidlet);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandsFactory.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidlet.h")
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletEvent.h")
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletStateFactory.h")
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletEventHandler.h")
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"
#endif

        #endif
    
