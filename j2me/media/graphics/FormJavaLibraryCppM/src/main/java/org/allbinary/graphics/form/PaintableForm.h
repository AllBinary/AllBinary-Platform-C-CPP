
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABCustomForm.h"
#include "FormTypeFactory.h"
#include "FormType.h"

class PaintableForm: public ABCustomForm {
        

    private: static NULL_PAINTABLE_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static PaintableForm getNullPaintableForm();

    const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    rectangle: Rectangle = RectangleFactory.SINGLETON;

    x: int32_t= 0;

    y: int32_t= 0;

    formType: FormType = FormTypeFactory.getInstance()!.NULL_FORM_TYPE;

public constructor (string title, std::vector<ABCustomItem> items, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle, FormType formType);

    public int32_t getWidth();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
