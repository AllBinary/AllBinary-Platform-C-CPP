
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
        

    private: id: int32_t= 0;

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (int32_t id, string name);

    public int32_t getId();

    setId(int32_t key);

    public string getName();

    setName(string keyName);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUT_H
