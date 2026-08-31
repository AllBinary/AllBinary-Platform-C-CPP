
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoCanvas.h"

class DemoGameStartupRunnable: public ABRunnable {
        

    public static const TYPE: int32_t = 4;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const demoCanvas: DemoCanvas;

public constructor (DemoCanvas demoCanvas);

    public run();

    public int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H
