
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


DemoGameBehavior::DemoGameBehavior() : logUtil(LogUtil::getInstance()) {
        }
        auto DemoGameBehavior::instance_owner() -> DemoGameBehavior* { static std::unique_ptr<DemoGameBehavior> value(new DemoGameBehavior()); return value.get(); }
DemoGameBehavior* DemoGameBehavior::instance = DemoGameBehavior::instance_owner();

    auto DemoGameBehavior::getInstance() -> DemoGameBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DemoGameBehavior::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::init() -> void{
}


    auto DemoGameBehavior::pause(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


    auto DemoGameBehavior::unPause(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::updateTouch(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::updateScreenButtonPaintable(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->setTouchPaintableP(NullPaintable::getInstance());
    
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::setGameState(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


    auto DemoGameBehavior::removeAllGameKeyInputListeners(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::updateEndGameProcessor(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::buildGame(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::run(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf(GameTypeFactory::getInstance()->BOT), this, commonStrings->RUN);
    
}


                //@Throws(Exception.constructor)
            
    auto DemoGameBehavior::setHighScore(AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, std::string name, int64_t score, bool autoSubmit, bool isLast) -> void{
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_CPP
