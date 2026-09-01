
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

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameMode
            : public Object
         {

    public: static GameMode NONE = GameMode(StringUtil::getInstance().NULL_STRING);

    public: static GameMode SERVER = GameMode("Server");

    public: static GameMode CLIENT = GameMode("Client");

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

private: GameMode(std::string name);

    private: void setName(std::string name);

    public: std::string getName();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_GAMEMODE_H
