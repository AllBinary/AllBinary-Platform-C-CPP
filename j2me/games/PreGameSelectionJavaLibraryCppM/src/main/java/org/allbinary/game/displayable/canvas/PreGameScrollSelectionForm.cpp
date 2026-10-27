
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/PreGameScrollSelectionForm.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/ItemPaintableFactory.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PreGameScrollSelectionForm::PreGameScrollSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ScrollCurrentSelectionForm(title, items, formPaintableFactory, 0, 3, false, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto PreGameScrollSelectionForm::init(Rectangle* rectangle) -> void{
ScrollCurrentSelectionForm::init(rectangle, FormTypeFactory::getInstance()->TEMP_HORIZONTAL_FORM);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_CPP
