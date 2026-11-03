
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/CommonButtons.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CommonButtons::instance_owner() -> CommonButtons* { static std::unique_ptr<CommonButtons> value(new CommonButtons()); return value.get(); }
CommonButtons* CommonButtons::instance = CommonButtons::instance_owner();

    auto CommonButtons::getInstance() -> CommonButtons*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommonButtons::instance;
    
}


CommonButtons::CommonButtons(){

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    int32_t commonButtonSize = 128;;
    

        while(commonButtonSize > 64)
        {

    int32_t totalColumns = displayInfo->getLastWidth() /commonButtonSize;;
    

    int32_t totalRows = displayInfo->getLastHeight() /commonButtonSize;;
    

    int32_t max = totalColumns;;
    

                        if(totalRows > max)
                        
                                    {
                                    max= totalRows;
    

                                    }
                                

                        if(max > 9)
                        
                                    {
                                    break;

                    

                                    }
                                
commonButtonSize= commonButtonSize>>1;
    
}

this->STANDARD_BUTTON_SIZE= commonButtonSize;
    
this->NORMAL_BUTTON= new Rectangle(PointFactory::getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE, this->STANDARD_BUTTON_SIZE);
    
this->LARGE_BUTTON= new Rectangle(PointFactory::getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE<<1, this->STANDARD_BUTTON_SIZE<<1);
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_CPP
