
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
        

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


    auto ScrollSelectionForm::createForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) -> PaintableForm*{

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

Object* ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM = NullUtil::getInstance()->NULL_OBJECT;

    auto ScrollSelectionForm::getNullScrollSelectionForm() -> ScrollSelectionForm*{

                        if(ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM= ScrollSelectionForm::createForm(StringUtil::getInstance()->EMPTY_STRING, {}, ItemPaintableFactory::getInstance(), 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ScrollSelectionForm*>(ScrollSelectionForm::NULL_SCROLL_SELECTION_FORM);
    
}

Object* ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM = NullUtil::getInstance()->NULL_OBJECT;

    auto ScrollSelectionForm::getNullScrollSelectionFormHorizontal() -> ScrollSelectionForm*{

                        if(ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM= ScrollSelectionForm::createForm(StringUtil::getInstance()->EMPTY_STRING, {}, ItemPaintableFactory::getInstance(), 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ScrollSelectionForm*>(ScrollSelectionForm::NULL_SCROLL_SELECTION_HORIZONTAL_FORM);
    
}


ScrollSelectionForm::ScrollSelectionFormHorizontalPaintable::ScrollSelectionFormHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormHorizontalPaintable::paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->paintItemHorizontal(graphics, index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionFormVerticalPaintable::ScrollSelectionFormVerticalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormVerticalPaintable::paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->paintItemVertical(graphics, index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionFormTempHorizontalPaintable::ScrollSelectionFormTempHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm){
this->scrollSelectionForm= scrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormTempHorizontalPaintable::paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->paintItemTempHorizontal(graphics, index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionFormHorizontalDx::ScrollSelectionFormHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormHorizontalDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->getSelectedIndexForPointHorizontalDx(index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionFormVericalDx::ScrollSelectionFormVericalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormVericalDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->getSelectedIndexForPointVerticalDx(index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionFormTempHorizontalDx::ScrollSelectionFormTempHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm){
this->scrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::ScrollSelectionFormTempHorizontalDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm->getSelectedIndexForPointTempHorizontalDx(index, item, dx, dy);;
    
}


ScrollSelectionForm::ScrollSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : PaintableForm(title, items, backgroundBasicColor, foregroundBasicColor), rectangleCollisionUtil(RectangleCollisionUtil::getInstance()), scrollSelectionFormFormTypeItemIndexPaintable(ItemIndexPaintable::getInstance()), formTypeItemIndexDx(ItemIndexDx::getInstance()), paintable(ItemPaintableFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->adjustedExtraBorder= adjustedExtraBorder;
    
this->buttonBasicColor= foregroundBasicColor;
    
this->border= border;
    
this->halfBorder= (border>>1);
    
this->paintable= formPaintableFactory->getInstanceItemPaintable(this);
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::init(Rectangle* rectangle, FormType* formType) -> void{
PaintableForm::init(rectangle, formType);
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= javaInner(new ScrollSelectionFormHorizontalPaintable(this), this);
    
this->formTypeItemIndexDx= javaInner(new ScrollSelectionFormHorizontalDx(this), this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= javaInner(new ScrollSelectionFormVerticalPaintable(this), this);
    
this->formTypeItemIndexDx= javaInner(new ScrollSelectionFormVericalDx(this), this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    this->scrollSelectionFormFormTypeItemIndexPaintable= javaInner(new ScrollSelectionFormTempHorizontalPaintable(this), this);
    
this->formTypeItemIndexDx= javaInner(new ScrollSelectionFormTempHorizontalDx(this), this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw Exception(formTypeFactory->UNK);
                    

                        }
                            
}


    auto ScrollSelectionForm::paintItemHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) -> int32_t{

    int32_t width = item->getMinimumWidth();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return x +width +this->border;
    
}


    auto ScrollSelectionForm::paintItemVertical(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) -> int32_t{

    int32_t height = item->getMinimumHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return y +height +this->border;
    
}


    auto ScrollSelectionForm::paintItemTempHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto ScrollSelectionForm::getSelectedIndexForPointHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dx -this->halfBorder;
    
}


    auto ScrollSelectionForm::getSelectedIndexForPointVerticalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dx +this->getDiffX(item);
    
}


    auto ScrollSelectionForm::getSelectedIndexForPointTempHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dx +this->getDiffX(item);
    
}


    auto ScrollSelectionForm::append(ABCustomItem* item) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PaintableForm::append(item);;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::getSelectedItem(GPoint* point) -> ABCustomItem*{

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
            
    auto ScrollSelectionForm::getItemIndex(ABCustomItem* item) -> int32_t{

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


    auto ScrollSelectionForm::getStartIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::getSelectedIndexForPoint(GPoint* point) -> int32_t{

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
                                    stringBuffer->delete_(0, stringBuffer->length());
    
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
    

                        if(dx > this->rectangle->getMaxX())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    dy= dy +height +this->border;
    

                        if(dy > this->rectangle->getMaxY())
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw Exception(formTypeFactory->UNK);
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::processInputKey(int32_t gameKeyCode) -> int32_t{

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
                            


                            throw Exception(formTypeFactory->UNK);
                    

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


    auto ScrollSelectionForm::isInForm(GPoint* point) -> bool{

                        if(this->rectangleCollisionUtil->isInside(this->x, this->y -this->halfBorder, this->rectangle->getMaxX() +this->border, this->rectangle->getMaxY() +this->border, point->getX(), point->getY()))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(StringUtil::getInstance()->toString(point)).append(ScrollSelectionForm::INSIDE_FORM).toString(), this, ScrollSelectionForm::IS_IN_FORM);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::paintItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) -> int32_t{
item->paintXY(graphics, x, y);
    

    int32_t width = item->getMinimumWidth();;
    

    int32_t height = item->getMinimumHeight();;
    
graphics->setColor(JavaBoxes::value<int32_t>(this->getButtonBasicColor()));
    

    int32_t adjustedBorder = 3;;
    
graphics->drawRect(x -this->halfBorder -adjustedBorder, y -this->halfBorder -adjustedBorder, width +this->border +this->adjustedExtraBorder, height +this->border +this->adjustedExtraBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionFormFormTypeItemIndexPaintable->paint(graphics, index, item, x, y);;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollSelectionForm::paintUnselectedItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) -> int32_t{
graphics->setColor(JavaBoxes::value<int32_t>(this->getButtonBasicColor()));
    
item->paintUnselected(graphics, x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionFormFormTypeItemIndexPaintable->paint(graphics, index, item, x, y);;
    
}


    auto ScrollSelectionForm::getDiffX(ABCustomItem* item) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto ScrollSelectionForm::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto ScrollSelectionForm::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto ScrollSelectionForm::setButtonBasicColor(BasicColor* buttonBasicColor) -> void{
this->buttonBasicColor= buttonBasicColor;
    
}


    auto ScrollSelectionForm::getButtonBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->buttonBasicColor;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_CPP
