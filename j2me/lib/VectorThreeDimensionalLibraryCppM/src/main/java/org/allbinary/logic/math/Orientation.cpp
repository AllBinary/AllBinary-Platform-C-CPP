
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/Orientation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/BasicDecimal.h"

auto Orientation::NONE_owner() -> Orientation* { static std::unique_ptr<Orientation> value(new Orientation(0, 0, 0)); return value.get(); }
Orientation* Orientation::NONE = Orientation::NONE_owner();
auto Orientation::SINGLETON_owner() -> Orientation* { static std::unique_ptr<Orientation> value(new Orientation(0, 0, 0)); return value.get(); }
Orientation* Orientation::SINGLETON = Orientation::SINGLETON_owner();

    auto Orientation::getInstance(int32_t yaw, int32_t pitch, int32_t roll) -> Orientation*{
Orientation::SINGLETON->yaw->setint(yaw);
    
Orientation::SINGLETON->pitch->setint(pitch);
    
Orientation::SINGLETON->roll->setint(roll);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Orientation::SINGLETON;
    
}


Orientation::Orientation(int32_t yaw, int32_t pitch, int32_t roll) : yaw(new BasicDecimal(0)), pitch(new BasicDecimal(0)), roll(new BasicDecimal(0)){
this->yaw->setint(yaw);
    
this->pitch->setint(pitch);
    
this->roll->setint(roll);
    
}


    auto Orientation::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Y: ");
    
stringBuffer->append(std::to_string(yaw));
    
stringBuffer->append(" P: ");
    
stringBuffer->append(std::to_string(pitch));
    
stringBuffer->append(" R: ");
    
stringBuffer->append(std::to_string(roll));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_CPP
