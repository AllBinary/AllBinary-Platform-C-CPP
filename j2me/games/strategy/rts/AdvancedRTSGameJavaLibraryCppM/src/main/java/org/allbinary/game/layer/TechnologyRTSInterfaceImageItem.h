
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H
        #define ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSInterface.h"

class TechnologyRTSInterfaceImageItem: public ABCustomImageItem: public UpdateMyFontInterface {
        

    private: const rtsInterface: RTSInterface;

    private: const primitiveLongUtil: PrimitiveLongUtil = PrimitiveLongUtil.createPowerOfTen(10000)!;

    private: const LEVEL: string = "Level";

    private: const COST: string = "Cost";

    private: const DOLLAR: string = "$";

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: costString: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: costLength: int32_t= 0;

    private: levelString: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: levelLength: int32_t= 0;

    private: adjustedCostLabelY: int32_t= 0;

    private: adjustedCostX: int32_t= 0;

    private: adjustedCostY: int32_t= 0;

    private: adjustedLevelX: int32_t= 0;

    private: adjustedLevelY: int32_t= 0;

public constructor (string label, Image img, int32_t layout, string altText, BasicColor basicColor, RTSInterface rtsInterface);

    public updateMeasurement(Graphics graphics);

    public RTSInterface getRtsInterface();

    public update();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H
