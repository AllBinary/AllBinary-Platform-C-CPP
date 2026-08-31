
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_H
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSLayerTextAnimation: public Animation: public UpdateMyFontInterface {
        

    private: const image: Image;

    private: const text: string;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: fontHeight: int32_t = 0;

public constructor (string text, Image image);

    public updateMeasurement(Graphics graphics);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_H
