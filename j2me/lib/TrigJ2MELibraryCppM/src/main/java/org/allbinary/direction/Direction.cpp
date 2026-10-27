
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Direction
            : public Object
         {

    private: static inline std::vector<Direction*> directionArray = std::vector<Direction*>(13);

    public: static Direction* getInstance(int32_t direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Direction::directionArray[direction];
    
}


    private: std::string name;

    private: std::string otherName;

    private: int32_t value;

    private: int32_t frameFactor;

: Direction(std::string name, std::string otherName, int32_t value, int32_t frameFactor){
this->name= name;
    
this->otherName= otherName;
    
this->value= value;
    
this->frameFactor= frameFactor;
    
Direction::directionArray[value]= this;
    
}


    public: int32_t getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: int32_t getFrameFactor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frameFactor;
    
}


    public: std::string getOtherName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->otherName;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string toString(){

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


};

            

