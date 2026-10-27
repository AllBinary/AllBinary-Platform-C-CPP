
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RepaintBehavior
            : public Object
         {

    private: static RepaintBehavior* instance() { static std::unique_ptr<RepaintBehavior> value(new RepaintBehavior()); return value.get(); }

    public: static RepaintBehavior* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RepaintBehavior::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: void repaint(Canvas* canvas){
}


    private: const std::string NAME = "RepaintBehavior";

    public: void onChangeRepaint(Canvas* canvas){

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(features->isFeature(openGLFeatureFactory->OPENGL))
                        
                                    {
                                    DisplayInfoSingleton::getInstance()->process();
    

                                    }
                                
                        else {
                            
    Thread* thread = new Thread(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            canvas->repaint();
    
DisplayInfoSingleton::getInstance()->process();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}

                                }
                            , this->NAME);;
    
thread->start();
    

                        }
                            
}


};

            

