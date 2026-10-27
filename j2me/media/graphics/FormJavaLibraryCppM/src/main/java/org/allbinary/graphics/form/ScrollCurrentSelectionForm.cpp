
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

class ScrollCurrentSelectionForm: public ScrollSelectionForm, public UpdateMyFontInterface {

    private: bool moveForSmallScreen;

//inner= member=true isStatic=
class TempHorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: TempHorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->scrollCurrentSelectionForm->processTempHorizontalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


};

            
//inner= member=true isStatic=
class HorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: HorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->scrollCurrentSelectionForm->processHorizontalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


};

            
//inner= member=true isStatic=
class VerticalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: VerticalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->scrollCurrentSelectionForm->processVerticalForm();
    
this->scrollCurrentSelectionForm->processor= Processor::getInstance();
    
}


};

            
//inner= member=true isStatic=
class TempHorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: TempHorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXTempHorizontalForm(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class HorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: HorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXHorizontalForm(index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class VerticalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: VerticalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm){
this->scrollCurrentSelectionForm= scrollCurrentSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollCurrentSelectionForm->getXVerticalForm(index, item, dx, dy);;
    
}


};

            
    protected: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    protected: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    private: Processor* processor = Processor::getInstance();

    private: ItemIndexDx* preItemIndexDx = ItemIndexDx::getInstance();

    private: int32_t dx= 0;

    private: int32_t dy= 0;

    private: int32_t maxWidth = 0;

public: ScrollCurrentSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ScrollSelectionForm(title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->moveForSmallScreen= moveForSmallScreen;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType){
super.init(rectangle, formType);
    

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
                            this->logUtil.putF(formTypeFactory->UNK, this, this->commonStrings.INIT);
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: void updateMeasurement(Graphics* graphics){
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    private: void processTempHorizontalForm(){
this->dx= this->x -30 +(this->rectangle.getWidth()>>1);
    
this->dy= this->y;
    
}


    private: void processHorizontalForm(){

    int32_t size = this->size();;
    

    int32_t totalWidth = 0;;
    

    ABCustomItem* item;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item= this->get(index);
    
totalWidth += item->getMinimumWidth() +this->border;
    
}

this->dx= this->x +(this->rectangle.getWidth()>>1) -(totalWidth>>1);
    
this->dy= this->y +(this->rectangle.getHeight()>>1);
    

                        if(this->moveForSmallScreen)
                        
                                    {
                                    
    int32_t maxTitleHeight = 175;;
    

                        if(this->dy < maxTitleHeight)
                        
                                    {
                                    this->dy= maxTitleHeight;
    

                                    }
                                

                                    }
                                
}


    private: void processVerticalForm(){

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

this->dx= ((this->rectangle.getWidth() -this->maxWidth) /2);
    

                        if(this->size() > 0)
                        
                                    {
                                    this->dy= this->y +((this->rectangle.getHeight() -totalHeight) /2);
    

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


    private: int32_t getXTempHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDiffX(item);;
    
}


    private: int32_t getXHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    private: int32_t getXVerticalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDiffX(item) +this->halfBorder;
    
}


    protected: int32_t getDiffX(ABCustomItem* item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((this->maxWidth -item->getMinimumWidth())>>1);
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


    public: void paint(Graphics* graphics){

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
    
this->paintable.paint(graphics, index, deltaX +diffX, deltaY);
    

                                    }
                                
                        else {
                            delta= this->paintUnselectedItem(graphics, index, item, deltaX +diffX, deltaY);
    
this->paintable.paint(graphics, index, deltaX +diffX, deltaY);
    

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
                            


                            throw new Exception(formTypeFactory->UNK);
                    

                        }
                            
}


                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.PAINT, &e);
    
}

}


};

            

