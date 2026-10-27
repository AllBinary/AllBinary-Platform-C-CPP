
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicColor;
class GenericOperatingSystem;
class OperatingSystemFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ColorFillPaintable;
class OverScanColorFillPaintable;
class ColorFillBasePaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorFillPaintableFactory
            : public virtual Object
         {

    private: static ColorFillPaintableFactory* instance_owner();
    private: static ColorFillPaintableFactory* instance;

    public: static ColorFillPaintableFactory* getInstance();


            
    public: ColorFillPaintableFactory();
        
    public: ColorFillBasePaintable* getInstance(BasicColor* basicColor, bool forThreedCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include("org/allbinary/game/paint/ColorFillPaintable.h")
#include "org/allbinary/game/paint/ColorFillPaintable.h"
#endif
#if __has_include("org/allbinary/game/paint/OverScanColorFillPaintable.h")
#include "org/allbinary/game/paint/OverScanColorFillPaintable.h"
#endif
#if __has_include("org/allbinary/game/paint/ColorFillBasePaintable.h")
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#endif

        #endif
    
