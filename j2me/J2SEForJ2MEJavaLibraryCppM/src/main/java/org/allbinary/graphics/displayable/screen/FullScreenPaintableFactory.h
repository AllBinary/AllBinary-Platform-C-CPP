
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FullScreenPaintableFactory
            : public Object
         {

    private: static FullScreenPaintableFactory instance() { return FullScreenPaintableFactory(); }

    public: static FullScreenPaintableFactory getInstance();

    public: Paintable paintable = NullPaintable::getInstance();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H
