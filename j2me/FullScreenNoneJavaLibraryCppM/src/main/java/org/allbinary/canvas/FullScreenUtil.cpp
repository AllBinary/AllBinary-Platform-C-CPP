
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
        



        #ifndef ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_CPP
        #define ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/FullScreenUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FullScreenUtil::FullScreenUtil() {
        }
        auto FullScreenUtil::instance_owner() -> FullScreenUtil* { static std::unique_ptr<FullScreenUtil> value(new FullScreenUtil()); return value.get(); }
FullScreenUtil* FullScreenUtil::instance = FullScreenUtil::instance_owner();

    auto FullScreenUtil::getInstance() -> FullScreenUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto FullScreenUtil::initOnRun(Canvas* fullScreenInterface, CommandListener* commandListener) -> void{

                        if(commandListener != 
                                    nullptr
                                )
                        
                                    {
                                    this->init(fullScreenInterface);
    

                                    }
                                
}


    auto FullScreenUtil::init(Canvas* fullScreenInterface) -> void{
}


    auto FullScreenUtil::isScreenChange(bool isFullScreen) -> bool{

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


    auto FullScreenUtil::isScreenChangeCanvas(Canvas* fullScreenInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isScreenChange(false);;
    
}




        #endif //ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_CPP
