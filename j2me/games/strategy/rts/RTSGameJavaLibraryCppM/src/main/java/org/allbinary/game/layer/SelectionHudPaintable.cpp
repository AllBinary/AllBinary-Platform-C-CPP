
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SelectionHudPaintable: public InitUpdatePaintable: public UpdateMyFontInterface {
        

    const y: int32_t = CommonButtons.getInstance()!.STANDARD_BUTTON_SIZE +17;

    private: const primitiveLongUtil: PrimitiveLongUtil;

    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = updateMyFontProcessor;

    private: x: int32_t= 0;

    textX: int32_t= 0;

    imageX: int32_t= 0;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: color: int32_t= 0;

    private: width: int32_t= 0;

    private: height: int32_t= 0;

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: const backgroundColor: int32_t = BasicColorFactory.getInstance()!.GREY.intValue()!;

protected constructor (){

            super();
        this.update();
    
this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(10000);
    
}


    public updateMeasurement(Graphics graphics){

    commonButtons: CommonButtons = CommonButtons.getInstance()!;;
    

    font: Font = graphics.getFont()!;;
    
this.setHeight(commonButtons!.STANDARD_BUTTON_SIZE +font.getHeight());
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public update(){

    commonButtons: CommonButtons = CommonButtons.getInstance()!;;
    

    touchButtonLocationHelper: TouchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    
this.x= commonButtons!.STANDARD_BUTTON_SIZE +touchButtonLocationHelper!.getColumnsRemainderHalf();
    
this.textX= this.getX() +4;
    
this.width= displayInfoSingleton!.getLastWidth() -this.getX() *2;
    
this.imageX= this.getWidth() +touchButtonLocationHelper!.getColumnsRemainderHalf() -10;
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public updateSelectionInfo(){
}


    public updateInfo(){
}


    PrimitiveLongUtil getPrimitiveLongUtil(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.primitiveLongUtil;
    
}


    setAnimationInterface(Animation animationInterface){
this.animationInterface= animationInterface;
    
}


    Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterface;
    
}


    setName(string name){
this.name= name;
    
}


    string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
this.setColor(basicColor!.intValue());
    
}


    BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    public setColor(int32_t color){
this.color= color;
    
}


    public int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.color;
    
}


    int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.width;
    
}


    setHeight(int32_t height){
this.height= height;
    
}


    int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.height;
    
}


    int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.backgroundColor);
    
graphics.drawRect(this.getX(), this.y, this.getWidth(), this.getHeight());
    
graphics.setColor(this.getColor());
    
graphics.drawString(this.getName(), this.textX, this.y, 0);
    
}


};

            

