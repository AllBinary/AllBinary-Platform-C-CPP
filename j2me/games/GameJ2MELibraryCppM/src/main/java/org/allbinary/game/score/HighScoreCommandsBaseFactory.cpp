
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HighScoreCommandsBaseFactory::HighScoreCommandsBaseFactory(std::vector<Command*> HIGH_SCORE_COMMANDS) : logUtil(LogUtil::getInstance()){
this->HIGH_SCORE_COMMANDS= HIGH_SCORE_COMMANDS;
    
}


    auto HighScoreCommandsBaseFactory::isHighScoreCommand(Command* command) -> bool{




                        for (
    int32_t index = this->HIGH_SCORE_COMMANDS.size() -1;index >= 0; index--)
        {

                        if(command == this->HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto HighScoreCommandsBaseFactory::getIndex(Command* command) -> int32_t{




                        for (
    int32_t index = this->HIGH_SCORE_COMMANDS.size() -1;index >= 0; index--)
        {

                        if(command == this->HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}




                            throw Exception("No Such Command");
                    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_CPP
