
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonButtons
            : public Object
         {

    private: static CommonButtons instance() { return CommonButtons(); }

    public: static CommonButtons getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonButtons::instance();
    
}


    public: int32_t STANDARD_BUTTON_SIZE;

    public: Rectangle NORMAL_BUTTON;

    public: Rectangle LARGE_BUTTON;

private: CommonButtons(){

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

    int32_t commonButtonSize = 128;;
    

        while(commonButtonSize > 64)
        {

    int32_t totalColumns = displayInfo.getLastWidth() /commonButtonSize;;
    

    int32_t totalRows = displayInfo.getLastHeight() /commonButtonSize;;
    

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
    
this->NORMAL_BUTTON= Rectangle(PointFactory::getInstance().ZERO_ZERO, this->STANDARD_BUTTON_SIZE, this->STANDARD_BUTTON_SIZE);
    
this->LARGE_BUTTON= Rectangle(PointFactory::getInstance().ZERO_ZERO, this->STANDARD_BUTTON_SIZE<<1, this->STANDARD_BUTTON_SIZE<<1);
    
}


};

            

