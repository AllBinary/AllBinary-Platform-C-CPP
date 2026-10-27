
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


GameCanvasPauseRunnable::GameCanvasPauseRunnable(AllBinaryGameCanvas* allBinaryGameCanvas) : logUtil(LogUtil::getInstance()){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    auto GameCanvasPauseRunnable::run() -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameCanvasPauseRunnable::processLoopSleep() -> void{

        try {
            
    Features* features = Features::getInstance();;
    

    bool isOpenGL = features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL);;
    

                        if(isOpenGL)
                        
                                    {
                                    this->allBinaryGameCanvas->processSleep();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_CPP
