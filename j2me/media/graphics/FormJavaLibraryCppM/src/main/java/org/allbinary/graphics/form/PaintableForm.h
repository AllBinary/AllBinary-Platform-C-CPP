
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GPoint;
class Rectangle;
class RectangleFactory;
class BasicColor;
class BasicColorFactory;
class CanvasStrings;
class ABCustomItem;
class NullUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ABCustomForm.h"
class FormTypeFactory;
class FormType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaintableForm: public ABCustomForm {

    private: static Object* NULL_PAINTABLE_FORM;

    public: static PaintableForm* getNullPaintableForm();

    /*protected*/ public: CanvasStrings* canvasStrings;

    /*protected*/ public: Rectangle* rectangle;

    /*protected*/ public: int32_t x= 0;

    /*protected*/ public: int32_t y= 0;

    /*protected*/ public: FormType* formType;

public: PaintableForm(std::string title, std::vector<ABCustomItem*> items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType);

    public: int32_t getWidth();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/graphics/form/ABCustomForm.h")
#include "org/allbinary/graphics/form/ABCustomForm.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif

        #endif
    
