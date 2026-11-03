
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/IconLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto IconLayer::NULL_ICON_LAYER_owner() -> IconLayer* { static std::unique_ptr<IconLayer> value(new IconLayer(NullAnimationFactory::getFactoryInstance()->getInstance(0), 0, 0)); return value.get(); }
IconLayer* IconLayer::NULL_ICON_LAYER = IconLayer::NULL_ICON_LAYER_owner();

IconLayer::IconLayer(Animation* animationInterface, int32_t width, int32_t height) : AllBinaryLayer(StringUtil::getInstance()->EMPTY_STRING, new Rectangle(PointFactory::getInstance()->ZERO_ZERO, width, height), ViewPosition::getInstanceD()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterface= animationInterface;
    
}


    auto IconLayer::paint(Graphics* graphics) -> void{
this->animationInterface->paintXY(graphics, this->x, this->y);
    
}


    auto IconLayer::paintThreed(Graphics* graphics) -> void{
this->animationInterface->paintThreedXYZ(graphics, this->x, this->y, this->z);
    
}


    auto IconLayer::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_CPP
