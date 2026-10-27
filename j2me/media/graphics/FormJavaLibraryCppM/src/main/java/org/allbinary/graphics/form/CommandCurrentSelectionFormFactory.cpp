
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/TouchFeatureFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/FormType.h"

class CommandCurrentSelectionFormFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm* getInstance(std::string title, std::vector<ABCustomItem*> items, Rectangle* rectangle, FormType* formType, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor){

                        if(Features::getInstance()->isFeature(TouchFeatureFactory::getInstance()->TOUCH_ENABLED))
                        
                                    {
                                    
    ScrollSelectionForm* scrollSelectionForm = new CommandCurrentSelectionForm(title, items, border, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);;
    
scrollSelectionForm->init(rectangle, formType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollSelectionFormNoneFactory::getInstance();;
    

                        }
                            
}


};

            

