
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
//#include "org/allbinary/graphics/form/VerticalFormProcessor.h"
//#include "org/allbinary/graphics/form/VerticalItemIndexDx.h"
//#include "org/allbinary/graphics/form/HorizontalFormProcessor.h"
//#include "org/allbinary/graphics/form/HorizontalItemIndexDx.h"
//#include "org/allbinary/graphics/form/TempHorizontalFormProcessor.h"
//#include "org/allbinary/graphics/form/TempHorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/FormType.h"


ScrollCurrentSelectionForm::TempHorizontalFormProcessor::TempHorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::TempHorizontalFormProcessor::process() -> void{
this->scrollCurrentSelectionForm->processTempHorizontalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


ScrollCurrentSelectionForm::HorizontalFormProcessor::HorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::HorizontalFormProcessor::process() -> void{
this->scrollCurrentSelectionForm->processHorizontalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


ScrollCurrentSelectionForm::VerticalFormProcessor::VerticalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::VerticalFormProcessor::process() -> void{
this->scrollCurrentSelectionForm->processVerticalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


ScrollCurrentSelectionForm::TempHorizontalItemIndexDx::TempHorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::TempHorizontalItemIndexDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXTempHorizontalForm(index, item, dx, dy);;
    
}


ScrollCurrentSelectionForm::HorizontalItemIndexDx::HorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::HorizontalItemIndexDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXHorizontalForm(index, item, dx, dy);;
    
}


ScrollCurrentSelectionForm::VerticalItemIndexDx::VerticalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::VerticalItemIndexDx::getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXVerticalForm(index, item, dx, dy);;
    
}


ScrollCurrentSelectionForm::ScrollCurrentSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ScrollSelectionForm(title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), processor(Processor::getInstance()), preItemIndexDx(ItemIndexDx::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->moveForSmallScreen= moveForSmallScreen;
    
}


                //@Throws(Exception.constructor)
            
    auto ScrollCurrentSelectionForm::init(Rectangle* rectangle, FormType* formType) -> void{
ScrollSelectionForm::init(rectangle, formType);
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(formType == formTypeFactory->TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    this->processor= new TempHorizontalFormProcessor(this);
    
this->preItemIndexDx= new TempHorizontalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    this->processor= new HorizontalFormProcessor(this);
    
this->preItemIndexDx= new HorizontalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    this->processor= new VerticalFormProcessor(this);
    
this->preItemIndexDx= new VerticalItemIndexDx(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->logUtil->putF(formTypeFactory->UNK, this, this->commonStrings->INIT);
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto ScrollCurrentSelectionForm::updateMeasurement(Graphics* graphics) -> void{
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto ScrollCurrentSelectionForm::processTempHorizontalForm() -> void{
this->dx= this->x -30 +(this->rectangle->getWidth()>>1);
    
this->dy= this->y;
    
}


    auto ScrollCurrentSelectionForm::processHorizontalForm() -> void{

    int32_t size = this->size();;
    

    int32_t totalWidth = 0;;
    

    ABCustomItem* item;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item= this->get(index);
    
totalWidth += item->getMinimumWidth() +this->border;
    
}

this->dx= this->x +(this->rectangle->getWidth()>>1) -(totalWidth>>1);
    
this->dy= this->y +(this->rectangle->getHeight()>>1);
    

                        if(this->moveForSmallScreen)
                        
                                    {
                                    
    int32_t maxTitleHeight = 175;;
    

                        if(this->dy < maxTitleHeight)
                        
                                    {
                                    this->dy= maxTitleHeight;
    

                                    }
                                

                                    }
                                
}


    auto ScrollCurrentSelectionForm::processVerticalForm() -> void{

    int32_t totalHeight = 0;;
    

    int32_t size = this->size();;
    

    ABCustomItem* item2;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item2= this->get(index);
    

                        if(this->maxWidth < item2->getMinimumWidth())
                        
                                    {
                                    this->maxWidth= item2->getMinimumWidth();
    

                                    }
                                
totalHeight += item2->getMinimumHeight() +this->border;
    
}

this->dx= ((this->rectangle->getWidth() -this->maxWidth) /2);
    

                        if(this->size() > 0)
                        
                                    {
                                    this->dy= this->y +((this->rectangle->getHeight() -totalHeight) /2);
    

                        if(this->moveForSmallScreen)
                        
                                    {
                                    
    int32_t maxTitleHeight = 175;;
    

                        if(this->dy < maxTitleHeight)
                        
                                    {
                                    this->dy= maxTitleHeight;
    

                                    }
                                

                                    }
                                

                                    }
                                
                        else {
                            this->dy= this->y;
    

                        }
                            
}


    auto ScrollCurrentSelectionForm::getXTempHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDiffX(item);;
    
}


    auto ScrollCurrentSelectionForm::getXHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ScrollCurrentSelectionForm::getXVerticalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDiffX(item) +this->halfBorder;
    
}


    auto ScrollCurrentSelectionForm::getDiffX(ABCustomItem* item) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((this->maxWidth -item->getMinimumWidth())>>1);
    
}


    auto ScrollCurrentSelectionForm::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    auto ScrollCurrentSelectionForm::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


    auto ScrollCurrentSelectionForm::paint(Graphics* graphics) -> void{

        try {
            this->processor->process();
    

    int32_t delta = 0;;
    

    int32_t deltaX = this->getDx();;
    

    int32_t deltaY = this->getDy();;
    

    int32_t size = this->size();;
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

    ABCustomItem* item;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item= this->get(index);
    

    int32_t diffX = this->preItemIndexDx->getDx(index, item, this->dx, this->dy);;
    

                        if(index == this->getSelectedIndex())
                        
                                    {
                                    delta= this->paintItem(graphics, index, item, deltaX +diffX, deltaY);
    
this->paintable->paint(graphics, index, deltaX +diffX, deltaY);
    

                                    }
                                
                        else {
                            delta= this->paintUnselectedItem(graphics, index, item, deltaX +diffX, deltaY);
    
this->paintable->paint(graphics, index, deltaX +diffX, deltaY);
    

                        }
                            

                        if(this->formType == formTypeFactory->TEMP_HORIZONTAL_FORM)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    deltaX= delta;
    

                                    }
                                
                             else 
                        if(this->formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    deltaY= delta;
    

                                    }
                                
                        else {
                            


                            throw Exception(formTypeFactory->UNK);
                    

                        }
                            
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->canvasStrings->PAINT, &e);
    
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_CPP
