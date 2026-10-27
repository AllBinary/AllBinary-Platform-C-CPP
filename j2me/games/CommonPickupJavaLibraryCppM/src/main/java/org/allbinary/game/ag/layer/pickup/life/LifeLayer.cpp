
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/life/LifeLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/ag/life/LifeVisitorInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LifeLayer::LifeLayer() : AllBinaryLayer(StringUtil::getInstance()->EMPTY_STRING, new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 0, 0), ViewPosition::getInstanceD()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto LifeLayer::paint(Graphics* graphics) -> void{
}


    auto LifeLayer::visit(Life* lifeInterface) -> void{
lifeInterface->add(1);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_CPP
