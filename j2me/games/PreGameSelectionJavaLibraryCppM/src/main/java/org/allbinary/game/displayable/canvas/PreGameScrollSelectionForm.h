
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/ItemPaintableFactory.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PreGameScrollSelectionForm: public ScrollCurrentSelectionForm {

public: PreGameScrollSelectionForm(std::string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle rectangle);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H
