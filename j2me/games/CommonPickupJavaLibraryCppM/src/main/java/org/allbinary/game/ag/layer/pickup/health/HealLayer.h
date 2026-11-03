
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class HealthInterface;
#include <org/allbinary/game/health/HealthVisitorInterface.h>
class PointFactory;
class Rectangle;
#include <org/allbinary/layer/AllBinaryLayer.h>
class StringUtil;
class ViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealLayer: public AllBinaryLayer, public virtual HealthVisitorInterface {

public: HealLayer();

    public: void paint(Graphics* graphics);

    public: void visit(HealthInterface* healthInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthInterface.h>)
#include <org/allbinary/game/health/HealthInterface.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthVisitorInterface.h>)
#include <org/allbinary/game/health/HealthVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/view/ViewPosition.h>)
#include <org/allbinary/view/ViewPosition.h>
#endif

        #endif
    
