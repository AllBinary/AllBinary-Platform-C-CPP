
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSScrollSelectionFormFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm* getInstance(std::string formLabel, std::vector<ABCustomItem*> items){

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    int32_t menuX = CommonButtons::getInstance()->STANDARD_BUTTON_SIZE +touchButtonLocationHelper->getColumnsRemainderHalf();;
    

    int32_t width = displayInfo->getLastWidth() -(menuX *2);;
    

    Rectangle* menuRectangle = new Rectangle(PointFactory::getInstance()->createXY(menuX, 16), width, CommonButtons::getInstance()->STANDARD_BUTTON_SIZE);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MultipleScrollSelectionHorizontalForm::createForm(formLabel, items, menuRectangle, FormTypeFactory::getInstance()->HORIZONTAL_FORM, 0, basicColorFactory->BLACK, basicColorFactory->WHITE);;
    
}


};

            

