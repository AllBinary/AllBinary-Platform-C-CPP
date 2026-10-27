
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/GraphicsFeature.h"

auto GraphicsFeatureFactory::instance_owner() -> GraphicsFeatureFactory* { static std::unique_ptr<GraphicsFeatureFactory> value(new GraphicsFeatureFactory()); return value.get(); }
GraphicsFeatureFactory* GraphicsFeatureFactory::instance = GraphicsFeatureFactory::instance_owner();

    auto GraphicsFeatureFactory::getInstance() -> GraphicsFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GraphicsFeatureFactory::instance;
    
}


GraphicsFeatureFactory::GraphicsFeatureFactory() : NONE(new GraphicsFeature(StringUtil::getInstance()->NULL_STRING)), TRANSPARENT_IMAGE_CREATION(new GraphicsFeature("Transparent Image Creation")), IMAGE_GRAPHICS(new GraphicsFeature("Image Graphics")), IMAGE_ROTATION_ON_THE_FLY(new GraphicsFeature("Image Rotated On The Fly")), IMAGE_TO_ARRAY_GRAPHICS(new GraphicsFeature("Image To Array Graphics")), SPRITE_QUARTER_ROTATION_GRAPHICS(new GraphicsFeature("Sprite Quarter Rotation Graphics")), SPRITE_FULL_GRAPHICS(new GraphicsFeature("Sprite Full Rotation Graphics")), VECTOR_GRAPHICS(new GraphicsFeature("BasicArrayList Graphics")), VECTOR_TO_IMAGE_GRAPHICS(new GraphicsFeature("BasicArrayList To Image Graphics")){
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_CPP
