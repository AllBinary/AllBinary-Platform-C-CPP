
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
        



        #ifndef ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_CPP
        #define ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/canvas/ABToGBUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ABToGBUtil::ABToGBUtil() : abCanvas(NullCanvas::NULL_CANVAS), allBinaryGameLayerManager(AllBinaryGameLayerManager::getNullInstance()) {
        }
        auto ABToGBUtil::instance_owner() -> ABToGBUtil* { static std::unique_ptr<ABToGBUtil> value(new ABToGBUtil()); return value.get(); }
ABToGBUtil* ABToGBUtil::instance = ABToGBUtil::instance_owner();

    auto ABToGBUtil::getInstance() -> ABToGBUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ABToGBUtil::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_CPP
