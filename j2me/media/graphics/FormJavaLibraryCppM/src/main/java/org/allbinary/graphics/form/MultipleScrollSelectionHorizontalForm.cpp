
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
//#include "org/allbinary/graphics/form/MultipleScrollSelectionFormVerticalPaintable.h"
//#include "org/allbinary/graphics/form/MultipleScrollSelectionFormHorizontalPaintable.h"


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::createForm(std::string title, std::vector<ABCustomItem*> items, Rectangle* rectangle, FormType* formType, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) -> ScrollSelectionForm*{

    ScrollSelectionForm* scrollSelectionForm = new MultipleScrollSelectionHorizontalForm(title, items, ItemPaintableFactory::getInstance(), border, backgroundBasicColor, foregroundBasicColor);;
    
scrollSelectionForm->init(rectangle, formType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return scrollSelectionForm;
    
}


MultipleScrollSelectionHorizontalForm::MultipleScrollSelectionFormHorizontalPaintable::MultipleScrollSelectionFormHorizontalPaintable(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm){
this->multipleScrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::MultipleScrollSelectionFormHorizontalPaintable::paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->multipleScrollSelectionForm->paintHorizontal(graphics, index, item, dx, dy);;
    
}


MultipleScrollSelectionHorizontalForm::MultipleScrollSelectionFormVerticalPaintable::MultipleScrollSelectionFormVerticalPaintable(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm){
this->multipleScrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::MultipleScrollSelectionFormVerticalPaintable::paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->multipleScrollSelectionForm->paintVertical(graphics, index, item, dx, dy);;
    
}


MultipleScrollSelectionHorizontalForm::MultipleScrollSelectionHorizontalForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ScrollSelectionForm(title, items, formPaintableFactory, border, 3, backgroundBasicColor, foregroundBasicColor), rectPaintable(NullPaintable::getInstance()), multipleScrollSelectionHorizontalFormTypeItemIndexPaintable(ItemIndexPaintable::getInstance()), backgroundColor(BasicColorFactory::getInstance()->TRANSPARENT_GREY->intValue()), myFontProcessor(new UpdateMyFontProcessor(this)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
//inner=true member= isStatic=
class MPaintable: public Paintable {

    public: void paint(Graphics* graphics){
this->fillRect(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt

this->rectPaintable= new MPaintable();
    

                        }
                            
}


    auto MultipleScrollSelectionHorizontalForm::fillRect(Graphics* graphics) -> void{
graphics->setColor(this->backgroundColor);
    
graphics->fillRect(this->x, this->y, this->rectangle->getWidth(), this->rectangle->getHeight());
    
}


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::init(Rectangle* rectangle, FormType* formType) -> void{
ScrollSelectionForm::init(rectangle, formType);
    

    FormTypeFactory* formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(formType == formTypeFactory->HORIZONTAL_FORM)
                        
                                    {
                                    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable= javaInner(new MultipleScrollSelectionFormHorizontalPaintable(this), this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->VERTICAL_CENTER_FORM)
                        
                                    {
                                    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable= javaInner(new MultipleScrollSelectionFormVerticalPaintable(this), this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory->NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw Exception(formTypeFactory->UNK);
                    

                        }
                            
}


    auto MultipleScrollSelectionHorizontalForm::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::paintHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{

    int32_t dx2 = this->paintItem(graphics, index, item, dx, dy) +this->border;;
    
this->paintable->paint(graphics, index, dx, dy);
    
dx= dx2;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dx;
    
}


                //@Throws(Exception.constructor)
            
    auto MultipleScrollSelectionHorizontalForm::paintVertical(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) -> int32_t{
this->paintItem(graphics, index, item, dx, dy);
    
this->paintable->paint(graphics, index, dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dx;
    
}


    auto MultipleScrollSelectionHorizontalForm::getStartIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSelectedIndex();;
    
}


    auto MultipleScrollSelectionHorizontalForm::paint(Graphics* graphics) -> void{

        try {
            this->myFontProcessor->process(graphics);
    

    int32_t start = this->getStartIndex();;
    

    int32_t size = this->size();;
    

    int32_t dx = this->x;;
    

    int32_t dy = this->y;;
    
this->rectPaintable->paint(graphics);
    
graphics->drawString(this->getTitle(), this->x, this->y -this->fontHeight, 0);
    

    ABCustomItem* item;;
    




                        for (
    int32_t index = start;index < size; index++)
        {
item= this->get(index);
    

                        if(dx >= this->rectangle->getMaxX())
                        
                                    {
                                    
                        if(this->logged)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->logged= true;
    
PreLogUtil::put((new StringMaker())->append("painting beyond maxx: ")->appendint(this->rectangle->getMaxX())->toString(), this, this->canvasStrings->PAINT);
    

                        }
                            

                                    }
                                
dx= this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable->paint(graphics, index, item, dx, dy);
    
}


                //: 
} catch(Exception& e) 
            {
PreLogUtil::put(this->commonStrings->EXCEPTION, this, this->canvasStrings->PAINT);
    
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_CPP
