
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/RunnableCanvas.h"

class FullScreenUtil
            : public Object
         {

    private: static FullScreenUtil* instance() { static std::unique_ptr<FullScreenUtil> value(new FullScreenUtil()); return value.get(); }

    public: static FullScreenUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: void initOnRun(Canvas* fullScreenInterface, CommandListener* commandListener){
fullScreenInterface = dynamic_cast<RunnableCanvas*>(fullScreenInterfacefullScreenInterface)
fullScreenInterface.
                    waitOnNotify(0);
    

                        if(commandListener != 
                                    nullptr
                                )
                        
                                    {
                                    this->init(fullScreenInterface);
    

                                    }
                                
}


    public: void init(Canvas* fullScreenInterface){

    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(mainFeatureFactory->FULL_SCREEN))
                        
                                    {
                                    fullScreenInterface->setFullScreenMode(true);
    

                                    }
                                
                        else {
                            fullScreenInterface->setFullScreenMode(false);
    

                        }
                            
}


    public: bool isScreenChange(bool isFullScreen){

    MainFeatureFactory* mainFeatureFactory = MainFeatureFactory::getInstance();;
    

    Features* features = Features::getInstance();;
    

                        if(features->isFeature(mainFeatureFactory->FULL_SCREEN) != isFullScreen)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isScreenChangeCanvas(Canvas* fullScreenInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isScreenChange(fullScreenInterface->isFullScreenMode());;
    
}


};

            

