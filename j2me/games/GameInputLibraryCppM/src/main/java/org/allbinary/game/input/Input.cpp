
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/Input.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Input::Input(int32_t id, std::string name) : name(StringUtil::getInstance()->EMPTY_STRING){
this->setId(id);
    
this->setName(name);
    
}


    auto Input::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    auto Input::setId(int32_t key) -> void{
this->id= key;
    
}


    auto Input::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto Input::setName(std::string keyName) -> void{
this->name= keyName;
    
}


    auto Input::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Name: ");
    
stringBuffer->append(this->getName());
    
stringBuffer->append(" Id: ");
    
stringBuffer->appendint(this->getId());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUT_CPP
