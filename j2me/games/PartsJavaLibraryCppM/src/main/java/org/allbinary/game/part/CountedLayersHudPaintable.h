
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Font;
class Graphics;
class PickedUpLayerInterfaceFactoryInterface;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
#include <org/allbinary/graphics/paint/PaintableInterface.h>
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PartInterface;
class CountedLayerInterfaceFactoryPart;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CountedLayersHudPaintable
            : public virtual Object
        , public virtual PaintableInterface, public virtual UpdateMyFontInterface {

    private: static inline int32_t XXStringWidth = 0;

    private: DisplayInfoSingleton* displayInfoSingleton;

    private: std::vector<PartInterface*> partInterfaceArray;

    private: int32_t countedTotalStringColor;

    private: int32_t countedPartsBorder;

    private: int32_t startIndex;

    private: int32_t dropSize;

    private: MyFontProcessor* myFontProcessor;

    private: int32_t height= 0;

public: CountedLayersHudPaintable(std::vector<PartInterface*> partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/part/PartInterface.h")
#include "org/allbinary/game/part/PartInterface.h"
#endif
#if __has_include("org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h")
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#endif

        #endif
    
