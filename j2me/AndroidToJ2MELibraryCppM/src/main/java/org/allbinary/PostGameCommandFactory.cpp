
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
        
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PostGameCommandFactory
            : public Object
         {

    private: static PostGameCommandFactory* instance() { static std::unique_ptr<PostGameCommandFactory> value(new PostGameCommandFactory()); return value.get(); }

    public: static PostGameCommandFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PostGameCommandFactory::instance();
    
}


    public: void addCommands(MyCanvas* canvas){

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

                        if(!operatingSystemInterface->isOverScan())
                        
                                    {
                                    canvas->addCommand(gameCommandsFactory->TOGGLE_KEYBOARD);
    

                                    }
                                
MultiPlayerGameFeatureFactory::getInstance()->addCommands(canvas);
    
}


};

            

