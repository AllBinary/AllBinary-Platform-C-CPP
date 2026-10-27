
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/PaintableForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormTempHorizontalPaintable.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormTempHorizontalDx.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormVerticalPaintable.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormVericalDx.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormHorizontalPaintable.h"
//#include "org/allbinary/graphics/form/ScrollSelectionFormHorizontalDx.h"
#include "org/allbinary/graphics/form/FormType.h"

class ScrollSelectionForm: public PaintableForm {

    private: static PaintableForm* createForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor){

        try {
            
                        if(formPaintableFactory == ItemPaintableFactory::getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ScrollSelectionForm(title, items, formPaintableFactory, border,  -3, backgroundBasicColor, foregroundBasicColor);
    

                                    }
                                
                        else {
                            
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF(commonStrings->EXCEPTION, logUtil, commonStrings->EXCEPTION);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaintableForm::getNullPaintableForm();;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, logUtil, commonStrings->EXCEPTION, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaintableForm::getNullPaintableForm();;
    
}

}


    private: static inline Object* NULL_SCROLL_SELECTION_FORM = NullUtil::getInstance()->NULL_OBJECT;

    public: static ScrollSelectionForm* getNullScrollSelectionForm(){

                        if(ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM= ScrollSelectionForm::createForm(StringUtil::getInstance()->EMPTY_STRING, {}, ItemPaintableFactory::getInstance(), 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ScrollSelectionForm*>(ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM);
    
}


    private: static inline Object* NULL_SCROLL_SELECTION_HORIZONTAL_FORM = NullUtil::getInstance()->NULL_OBJECT;

    public: static ScrollSelectionForm* getNullScrollSelectionFormHorizontal(){

                        if(ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM= ScrollSelectionForm::createForm(StringUtil::getInstance()->EMPTY_STRING, {}, ItemPaintableFactory::getInstance(), 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ScrollSelectionForm*>(ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM);
    
}


    private: static inline const std::string INSIDE_FORM = " inside form";

    private: static inline const std::string IS_IN_FORM = "isInForm";

    private: static inline const std::string GET_SELECTED_INDEX = "getSelectedIndexForPoint";

//inner= member=true isStatic=
class ScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->paintItemHorizontal(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormVerticalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->paintItemVertical(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormTempHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->paintItemTempHorizontal(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormHorizontalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->getSelectedIndexForPointHorizontalDx(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormVericalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormVericalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->getSelectedIndexForPointVerticalDx(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

: ScrollSelectionFormTempHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionForm->getSelectedIndexForPointTempHorizontalDx(index, item, dx, dy);;
    
}


};

            
    private: RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil::getInstance();

    protected: int32_t border;

    protected: int32_t halfBorder;

    private: BasicColor* buttonBasicColor;

    protected: ItemIndexPaintable* scrollSelectionFormFormTypeItemIndexPaintable = ItemIndexPaintable::getInstance();

    private: ItemIndexDx* formTypeItemIndexDx = ItemIndexDx::getInstance();

    protected: ItemPaintable* paintable = ItemPaintableFactory::getInstance();

    private: int32_t adjustedExtraBorder;

public: ScrollSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : PaintableForm(title, items, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->adjustedExtraBorder= adjustedExtraBorder;
    
this->buttonBasicColor= foregroundBasicColor;
    
this->border= border;
    
this->halfBorder= (border>>1);
    
this->paintable= formPaintableFactory->getInstanceItemPaintable(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType){
super.init(rectangle, formType);
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= new ScrollSelectionFormHorizontalPaintable(this);
    
this->formTypeItemIndexDx= new ScrollSelectionFormHorizontalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= new ScrollSelectionFormVerticalPaintable(this);
    
this->formTypeItemIndexDx= new ScrollSelectionFormVericalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= new ScrollSelectionFormTempHorizontalPaintable(this);
    
this->formTypeItemIndexDx= new ScrollSelectionFormTempHorizontalDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory->UNK);
                    

                        }
                            
}


    public: int32_t paintItemHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){

    int32_t width = item->getMinimumWidth();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return x +width +this->border;
    
}


    public: int32_t paintItemVertical(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){

    int32_t height = item->getMinimumHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return y +height +this->border;
    
}


    public: int32_t paintItemTempHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getSelectedIndexForPointHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx -this->halfBorder;
    
}


    public: int32_t getSelectedIndexForPointVerticalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx +this->getDiffX(item);
    
}


    public: int32_t getSelectedIndexForPointTempHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx +this->getDiffX(item);
    
}


    public: int32_t append(ABCustomItem* item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.append(item);;
    
}


                //@Throws(Exception.constructor)
            
    public: ABCustomItem* getSelectedItem(GPoint* point){

    int32_t index = this->getSelectedIndexForPoint(point);;
    

                        if(index !=  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->get(index);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABCustomItem::getNullInstance();;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: int32_t getItemIndex(ABCustomItem* item){

    ABCustomItem* nextItem;;
    

    int32_t size = this->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextItem= dynamic_cast<ABCustomItem*>(this->get(index));
    

                        if(nextItem == item)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t getStartIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getSelectedIndexForPoint(GPoint* point){

    int32_t start = this->getStartIndex();;
    

    int32_t size = this->size();;
    

    int32_t dx = this->getDx();;
    

    int32_t dy = this->getDy();;
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(commonLabels->START_LABEL);
    
stringBuffer->appendint(start);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(commonLabels->TOTAL_LABEL);
    
stringBuffer->appendint(size);
    
this->logUtil->putF(stringBuffer->toString(), this, ScrollSelectionForm::GET_SELECTED_INDEX);
    

    ABCustomItem* item;;
    

    int32_t width= 0;;
    

    int32_t height= 0;;
    

    int32_t diffX= 0;;
    




                        for (
    int32_t index = start;index < size; index++)
        {
item= this->get(index);
    
width= item->getMinimumWidth();
    
height= item->getMinimumHeight();
    
diffX= this->formTypeItemIndexDx->getDx(index, item, dx, dy);
    

                        if(this->rectangleCollisionUtil->isInside(diffX, dy -this->halfBorder, diffX +width +this->border, dy +height +this->halfBorder +1, point->getX(), point->getY()))
                        
                                    {
                                    stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(commonLabels->ITEM_LABEL);
    
stringBuffer->append(item->getLabel());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(commonLabels->INDEX_LABEL);
    
stringBuffer->appendint(index);
    
this->logUtil->putF(stringBuffer->toString(), this, ScrollSelectionForm::GET_SELECTED_INDEX);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                

                        if(this->formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    dx= dx +width +this->border;
    

                        if(dx > this->rectangle.getMaxX())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    dy= dy +height +this->border;
    

                        if(dy > this->rectangle.getMaxY())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory->UNK);
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t processInputKey(int32_t gameKeyCode){

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(this->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                

    int32_t index = this->getSelectedIndex();;
    

                        if(this->formType == formTypeFactory->HORIZONTAL_FORM || this->formType == formTypeFactory->TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    
                        if(gameKeyCode == Canvas::RIGHT)
                        
                                    {
                                    index++;
    

                                    }
                                
                             else 
                        if(gameKeyCode == Canvas::LEFT)
                        
                                    {
                                    index--;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    
                        if(gameKeyCode == Canvas::DOWN)
                        
                                    {
                                    index++;
    

                                    }
                                
                             else 
                        if(gameKeyCode == Canvas::UP)
                        
                                    {
                                    index--;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception(formTypeFactory->UNK);
                    

                        }
                            

    int32_t max = this->size() -1;;
    

                        if(index < 0)
                        
                                    {
                                    this->setSelectedIndex(0);
    

                                    }
                                
                             else 
                        if(index > max)
                        
                                    {
                                    this->setSelectedIndex(max);
    

                                    }
                                
                        else {
                            this->setSelectedIndex(index);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: bool isInForm(GPoint* point){

                        if(this->rectangleCollisionUtil->isInside(this->x, this->y -this->halfBorder, this->rectangle.getMaxX() +this->border, this->rectangle.getMaxY() +this->border, point->getX(), point->getY()))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(StringUtil::getInstance()->toString(point)).append(ScrollSelectionForm::INSIDE_FORM).toString(), this, ScrollSelectionForm::IS_IN_FORM);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paintItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){
item->paintXY(graphics, x, y);
    

    int32_t width = item->getMinimumWidth();;
    

    int32_t height = item->getMinimumHeight();;
    
graphics->setColor(this->getButtonBasicColor()->intValue());
    

    int32_t adjustedBorder = 3;;
    
graphics->drawRect(x -this->halfBorder -adjustedBorder, y -this->halfBorder -adjustedBorder, width +this->border +this->adjustedExtraBorder, height +this->border +this->adjustedExtraBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionFormFormTypeItemIndexPaintable->paint(graphics, index, item, x, y);;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paintUnselectedItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y){
graphics->setColor(this->getButtonBasicColor()->intValue());
    
item->paintUnselected(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollSelectionFormFormTypeItemIndexPaintable->paint(graphics, index, item, x, y);;
    
}


    protected: int32_t getDiffX(ABCustomItem* item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: void setButtonBasicColor(BasicColor* buttonBasicColor){
this->buttonBasicColor= buttonBasicColor;
    
}


    private: BasicColor* getButtonBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buttonBasicColor;
    
}


};

            

