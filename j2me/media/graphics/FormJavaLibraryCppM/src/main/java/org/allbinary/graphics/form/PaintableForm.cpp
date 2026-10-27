
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/PaintableForm.h"
        

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

Object* PaintableForm::NULL_PAINTABLE_FORM = NullUtil::getInstance()->NULL_OBJECT;

    auto PaintableForm::getNullPaintableForm() -> PaintableForm*{

                        if(PaintableForm::NULL_PAINTABLE_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PaintableForm::NULL_PAINTABLE_FORM= new PaintableForm(StringUtil::getInstance()->EMPTY_STRING, {}, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PaintableForm*>(PaintableForm::NULL_PAINTABLE_FORM);
    
}


PaintableForm::PaintableForm(std::string title, std::vector<ABCustomItem*> items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomForm(title, items, backgroundBasicColor, foregroundBasicColor), canvasStrings(CanvasStrings::getInstance()), rectangle(RectangleFactory::SINGLETON), formType(FormTypeFactory::getInstance()->NULL_FORM_TYPE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setSelectedIndex(0);
    
}


                //@Throws(Exception.constructor)
            
    auto PaintableForm::init(Rectangle* rectangle, FormType* formType) -> void{
this->rectangle= rectangle;
    

    GPoint* point = this->rectangle->getPoint();;
    
this->x= point->getX();
    
this->y= point->getY();
    
this->formType= formType;
    
}


    auto PaintableForm::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle->getWidth();;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_CPP
