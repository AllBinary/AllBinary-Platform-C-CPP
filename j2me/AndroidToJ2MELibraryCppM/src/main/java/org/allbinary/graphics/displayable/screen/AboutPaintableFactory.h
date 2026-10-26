
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AboutPaintableFactory
            : public Object
         {

    private: static AboutPaintableFactory instance() { return AboutPaintableFactory(); }

    public: static AboutPaintableFactory getInstance();

    public: std::vector<Paintable> paintableArray = 
                                                {
                                                    NullPaintable::getInstance()
                                                };

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
