
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
        

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


ColorFillPaintableFactory::ColorFillPaintableFactory() {
        }
        auto ColorFillPaintableFactory::instance_owner() -> ColorFillPaintableFactory* { static std::unique_ptr<ColorFillPaintableFactory> value(new ColorFillPaintableFactory()); return value.get(); }
ColorFillPaintableFactory* ColorFillPaintableFactory::instance = ColorFillPaintableFactory::instance_owner();

    auto ColorFillPaintableFactory::getInstance() -> ColorFillPaintableFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFillPaintableFactory::instance;
    
}


    auto ColorFillPaintableFactory::getInstance(BasicColor* basicColor, bool forThreedCanvas) -> ColorFillBasePaintable*{

    GenericOperatingSystem* operatingSystem = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

                        if(operatingSystem->isOverScan())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OverScanColorFillPaintable(basicColor);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ColorFillPaintable(basicColor);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_CPP
