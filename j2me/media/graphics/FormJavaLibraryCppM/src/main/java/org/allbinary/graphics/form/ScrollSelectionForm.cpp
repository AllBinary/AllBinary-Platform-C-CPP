
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
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaintableForm.h"
#include "ItemPaintableFactory.h"
#include "ItemIndexPaintable.h"
#include "ItemIndexDx.h"
#include "ItemPaintable.h"
#include "FormTypeFactory.h"
//#include "ScrollSelectionFormTempHorizontalPaintable.h"
//#include "ScrollSelectionFormTempHorizontalDx.h"
//#include "ScrollSelectionFormVerticalPaintable.h"
//#include "ScrollSelectionFormVericalDx.h"
//#include "ScrollSelectionFormHorizontalPaintable.h"
//#include "ScrollSelectionFormHorizontalDx.h"
#include "FormType.h"

class ScrollSelectionForm: public PaintableForm {
        

    static ScrollSelectionForm createForm(string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

        try {
            
                        if(formPaintableFactory == ItemPaintableFactory.getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ScrollSelectionForm(title, items, formPaintableFactory, border,  -3, backgroundBasicColor, foregroundBasicColor);
    

                                    }
                                
                        else {
                            


                            throw new RuntimeException();
                    

                        }
                            

                //: 
} catch(e) 
            {



                            throw new RuntimeException();
                    
}

}


    private: static NULL_SCROLL_SELECTION_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ScrollSelectionForm getNullScrollSelectionForm(){

                        if(ScrollSelectionForm.NULL_SCROLL_SELECTION_FORM == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm.NULL_SCROLL_SELECTION_FORM= ScrollSelectionForm.createForm(StringUtil.getInstance()!.EMPTY_STRING, [], ItemPaintableFactory.getInstance(), 0, BasicColorFactory.getInstance()!.BLACK, BasicColorFactory.getInstance()!.WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollSelectionForm.NULL_SCROLL_SELECTION_FORM as ScrollSelectionForm;
    
}


    private: static NULL_SCROLL_SELECTION_HORIZONTAL_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ScrollSelectionForm getNullScrollSelectionFormHorizontal(){

                        if(ScrollSelectionForm.NULL_SCROLL_SELECTION_HORIZONTAL_FORM == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm.NULL_SCROLL_SELECTION_HORIZONTAL_FORM= ScrollSelectionForm.createForm(StringUtil.getInstance()!.EMPTY_STRING, [], ItemPaintableFactory.getInstance(), 0, BasicColorFactory.getInstance()!.BLACK, BasicColorFactory.getInstance()!.WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollSelectionForm.NULL_SCROLL_SELECTION_HORIZONTAL_FORM as ScrollSelectionForm;
    
}


    private: static const INSIDE_FORM: string = " inside form";

    private: static const IS_IN_FORM: string = "isInForm";

    private: static const GET_SELECTED_INDEX: string = "getSelectedIndexForPoint";

//inner= member=true isStatic=
class ScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm){

            super();
        this.scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.paintItemHorizontal(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm){

            super();
        this.scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.paintItemVertical(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm){

            super();
        this.scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.paintItemTempHorizontal(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormHorizontalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm){

            super();
        this.scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.getSelectedIndexForPointHorizontalDx(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormVericalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm){

            super();
        this.scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.getSelectedIndexForPointVerticalDx(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm){

            super();
        this.scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionForm!.getSelectedIndexForPointTempHorizontalDx(index, item, dx, dy);;
    
}


};

            
    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    const border: int32_t;

    const halfBorder: int32_t;

    private: buttonBasicColor: BasicColor;

    scrollSelectionFormFormTypeItemIndexPaintable: ItemIndexPaintable = ItemIndexPaintable.getInstance()!;

    private: formTypeItemIndexDx: ItemIndexDx = ItemIndexDx.getInstance()!;

    paintable: ItemPaintable = ItemPaintableFactory.getInstance()!;

    private: const adjustedExtraBorder: int32_t;

public constructor (string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(title, items, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.adjustedExtraBorder= adjustedExtraBorder;
    
this.buttonBasicColor= foregroundBasicColor;
    
this.border= border;
    
this.halfBorder= (border>>1);
    
this.paintable= formPaintableFactory!.getInstanceItemPaintable(this);
    
}


                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle, FormType formType){
super.init(rectangle, formType);
    

    formTypeFactory: FormTypeFactory = FormTypeFactory.getInstance()!;;
    

                        if(formType == formTypeFactory!.HORIZONTAL_FORM)
                        
                                    {
                                    this.scrollSelectionFormFormTypeItemIndexPaintable= new this.ScrollSelectionFormHorizontalPaintable(this);
    
this.formTypeItemIndexDx= new this.ScrollSelectionFormHorizontalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.VERTICAL_CENTER_FORM)
                        
                                    {
                                    this.scrollSelectionFormFormTypeItemIndexPaintable= new this.ScrollSelectionFormVerticalPaintable(this);
    
this.formTypeItemIndexDx= new this.ScrollSelectionFormVericalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    this.scrollSelectionFormFormTypeItemIndexPaintable= new this.ScrollSelectionFormTempHorizontalPaintable(this);
    
this.formTypeItemIndexDx= new this.ScrollSelectionFormTempHorizontalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory!.NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory!.UNK);
                    

                        }
                            
}


    public int32_t paintItemHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){

    width: int32_t = item.getMinimumWidth()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return x +width +this.border;
    
}


    public int32_t paintItemVertical(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){

    height: int32_t = item.getMinimumHeight()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return y +height +this.border;
    
}


    public int32_t paintItemTempHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public int32_t getSelectedIndexForPointHorizontalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx -this.halfBorder;
    
}


    public int32_t getSelectedIndexForPointVerticalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx +this.getDiffX(item);
    
}


    public int32_t getSelectedIndexForPointTempHorizontalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx +this.getDiffX(item);
    
}


    public int32_t append(ABCustomItem item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.append(item);;
    
}


                //@Throws(Exception.constructor)
            
    public ABCustomItem getSelectedItem(GPoint point){

    index: int32_t = this.getSelectedIndexForPoint(point)!;;
    

                        if(index !=  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.get(index);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABCustomItem.getNullInstance();;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public int32_t getItemIndex(ABCustomItem item){

    nextItem: ABCustomItem;;
    

    size: int32_t = this.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextItem= this.get(index) as ABCustomItem;
    

                        if(nextItem == item)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public int32_t getStartIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getSelectedIndexForPoint(GPoint point){

    start: int32_t = this.getStartIndex()!;;
    

    size: int32_t = this.size()!;;
    

    dx: int32_t = this.getDx()!;;
    

    dy: int32_t = this.getDy()!;;
    

    formTypeFactory: FormTypeFactory = FormTypeFactory.getInstance()!;;
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(commonLabels!.START_LABEL);
    
stringBuffer!.appendint(start);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(commonLabels!.TOTAL_LABEL);
    
stringBuffer!.appendint(size);
    
this.logUtil!.putF(stringBuffer!.toString(), this, ScrollSelectionForm.GET_SELECTED_INDEX);
    

    item: ABCustomItem;;
    

    width: int32_t= 0;;
    

    height: int32_t= 0;;
    

    diffX: int32_t= 0;;
    




                        for (
    index: int32_t = start;index < size; index++)
        {
item= this.get(index);
    
width= item.getMinimumWidth();
    
height= item.getMinimumHeight();
    
diffX= this.formTypeItemIndexDx!.getDx(index, item, dx, dy);
    

                        if(this.rectangleCollisionUtil!.isInside(diffX, dy -this.halfBorder, diffX +width +this.border, dy +height +this.halfBorder +1, point.getX(), point.getY()))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(commonLabels!.ITEM_LABEL);
    
stringBuffer!.append(item.getLabel());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(commonLabels!.INDEX_LABEL);
    
stringBuffer!.appendint(index);
    
this.logUtil!.putF(stringBuffer!.toString(), this, ScrollSelectionForm.GET_SELECTED_INDEX);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                

                        if(this.formType == formTypeFactory!.HORIZONTAL_FORM)
                        
                                    {
                                    dx= dx +width +this.border;
    

                        if(dx > this.rectangle.getMaxX())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.VERTICAL_CENTER_FORM)
                        
                                    {
                                    dy= dy +height +this.border;
    

                        if(dy > this.rectangle.getMaxY())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory!.UNK);
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t processInputKey(int32_t gameKeyCode){

    formTypeFactory: FormTypeFactory = FormTypeFactory.getInstance()!;;
    

                        if(this.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                

    index: int32_t = this.getSelectedIndex()!;;
    

                        if(this.formType == formTypeFactory!.HORIZONTAL_FORM || this.formType == formTypeFactory!.TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    
                        if(gameKeyCode == Canvas.RIGHT)
                        
                                    {
                                    index++;
    

                                    }
                                
                             else 
                        if(gameKeyCode == Canvas.LEFT)
                        
                                    {
                                    index--;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.VERTICAL_CENTER_FORM)
                        
                                    {
                                    
                        if(gameKeyCode == Canvas.DOWN)
                        
                                    {
                                    index++;
    

                                    }
                                
                             else 
                        if(gameKeyCode == Canvas.UP)
                        
                                    {
                                    index--;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.formType == formTypeFactory!.NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory!.UNK);
                    

                        }
                            

    max: int32_t = this.size() -1;;
    

                        if(index < 0)
                        
                                    {
                                    this.setSelectedIndex(0);
    

                                    }
                                
                             else 
                        if(index > max)
                        
                                    {
                                    this.setSelectedIndex(max);
    

                                    }
                                
                        else {
                            this.setSelectedIndex(index);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public bool isInForm(GPoint point){

                        if(this.rectangleCollisionUtil!.isInside(this.x, this.y -this.halfBorder, this.rectangle.getMaxX() +this.border, this.rectangle.getMaxY() +this.border, point.getX(), point.getY()))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(StringUtil.getInstance()!.toString(point))!.append(ScrollSelectionForm.INSIDE_FORM)!.toString(), this, ScrollSelectionForm.IS_IN_FORM);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paintItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){
item.paintXY(graphics, x, y);
    

    width: int32_t = item.getMinimumWidth()!;;
    

    height: int32_t = item.getMinimumHeight()!;;
    
graphics.setColor(this.getButtonBasicColor()!.intValue());
    

    adjustedBorder: int32_t = 3;;
    
graphics.drawRect(x -this.halfBorder -adjustedBorder, y -this.halfBorder -adjustedBorder, width +this.border +this.adjustedExtraBorder, height +this.border +this.adjustedExtraBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionFormFormTypeItemIndexPaintable!.paint(graphics, index, item, x, y);;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t paintUnselectedItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y){
graphics.setColor(this.getButtonBasicColor()!.intValue());
    
item.paintUnselected(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollSelectionFormFormTypeItemIndexPaintable!.paint(graphics, index, item, x, y);;
    
}


    int32_t getDiffX(ABCustomItem item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public setButtonBasicColor(BasicColor buttonBasicColor){
this.buttonBasicColor= buttonBasicColor;
    
}


    BasicColor getButtonBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.buttonBasicColor;
    
}


};

            

