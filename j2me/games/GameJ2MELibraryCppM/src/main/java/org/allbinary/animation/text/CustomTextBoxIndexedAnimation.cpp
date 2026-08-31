
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/game/input/event/RawKeyEventListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextInterface.h"
#include "TextChangeListener.h"

class CustomTextBoxIndexedAnimation: public IndexedAnimation: public RawKeyEventListener, public UpdateMyFontInterface, public TextInterface {
        

    private: const customTextBox: CustomTextBox;

    private: lastText: string = StringUtil.getInstance()!.INIT_STRING;

    hasChanged: bool = true;

    private: textChangeListener: TextChangeListener = TextChangeListener.getInstance()!;

public constructor (CustomTextBox customTextBox){
            super(AnimationBehavior.getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.customTextBox= customTextBox;
    
}


    public setBasicColorP(BasicColor basicColor){
this.customTextBox!.getTextFieldItem()!.setForegroundBasicColorP(basicColor);
    
}


    public setBackgroundBasicColorP(BasicColor basicColor){
this.customTextBox!.getTextFieldItem()!.setBackgroundBasicColorP(basicColor);
    
}


    public setTextWithOnMeasure(string text, TextChangeListener textChangeListener){
this.setText(text);
    
this.textChangeListener= textChangeListener;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.textChangeListener!.onMeasure();
    
this.textChangeListener= TextChangeListener.getInstance();
    
}


    public setText(string text){

                        if(this.lastText != text)
                        
                                    {
                                    this.hasChanged= true;
    
this.lastText= text;
    
this.customTextBox!.getTextFieldItem()!.setString(text);
    

                                    }
                                
}


    public string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customTextBox!.getTextFieldItem()!.getString();;
    
}


    public onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated){
this.customTextBox!.onEventRaw(keyCode, deviceId, repeated);
    
}


    public int32_t getFontHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customTextBox!.getTextFieldItem()!.getFontHeight();;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.customTextBox!.paintXY(graphics, x, y);
    
}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){
}


};

            

