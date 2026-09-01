
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUT_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Input
            : public Object
         {

    private: int32_t id= 0;

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

public: Input(int32_t id, std::string name);

    public: int32_t getId();

    private: void setId(int32_t key);

    public: std::string getName();

    private: void setName(std::string keyName);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUT_H
