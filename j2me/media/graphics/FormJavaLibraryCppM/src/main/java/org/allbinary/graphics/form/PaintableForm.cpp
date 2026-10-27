
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ABCustomForm.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/FormType.h"

class PaintableForm: public ABCustomForm {

    private: static inline Object* NULL_PAINTABLE_FORM = NullUtil::getInstance()->NULL_OBJECT;

    public: static PaintableForm* getNullPaintableForm(){

                        if(PaintableForm::NULL_PAINTABLE_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PaintableForm::NULL_PAINTABLE_FORM= new PaintableForm(StringUtil::getInstance()->EMPTY_STRING, {}, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PaintableForm*>(PaintableForm::NULL_PAINTABLE_FORM);
    
}


    protected: CanvasStrings* canvasStrings = CanvasStrings::getInstance();

    protected: Rectangle* rectangle = RectangleFactory::SINGLETON;

    protected: int32_t x= 0;

    protected: int32_t y= 0;

    protected: FormType* formType = FormTypeFactory::getInstance()->NULL_FORM_TYPE;

public: PaintableForm(std::string title, std::vector<ABCustomItem*> items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomForm(title, items, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setSelectedIndex(0);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType){
this->rectangle= rectangle;
    

    GPoint* point = this->rectangle->getPoint();;
    
this->x= point->getX();
    
this->y= point->getY();
    
this->formType= formType;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle->getWidth();;
    
}


};

            

