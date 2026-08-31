
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GroupInterface.h"
#include "GroupCommonFactory.h"

class Group
            : public Object
        : public GroupInterface {
        

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const teamId: int16_t;

    private: string: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string teamName, int16_t teamId);

    public string getGroupName();

    public setName(string name);

    public int16_t getGroupId();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
