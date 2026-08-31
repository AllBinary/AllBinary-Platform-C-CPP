
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

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollSelectionForm.h"
#include "ItemIndexDx.h"
#include "ItemPaintableFactory.h"
#include "FormTypeFactory.h"
//#include "VerticalFormProcessor.h"
//#include "VerticalItemIndexDx.h"
//#include "HorizontalFormProcessor.h"
//#include "HorizontalItemIndexDx.h"
//#include "TempHorizontalFormProcessor.h"
//#include "TempHorizontalItemIndexDx.h"
#include "FormType.h"

class ScrollCurrentSelectionForm: public ScrollSelectionForm: public UpdateMyFontInterface {
        

    private: const moveForSmallScreen: bool;

//inner= member=true isStatic=
class TempHorizontalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.scrollCurrentSelectionForm!.processTempHorizontalForm();
    
this.scrollCurrentSelectionForm!.processor= Processor.getInstance();
    
}


};

            
//inner= member=true isStatic=
class HorizontalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.scrollCurrentSelectionForm!.processHorizontalForm();
    
this.scrollCurrentSelectionForm!.processor= Processor.getInstance();
    
}


};

            
//inner= member=true isStatic=
class VerticalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.scrollCurrentSelectionForm!.processVerticalForm();
    
this.scrollCurrentSelectionForm!.processor= Processor.getInstance();
    
}


};

            
//inner= member=true isStatic=
class TempHorizontalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollCurrentSelectionForm!.getXTempHorizontalForm(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class HorizontalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollCurrentSelectionForm!.getXHorizontalForm(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class VerticalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm){

            super();
        this.scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollCurrentSelectionForm!.getXVerticalForm(index, item, dx, dy);;
    
}


};

            
    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: processor: Processor = Processor.getInstance()!;

    private: preItemIndexDx: ItemIndexDx = ItemIndexDx.getInstance()!;

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

    private: maxWidth: int32_t = 0;

public constructor (string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.moveForSmallScreen= moveForSmallScreen;
    
}


                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle, FormType formType){
super.init(rectangle, formType);
    

    formTypeFactory: FormTypeFactory = FormTypeFactory.getInstance()!;;
    

                        if(formType == formTypeFactory!.TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    this.processor= new this.TempHorizontalFormProcessor(this);
    
this.preItemIndexDx= new this.TempHorizontalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.HORIZONTAL_FORM)
                        
                                    {
                                    this.processor= new this.HorizontalFormProcessor(this);
    
this.preItemIndexDx= new this.HorizontalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.VERTICAL_CENTER_FORM)
                        
                                    {
                                    this.processor= new this.VerticalFormProcessor(this);
    
this.preItemIndexDx= new this.VerticalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.logUtil!.putF(formTypeFactory!.UNK, this, this.commonStrings!.INIT);
    

                        }
                            
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public updateMeasurement(Graphics graphics){
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    processTempHorizontalForm(){
this.dx= this.x -30 +(this.rectangle.getWidth()>>1);
    
this.dy= this.y;
    
}


    processHorizontalForm(){

    size: int32_t = this.size()!;;
    

    totalWidth: int32_t = 0;;
    

    item: ABCustomItem;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
item= this.get(index);
    
totalWidth += item.getMinimumWidth() +this.border;
    
}

this.dx= this.x +(this.rectangle.getWidth()>>1) -(totalWidth>>1);
    
this.dy= this.y +(this.rectangle.getHeight()>>1);
    

                        if(this.moveForSmallScreen)
                        
                                    {
                                    
    maxTitleHeight: int32_t = 175;;
    

                        if(this.dy < maxTitleHeight)
                        
                                    {
                                    this.dy= maxTitleHeight;
    

                                    }
                                

                                    }
                                
}


    processVerticalForm(){

    totalHeight: int32_t = 0;;
    

    size: int32_t = this.size()!;;
    

    item2: ABCustomItem;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
item2= this.get(index);
    

                        if(this.maxWidth < item2.getMinimumWidth())
                        
                                    {
                                    this.maxWidth= item2.getMinimumWidth();
    

                                    }
                                
totalHeight += item2.getMinimumHeight() +this.border;
    
}

this.dx= ((this.rectangle.getWidth() -this.maxWidth) /2);
    

                        if(this.size() > 0)
                        
                                    {
                                    this.dy= this.y +((this.rectangle.getHeight() -totalHeight) /2);
    

                        if(this.moveForSmallScreen)
                        
                                    {
                                    
    maxTitleHeight: int32_t = 175;;
    

                        if(this.dy < maxTitleHeight)
                        
                                    {
                                    this.dy= maxTitleHeight;
    

                                    }
                                

                                    }
                                

                                    }
                                
                        else {
                            this.dy= this.y;
    

                        }
                            
}


    int32_t getXTempHorizontalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getDiffX(item);;
    
}


    int32_t getXHorizontalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    int32_t getXVerticalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getDiffX(item) +this.halfBorder;
    
}


    int32_t getDiffX(ABCustomItem item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((this.maxWidth -item.getMinimumWidth())>>1);
    
}


    public int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dx;
    
}


    public int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dy;
    
}


    public paint(Graphics graphics){

        try {
            this.processor.process();
    

    delta: int32_t = 0;;
    

    deltaX: int32_t = this.getDx()!;;
    

    deltaY: int32_t = this.getDy()!;;
    

    size: int32_t = this.size()!;;
    

    formTypeFactory: FormTypeFactory = FormTypeFactory.getInstance()!;;
    

    item: ABCustomItem;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
item= this.get(index);
    

    diffX: int32_t = this.preItemIndexDx!.getDx(index, item, this.dx, this.dy)!;;
    

                        if(index == this.getSelectedIndex())
                        
                                    {
                                    delta= this.paintItem(graphics, index, item, deltaX +diffX, deltaY);
    
this.paintable.paint(graphics, index, deltaX +diffX, deltaY);
    

                                    }
                                
                        else {
                            delta= this.paintUnselectedItem(graphics, index, item, deltaX +diffX, deltaY);
    
this.paintable.paint(graphics, index, deltaX +diffX, deltaY);
    

                        }
                            

                        if(this.formType == formTypeFactory!.TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.HORIZONTAL_FORM)
                        
                                    {
                                    deltaX= delta;
    

                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.VERTICAL_CENTER_FORM)
                        
                                    {
                                    deltaY= delta;
    

                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory!.UNK);
                    

                        }
                            
}


                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.canvasStrings!.PAINT, e);
    
}

}


};

            

