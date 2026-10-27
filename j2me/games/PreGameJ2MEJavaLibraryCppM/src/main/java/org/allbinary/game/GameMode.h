
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMEMODE_H
        #define ORG_ALLBINARY_GAME_GAMEMODE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameMode
            : public virtual Object
         {

    private: static GameMode* NONE_owner();
    public: static GameMode* NONE;

    private: static GameMode* SERVER_owner();
    public: static GameMode* SERVER;

    private: static GameMode* CLIENT_owner();
    public: static GameMode* CLIENT;

    private: std::string name;

private: GameMode(std::string name);

    private: void setName(std::string name);

    public: std::string getName();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_GAMEMODE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GAMEMODE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GAMEMODE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
