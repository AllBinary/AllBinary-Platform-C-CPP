
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Life;
#include <org/allbinary/game/ag/life/LifeVisitorInterface.h>
class PointFactory;
class Rectangle;
#include <org/allbinary/layer/AllBinaryLayer.h>
class StringUtil;
class ViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LifeLayer: public AllBinaryLayer, public virtual LifeVisitorInterface {

public: LifeLayer();

    public: void paint(Graphics* graphics);

    public: void visit(Life* lifeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/ag/life/Life.h>)
#include <org/allbinary/game/ag/life/Life.h>
#endif
#if __has_include(<org/allbinary/game/ag/life/LifeVisitorInterface.h>)
#include <org/allbinary/game/ag/life/LifeVisitorInterface.h>
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
    
