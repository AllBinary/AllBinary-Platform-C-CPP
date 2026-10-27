
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Command;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoreCommands
            : public virtual Object
         {

    private: static HighScoreCommands* instance_owner();
    private: static HighScoreCommands* instance;

    public: static HighScoreCommands* getInstance();


            
    public: HighScoreCommands();
        
    public: Command* DISPLAY;

    public: Command* PERSONAL;

    public: Command* WORLD;

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
