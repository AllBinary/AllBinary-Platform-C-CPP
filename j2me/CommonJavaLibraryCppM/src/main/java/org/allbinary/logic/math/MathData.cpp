
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHDATA_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_MATHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/MathData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto MathData::instance_owner() -> MathData* { static std::unique_ptr<MathData> value(new MathData()); return value.get(); }
MathData* MathData::instance = MathData::instance_owner();

    auto MathData::getInstance() -> MathData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MathData::instance;
    
}


MathData::MathData(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
this->EQUALS= commonSeps->EQUALS;
    
this->MINUS= commonSeps->DASH;
    
this->DIVIDE= commonSeps->FORWARD_SLASH;
    
this->MULTIPLY= CommonPhoneStrings::getInstance()->STAR;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHDATA_CPP
