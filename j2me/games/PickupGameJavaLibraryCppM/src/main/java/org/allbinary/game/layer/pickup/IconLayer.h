
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IconLayer: public AllBinaryLayer {

    public: static const IconLayer NULL_ICON_LAYER = IconLayer(NullAnimationFactory::getFactoryInstance().getInstance(0), 0, 0);

    private: Animation animationInterface;

public: IconLayer(Animation animationInterface, int32_t width, int32_t height);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

    public: Animation getAnimationInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H
