
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreCommandsBaseFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::vector<Command> HIGH_SCORE_COMMANDS;

protected: HighScoreCommandsBaseFactory(std::vector<Command> HIGH_SCORE_COMMANDS);

    public: bool isHighScoreCommand(Command command);

                //@Throws(Exception.constructor)
            
    public: int32_t getIndex(Command command);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H
