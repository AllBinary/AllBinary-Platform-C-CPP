
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
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTION_CPP
        #define ORG_ALLBINARY_DIRECTION_DIRECTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/direction/Direction.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
std::vector<Direction*> Direction::directionArray = std::vector<Direction*>(13);

Direction::Direction(std::string name, std::string otherName, int32_t value, int32_t frameFactor){
this->name= name;
    
this->otherName= otherName;
    
this->value= value;
    
this->frameFactor= frameFactor;
    
Direction::directionArray[value]= this;
    
}


    auto Direction::getInstance(int32_t direction) -> Direction*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Direction::directionArray[direction];
    
}


    auto Direction::getValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->value;
    
}


    auto Direction::getFrameFactor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->frameFactor;
    
}


    auto Direction::getOtherName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->otherName;
    
}


    auto Direction::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto Direction::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Direction: ");
    
stringBuffer->append(this->getName());
    
stringBuffer->append(" Or: ");
    
stringBuffer->append(this->getOtherName());
    
stringBuffer->append(" Value: ");
    
stringBuffer->appendint(this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_DIRECTION_DIRECTION_CPP
