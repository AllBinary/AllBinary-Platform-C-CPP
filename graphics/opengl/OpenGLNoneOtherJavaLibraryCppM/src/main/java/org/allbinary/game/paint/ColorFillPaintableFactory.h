
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/ColorFillPaintable.h"
#include "org/allbinary/game/paint/OverScanColorFillPaintable.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"

class ColorFillPaintableFactory
            : public Object
         {

    private: static ColorFillPaintableFactory* instance() { static std::unique_ptr<ColorFillPaintableFactory> value(new ColorFillPaintableFactory()); return value.get(); }

    public: static ColorFillPaintableFactory* getInstance();

    public: ColorFillBasePaintable* getInstance(BasicColor* basicColor, bool forThreedCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
