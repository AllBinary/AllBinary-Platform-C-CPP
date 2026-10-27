
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ABCustomItem;
class Rectangle;
class BasicColor;
class FormTypeFactory;
class ItemPaintableFactory;
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PreGameScrollSelectionForm: public ScrollCurrentSelectionForm {

public: PreGameScrollSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESCROLLSELECTIONFORM_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormTypeFactory.h>)
#include <org/allbinary/graphics/form/FormTypeFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ItemPaintableFactory.h>)
#include <org/allbinary/graphics/form/ItemPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>
#endif

        #endif
    
