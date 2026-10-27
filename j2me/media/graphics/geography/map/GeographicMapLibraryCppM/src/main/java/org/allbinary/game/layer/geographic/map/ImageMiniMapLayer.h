
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_IMAGEMINIMAPLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_IMAGEMINIMAPLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class NullImage;
class Anchor;
class PaintableToImageUtil;
class BasicGeographicMap;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/geographic/map/MiniMapLayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageMiniMapLayer: public MiniMapLayer {

    private: Image* image;

public: ImageMiniMapLayer(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void init();

    private: int32_t anchor;

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_IMAGEMINIMAPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_IMAGEMINIMAPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_IMAGEMINIMAPLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/image/PaintableToImageUtil.h>)
#include <org/allbinary/image/PaintableToImageUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/geographic/map/MiniMapLayer.h")
#include "org/allbinary/game/layer/geographic/map/MiniMapLayer.h"
#endif

        #endif
    
