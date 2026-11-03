
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameOptionsFormFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameOptionsForm.h"

auto GameOptionsFormFactory::instance_owner() -> GameOptionsFormFactory* { static std::unique_ptr<GameOptionsFormFactory> value(new GameOptionsFormFactory()); return value.get(); }
GameOptionsFormFactory* GameOptionsFormFactory::instance = GameOptionsFormFactory::instance_owner();

GameOptionsFormFactory::GameOptionsFormFactory() : logUtil(LogUtil::getInstance()){
}


    auto GameOptionsFormFactory::getInstance() -> GameOptionsFormFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameOptionsFormFactory::instance;
    
}


    auto GameOptionsFormFactory::init(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) -> CommandForm*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GameOptionsForm(commandListener, title, backgrounBasicColor, foregroundBasicColor);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->INIT, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommandForm::getNullCommandForm();;
    
}

}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_CPP
