
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/canvas/ABToGBUtil.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTextBox2.h"
#include "CustomTextBoxIndexedAnimation.h"

class CustomTextBoxIndexedAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public scaleProperties: ScaleProperties;

    private: const maxLength: int32_t;

public constructor (int32_t fontSize, int32_t maxLength){

            super();
        this.scaleProperties= new ScaleProperties();
    
this.scaleProperties!.scaleHeight= fontSize;
    
this.maxLength= maxLength;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){

    abToGBUtil: ABToGBUtil = ABToGBUtil.getInstance()!;;
    

    abCanvas: AllBinaryGameCanvas = abToGBUtil!.abCanvas as AllBinaryGameCanvas;;
    

    font: Font = Font.getFont(Font.FACE_SYSTEM, Font.STYLE_PLAIN, this.scaleProperties!.scaleHeight)!;;
    

    customTextBox: CustomTextBox = new CustomTextBox2(abCanvas!.getCustomCommandListener(), StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING, this.maxLength, TextField.ANY, font, abCanvas!.getLayerManager()!.getBackgroundBasicColor(), abCanvas!.getLayerManager()!.getForegroundBasicColor());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomTextBoxIndexedAnimation(customTextBox);
    
}


    public setInitialScale(ScaleProperties scaleProperties){

    fontSize: int32_t = this.scaleProperties!.scaleHeight;;
    
this.scaleProperties= scaleProperties;
    

                        if(this.scaleProperties!.scaleHeight < 6)
                        
                                    {
                                    this.scaleProperties!.scaleHeight= fontSize;
    

                                    }
                                
}


};

            

