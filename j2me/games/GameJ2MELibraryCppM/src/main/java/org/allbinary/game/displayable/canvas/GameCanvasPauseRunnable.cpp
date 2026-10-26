
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"
#include "AllBinaryGameCanvas.h"

class GameCanvasPauseRunnable: public GameRunnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AllBinaryGameCanvas allBinaryGameCanvas;

public: GameCanvasPauseRunnable(AllBinaryGameCanvas allBinaryGameCanvas){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    public: void run(){
}


                //@Throws(Exception.constructor)
            
    public: void processLoopSleep(){

        try {
            
    Features features = Features::getInstance();;
    

    bool isOpenGL = features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL);;
    

                        if(isOpenGL)
                        
                                    {
                                    this->allBinaryGameCanvas.processSleep();
    

                                    }
                                

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


};

            

