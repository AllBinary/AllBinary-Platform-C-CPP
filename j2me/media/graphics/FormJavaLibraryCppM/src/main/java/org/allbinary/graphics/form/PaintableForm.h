
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H

            #include <vector>
        
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
        #include "ABCustomForm.h"
#include "FormTypeFactory.h"
#include "FormType.h"

class PaintableForm: public ABCustomForm {

    private: static Object* NULL_PAINTABLE_FORM = NullUtil::getInstance().NULL_OBJECT;

    public: static PaintableForm getNullPaintableForm();

    protected: const CanvasStrings canvasStrings = CanvasStrings::getInstance();

    protected: Rectangle rectangle = RectangleFactory::SINGLETON;

    protected: int32_t x= 0;

    protected: int32_t y= 0;

    protected: FormType formType = FormTypeFactory::getInstance().NULL_FORM_TYPE;

public: PaintableForm(std::string title, std::vector<ABCustomItem> items, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle rectangle, FormType formType);

    public: int32_t getWidth();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
