
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_CPP
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/identification/Group.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/GroupInterface.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"


Group::Group(std::string teamName, int16_t teamId) : name(StringUtil::getInstance()->EMPTY_STRING), string(StringUtil::getInstance()->EMPTY_STRING){
this->teamId= teamId;
    
this->setName(teamName);
    
}


    auto Group::getGroupName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto Group::setName(std::string name) -> void{
this->name= name;
    

    GroupCommonFactory* groupCommonFactory = GroupCommonFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(groupCommonFactory->GROUP_NAME_LABEL);
    
stringBuffer->append(this->name);
    
stringBuffer->append(groupCommonFactory->ID_LABEL);
    
stringBuffer->appendshort(this->teamId);
    
this->string= stringBuffer->toString();
    
}


    auto Group::getGroupId() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->teamId;
    
}


    auto Group::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->string;
    
}




        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_CPP
