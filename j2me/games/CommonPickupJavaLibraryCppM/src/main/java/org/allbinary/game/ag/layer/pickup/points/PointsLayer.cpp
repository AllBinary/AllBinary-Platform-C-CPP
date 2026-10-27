
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/points/PointsLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PointsLayer::PointsLayer(int32_t points) : AllBinaryLayer(StringUtil::getInstance()->EMPTY_STRING, new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 0, 0), ViewPosition::getInstanceD()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->points= points;
    
}


    auto PointsLayer::paint(Graphics* graphics) -> void{
}


    auto PointsLayer::visit(ScoreableInterface* scoreableInterface) -> void{
scoreableInterface->addPoints(this->points);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_CPP
