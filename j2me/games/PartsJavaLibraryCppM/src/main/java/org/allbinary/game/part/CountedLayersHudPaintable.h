
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"

class CountedLayersHudPaintable
            : public Object
        , public PaintableInterface, public UpdateMyFontInterface {

    private: static inline int32_t XXStringWidth = 0;

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: std::vector<PartInterface*> partInterfaceArray;

    private: int32_t countedTotalStringColor;

    private: int32_t countedPartsBorder;

    private: int32_t startIndex;

    private: int32_t dropSize;

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: int32_t height= 0;

public: CountedLayersHudPaintable(std::vector<PartInterface*> partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H
