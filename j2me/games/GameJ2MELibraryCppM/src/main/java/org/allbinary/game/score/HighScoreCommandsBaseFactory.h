
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;

class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoreCommandsBaseFactory
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    public: std::vector<Command*> HIGH_SCORE_COMMANDS;

/*protected*/ public: HighScoreCommandsBaseFactory(std::vector<Command*> HIGH_SCORE_COMMANDS);

    public: bool isHighScoreCommand(Command* command);

                //@Throws(Exception.constructor)
            
    public: int32_t getIndex(Command* command);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
