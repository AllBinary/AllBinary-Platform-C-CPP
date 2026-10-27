
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class ABCustomItem;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ItemIndexPaintable
            : public virtual Object
         {

    private: static ItemIndexPaintable* instance_owner();
    private: static ItemIndexPaintable* instance;

    public: static ItemIndexPaintable* getInstance();


            
    public: ItemIndexPaintable();
        
                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEMINDEXPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif

        #endif
    
