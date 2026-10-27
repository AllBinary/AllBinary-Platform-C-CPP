
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GraphicsFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicsFeatureFactory
            : public virtual Object
         {

    private: static GraphicsFeatureFactory* instance_owner();
    private: static GraphicsFeatureFactory* instance;

    public: static GraphicsFeatureFactory* getInstance();

private: GraphicsFeatureFactory();

    public: GraphicsFeature* NONE;

    public: GraphicsFeature* TRANSPARENT_IMAGE_CREATION;

    public: GraphicsFeature* IMAGE_GRAPHICS;

    public: GraphicsFeature* IMAGE_ROTATION_ON_THE_FLY;

    public: GraphicsFeature* IMAGE_TO_ARRAY_GRAPHICS;

    public: GraphicsFeature* SPRITE_QUARTER_ROTATION_GRAPHICS;

    public: GraphicsFeature* SPRITE_FULL_GRAPHICS;

    public: GraphicsFeature* VECTOR_GRAPHICS;

    public: GraphicsFeature* VECTOR_TO_IMAGE_GRAPHICS;

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATUREFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/configuration/feature/GraphicsFeature.h")
#include "org/allbinary/game/configuration/feature/GraphicsFeature.h"
#endif

        #endif
    
