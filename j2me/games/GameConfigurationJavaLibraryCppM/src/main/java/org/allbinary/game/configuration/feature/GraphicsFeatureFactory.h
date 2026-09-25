
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsFeature.h"

class GraphicsFeatureFactory
            : public Object
         {

    private: static GraphicsFeatureFactory instance() { return GraphicsFeatureFactory(); }

    public: static GraphicsFeatureFactory getInstance();

private: GraphicsFeatureFactory();

    public: const GraphicsFeature NONE = GraphicsFeature(StringUtil::getInstance().NULL_STRING);

    public: const GraphicsFeature TRANSPARENT_IMAGE_CREATION = GraphicsFeature("Transparent Image Creation");

    public: const GraphicsFeature IMAGE_GRAPHICS = GraphicsFeature("Image Graphics");

    public: const GraphicsFeature IMAGE_ROTATION_ON_THE_FLY = GraphicsFeature("Image Rotated On The Fly");

    public: const GraphicsFeature IMAGE_TO_ARRAY_GRAPHICS = GraphicsFeature("Image To Array Graphics");

    public: const GraphicsFeature SPRITE_QUARTER_ROTATION_GRAPHICS = GraphicsFeature("Sprite Quarter Rotation Graphics");

    public: const GraphicsFeature SPRITE_FULL_GRAPHICS = GraphicsFeature("Sprite Full Rotation Graphics");

    public: const GraphicsFeature VECTOR_GRAPHICS = GraphicsFeature("BasicArrayList Graphics");

    public: const GraphicsFeature VECTOR_TO_IMAGE_GRAPHICS = GraphicsFeature("BasicArrayList To Image Graphics");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H
