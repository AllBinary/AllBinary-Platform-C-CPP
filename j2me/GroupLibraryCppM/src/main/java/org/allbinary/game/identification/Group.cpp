
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

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: int16_t teamId;

    private: std::string string = StringUtil::getInstance().EMPTY_STRING;

public: Group(std::string teamName, int16_t teamId){
this->teamId= teamId;
    
this->setName(teamName);
    
}


    public: std::string getGroupName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    

    GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(groupCommonFactory.GROUP_NAME_LABEL);
    
stringBuffer.append(this->name);
    
stringBuffer.append(groupCommonFactory.ID_LABEL);
    
stringBuffer.appendshort(this->teamId);
    
this->string= stringBuffer.toString();
    
}


    public: int16_t getGroupId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->teamId;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->string;
    
}


};

            

