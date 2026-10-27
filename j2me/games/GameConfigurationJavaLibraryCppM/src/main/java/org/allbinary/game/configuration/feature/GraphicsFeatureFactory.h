
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/GraphicsFeature.h"

class GraphicsFeatureFactory
            : public Object
         {

    private: static GraphicsFeatureFactory* instance() { static std::unique_ptr<GraphicsFeatureFactory> value(new GraphicsFeatureFactory()); return value.get(); }

    public: static GraphicsFeatureFactory* getInstance();

private: GraphicsFeatureFactory();

    public: GraphicsFeature* NONE = new GraphicsFeature(StringUtil::getInstance()->NULL_STRING);

    public: GraphicsFeature* TRANSPARENT_IMAGE_CREATION = new GraphicsFeature("Transparent Image Creation");

    public: GraphicsFeature* IMAGE_GRAPHICS = new GraphicsFeature("Image Graphics");

    public: GraphicsFeature* IMAGE_ROTATION_ON_THE_FLY = new GraphicsFeature("Image Rotated On The Fly");

    public: GraphicsFeature* IMAGE_TO_ARRAY_GRAPHICS = new GraphicsFeature("Image To Array Graphics");

    public: GraphicsFeature* SPRITE_QUARTER_ROTATION_GRAPHICS = new GraphicsFeature("Sprite Quarter Rotation Graphics");

    public: GraphicsFeature* SPRITE_FULL_GRAPHICS = new GraphicsFeature("Sprite Full Rotation Graphics");

    public: GraphicsFeature* VECTOR_GRAPHICS = new GraphicsFeature("BasicArrayList Graphics");

    public: GraphicsFeature* VECTOR_TO_IMAGE_GRAPHICS = new GraphicsFeature("BasicArrayList To Image Graphics");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H
