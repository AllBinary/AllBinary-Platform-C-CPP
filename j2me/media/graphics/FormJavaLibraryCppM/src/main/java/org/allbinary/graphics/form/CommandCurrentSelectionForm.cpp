
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/vector/RectangleAdjustedAnimation.h>

      
#include <org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollCurrentSelectionForm.h"
#include "ItemPaintableFactory.h"

class CommandCurrentSelectionForm: public ScrollCurrentSelectionForm: public UpdateMyFontInterface {
        

    const selectedAnimationArray: std::vector<Animation> = new Array(16);

    const unSelectedAnimationArray: std::vector<Animation> = new Array(16);

public constructor (string title, std::vector<ABCustomItem> items, int32_t border, bool moveForSmallScreen, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(title, items, ItemPaintableFactory.getInstance(), border,  -3, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initAnimations();
    
this.addAll(items);
    
}


    public updateMeasurement(Graphics graphics){
this.updateAll(graphics, getAllitems());
    
super.updateMeasurement(graphics);
    
}


    initAnimations(){

    nullAnimation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;;
    




                        for (
    index: int32_t = this.selectedAnimationArray!.length
                ;--index >= 0; )
        {
this.selectedAnimationArray[index]= nullAnimation;
    
}





                        for (
    index: int32_t = this.unSelectedAnimationArray!.length
                ;--index >= 0; )
        {
this.unSelectedAnimationArray[index]= nullAnimation;
    
}

}


    addAll(std::vector<ABCustomItem> items){




                        for (
    index: int32_t = items.length
                ;--index >= 0; )
        {
this.addAt(index, items[index]!);
    
}

}


    addAt(int32_t index, ABCustomItem item){

    basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;;
    

    buttonColor: BasicColor = basicColorFactory!.TRANSPARENT_GREY;;
    

    selectedButtonColor: BasicColor = basicColorFactory!.TRANSPARENT_RED;;
    

    width: int32_t = item.getMinimumWidth()!;;
    

    height: int32_t = item.getMinimumHeight()!;;
    

    adjustedBorder: int32_t = 3;;
    

    offset: int32_t =  -(this.halfBorder +adjustedBorder);;
    

    rectWidth: int32_t = width +this.border -adjustedBorder;;
    

    rectHeight: int32_t = height +this.border -adjustedBorder;;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    this.selectedAnimationArray[index]= new RectangleAdjustedAnimation(rectWidth, rectHeight, offset, offset, selectedButtonColor);
    

                                    }
                                
                        else {
                            this.selectedAnimationArray[index]= new RectangleFilledAdjustedAnimation(rectWidth, rectHeight, offset, offset, selectedButtonColor);
    

                        }
                            
adjustedBorder= 4;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    this.unSelectedAnimationArray[index]= new RectangleAdjustedAnimation(rectWidth, rectHeight, offset, offset, buttonColor);
    

                                    }
                                
                        else {
                            this.unSelectedAnimationArray[index]= new RectangleFilledAdjustedAnimation(rectWidth, rectHeight, offset, offset, buttonColor);
    

                        }
                            
}


    updateAll(Graphics graphics, std::vector<ABCustomItem> items){




                        for (
    index: int32_t = items.length
                ;--index >= 0; )
        {
items[index]!.preMeasurement(graphics);
    
this.updateAt(index, items[index]!);
    
}

}


    updateAt(int32_t index, ABCustomItem item){

    basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;;
    

    buttonColor: BasicColor = basicColorFactory!.TRANSPARENT_GREY;;
    

    selectedButtonColor: BasicColor = basicColorFactory!.TRANSPARENT_RED;;
    

    width: int32_t = item.getMinimumWidth()!;;
    

    height: int32_t = item.getMinimumHeight()!;;
    

    adjustedBorder: int32_t = 3;;
    

    offset: int32_t =  -(this.halfBorder +adjustedBorder);;
    

    rectWidth: int32_t = width +this.border -adjustedBorder;;
    

    rectHeight: int32_t = height +this.border -adjustedBorder;;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    
    rectangleAdjustedAnimation: RectangleAdjustedAnimation = this.selectedAnimationArray[index]! as RectangleAdjustedAnimation;;
    
rectangleAdjustedAnimation!.setWidth(rectWidth);
    
rectangleAdjustedAnimation!.setHeight(rectHeight);
    
rectangleAdjustedAnimation!.setOffsetX(offset);
    
rectangleAdjustedAnimation!.setOffsetY(offset);
    
rectangleAdjustedAnimation!.setBasicColorP(selectedButtonColor);
    

                                    }
                                
                        else {
                            
    rectangleAdjustedAnimation: RectangleFilledAdjustedAnimation = this.selectedAnimationArray[index]! as RectangleFilledAdjustedAnimation;;
    
rectangleAdjustedAnimation!.setWidth(rectWidth);
    
rectangleAdjustedAnimation!.setHeight(rectHeight);
    
rectangleAdjustedAnimation!.setOffsetX(offset);
    
rectangleAdjustedAnimation!.setOffsetY(offset);
    
rectangleAdjustedAnimation!.setBasicColorP(selectedButtonColor);
    

                        }
                            
adjustedBorder= 4;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    
    rectangleAdjustedAnimation: RectangleAdjustedAnimation = this.unSelectedAnimationArray[index]! as RectangleAdjustedAnimation;;
    
rectangleAdjustedAnimation!.setWidth(rectWidth);
    
rectangleAdjustedAnimation!.setHeight(rectHeight);
    
rectangleAdjustedAnimation!.setOffsetX(offset);
    
rectangleAdjustedAnimation!.setOffsetY(offset);
    
rectangleAdjustedAnimation!.setBasicColorP(buttonColor);
    

                                    }
                                
                        else {
                            
    rectangleAdjustedAnimation: RectangleFilledAdjustedAnimation = this.unSelectedAnimationArray[index]! as RectangleFilledAdjustedAnimation;;
    
rectangleAdjustedAnimation!.setWidth(rectWidth);
    
rectangleAdjustedAnimation!.setHeight(rectHeight);
    
rectangleAdjustedAnimation!.setOffsetX(offset);
    
rectangleAdjustedAnimation!.setOffsetY(offset);
    
rectangleAdjustedAnimation!.setBasicColorP(buttonColor);
    

                        }
                            
}


    public Command getSelectedCommand(){

    index: int32_t = super.getSelectedIndex()!;;
    

    commandTextItem: CommandTextItem = this.get(index) as unknown as CommandTextItem;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commandTextItem!.getCommand();;
    
}


    public int32_t append(ABCustomItem item){

    result: int32_t = super.append(item)!;;
    
this.addAt(result, item);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public delete(int32_t itemNum){
super.delete(itemNum);
    
}


    public deleteAll(){
this.initAnimations();
    
super.deleteAll();
    
}


    public insert(int32_t itemNum, ABCustomItem item){
super.insert(itemNum, item);
    
}


    public set(int32_t itemNum, ABCustomItem item){
super.set(itemNum, item);
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
super.paint(graphics);
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paintItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){
this.selectedAnimationArray[index]!.paintXY(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.paintItem(graphics, index, item, x, y);;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paintUnselectedItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){
this.unSelectedAnimationArray[index]!.paintXY(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.paintUnselectedItem(graphics, index, item, x, y);;
    
}


};

            

