
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/paint/AboutPaintable.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AboutPaintableFactory
            : public Object
         {
        

    private: static const instance: AboutPaintableFactory = new AboutPaintableFactory();

    public static AboutPaintableFactory getInstance();

private constructor ();

    public paintableArray: std::vector<Paintable> = 
                                                [
                                                    NullPaintable.getInstance()
                                                ];

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
