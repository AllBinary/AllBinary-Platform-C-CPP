
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
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
        #include "ScrollSelectionForm.h"
#include "ItemPaintableFactory.h"
#include "FormType.h"
#include "ItemIndexPaintable.h"
#include "FormTypeFactory.h"
//#include "MultipleScrollSelectionFormVerticalPaintable.h"
//#include "MultipleScrollSelectionFormHorizontalPaintable.h"

class MultipleScrollSelectionHorizontalForm: public ScrollSelectionForm, public UpdateMyFontInterface {

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm createForm(std::string title, std::vector<ABCustomItem> items, Rectangle rectangle, FormType formType, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

    ScrollSelectionForm scrollSelectionForm = MultipleScrollSelectionHorizontalForm(title, items, ItemPaintableFactory::getInstance(), border, backgroundBasicColor, foregroundBasicColor);;
    
scrollSelectionForm.init(rectangle, formType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm;
    
}


//inner= member=true isStatic=
class MultipleScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm;

: MultipleScrollSelectionFormHorizontalPaintable(MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm){
this->multipleScrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multipleScrollSelectionForm.paintHorizontal(graphics, index, item, dx, dy);;
    
}


};

            
//inner= member=true isStatic=
class MultipleScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm;

: MultipleScrollSelectionFormVerticalPaintable(MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm){
this->multipleScrollSelectionForm= multipleScrollSelectionForm;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multipleScrollSelectionForm.paintVertical(graphics, index, item, dx, dy);;
    
}


};

            
    private: Paintable rectPaintable = NullPaintable::getInstance();

    private: ItemIndexPaintable multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = ItemIndexPaintable::getInstance();

    private: const int32_t backgroundColor = BasicColorFactory::getInstance().TRANSPARENT_GREY.intValue();

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: bool logged = false;

    private: int32_t fontHeight = 0;

public: MultipleScrollSelectionHorizontalForm(std::string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor) : ScrollSelectionForm(title, items, formPaintableFactory, border, 3, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
//inner=true member= isStatic=
class MPaintable: public Paintable {

    public: void paint(Graphics graphics){
this->fillRect(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt

this->rectPaintable= MPaintable();
    

                        }
                            
}


    private: void fillRect(Graphics graphics){
graphics.setColor(this->backgroundColor);
    
graphics.fillRect(this->x, this->y, this->rectangle.getWidth(), this->rectangle.getHeight());
    
}


                //@Throws(Exception.constructor)
            
    public: void init(Rectangle rectangle, FormType formType){
super.init(rectangle, formType);
    

    FormTypeFactory formTypeFactory = FormTypeFactory::getInstance();;
    

                        if(formType == formTypeFactory.HORIZONTAL_FORM)
                        
                                    {
                                    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable= MultipleScrollSelectionFormHorizontalPaintable(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory.VERTICAL_CENTER_FORM)
                        
                                    {
                                    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable= MultipleScrollSelectionFormVerticalPaintable(this);
    

                                    }
                                
                             else 
                        if(formType == formTypeFactory.NULL_FORM_TYPE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw Exception(formTypeFactory.UNK);
                    

                        }
                            
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeight= font.getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


                //@Throws(Exception.constructor)
            
    private: int32_t paintHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){

    int32_t dx2 = this->paintItem(graphics, index, item, dx, dy) +this->border;;
    
this->paintable.paint(graphics, index, dx, dy);
    
dx= dx2;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx;
    
}


                //@Throws(Exception.constructor)
            
    private: int32_t paintVertical(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy){
this->paintItem(graphics, index, item, dx, dy);
    
this->paintable.paint(graphics, index, dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dx;
    
}


    public: int32_t getStartIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSelectedIndex();;
    
}


    public: void paint(Graphics graphics){

        try {
            this->myFontProcessor.process(graphics);
    

    int32_t start = this->getStartIndex();;
    

    int32_t size = this->size();;
    

    int32_t dx = this->x;;
    

    int32_t dy = this->y;;
    
this->rectPaintable.paint(graphics);
    
graphics.drawString(this->getTitle(), this->x, this->y -this->fontHeight, 0);
    

    ABCustomItem item;;
    




                        for (
    int32_t index = start;index < size; index++)
        {
item= this->get(index);
    

                        if(dx >= this->rectangle.getMaxX())
                        
                                    {
                                    
                        if(this->logged)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->logged= true;
    
PreLogUtil::put(StringMaker().append("painting beyond maxx: ").appendint(this->rectangle.getMaxX()).toString(), this, this->canvasStrings.PAINT);
    

                        }
                            

                                    }
                                
dx= this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable.paint(graphics, index, item, dx, dy);
    
}


                //: 
} catch(e) 
            {
PreLogUtil::put(this->commonStrings.EXCEPTION, this, this->canvasStrings.PAINT);
    
}

}


};

            

