
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorFillPaintable.h"
#include "OverScanColorFillPaintable.h"
#include "ColorFillBasePaintable.h"

class ColorFillPaintableFactory
            : public Object
         {
        

    private: static const instance: ColorFillPaintableFactory = new ColorFillPaintableFactory();

    public static ColorFillPaintableFactory getInstance();

    public ColorFillBasePaintable getInstance(BasicColor basicColor, bool forThreedCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
