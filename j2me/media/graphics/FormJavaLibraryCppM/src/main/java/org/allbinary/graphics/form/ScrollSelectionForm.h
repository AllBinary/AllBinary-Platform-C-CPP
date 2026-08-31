
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaintableForm.h"
#include "ItemPaintableFactory.h"
#include "ItemIndexPaintable.h"
#include "ItemIndexDx.h"
#include "ItemPaintable.h"
#include "FormTypeFactory.h"
//#include "ScrollSelectionFormTempHorizontalPaintable.h"
//#include "ScrollSelectionFormTempHorizontalDx.h"
//#include "ScrollSelectionFormVerticalPaintable.h"
//#include "ScrollSelectionFormVericalDx.h"
//#include "ScrollSelectionFormHorizontalPaintable.h"
//#include "ScrollSelectionFormHorizontalDx.h"
#include "FormType.h"

class ScrollSelectionForm: public PaintableForm {
        

    static ScrollSelectionForm createForm(string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    private: static NULL_SCROLL_SELECTION_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ScrollSelectionForm getNullScrollSelectionForm();

    private: static NULL_SCROLL_SELECTION_HORIZONTAL_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ScrollSelectionForm getNullScrollSelectionFormHorizontal();

    private: static const INSIDE_FORM: string = " inside form";

    private: static const IS_IN_FORM: string = "isInForm";

    private: static const GET_SELECTED_INDEX: string = "getSelectedIndexForPoint";

//inner= member=true isStatic=
class ScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class ScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalPaintable: public ItemIndexPaintable {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class ScrollSelectionFormHorizontalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class ScrollSelectionFormVericalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class ScrollSelectionFormTempHorizontalDx: public ItemIndexDx {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const scrollSelectionForm: ScrollSelectionForm;

 constructor (ScrollSelectionForm multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    const border: int32_t;

    const halfBorder: int32_t;

    private: buttonBasicColor: BasicColor;

    scrollSelectionFormFormTypeItemIndexPaintable: ItemIndexPaintable = ItemIndexPaintable.getInstance()!;

    private: formTypeItemIndexDx: ItemIndexDx = ItemIndexDx.getInstance()!;

    paintable: ItemPaintable = ItemPaintableFactory.getInstance()!;

    private: const adjustedExtraBorder: int32_t;

public constructor (string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle, FormType formType);

    public int32_t paintItemHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

    public int32_t paintItemVertical(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

    public int32_t paintItemTempHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

    public int32_t getSelectedIndexForPointHorizontalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    public int32_t getSelectedIndexForPointVerticalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    public int32_t getSelectedIndexForPointTempHorizontalDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    public int32_t append(ABCustomItem item);

                //@Throws(Exception.constructor)
            
    public ABCustomItem getSelectedItem(GPoint point);

                //@Throws(Exception.constructor)
            
    public int32_t getItemIndex(ABCustomItem item);

    public int32_t getStartIndex();

                //@Throws(Exception.constructor)
            
    public int32_t getSelectedIndexForPoint(GPoint point);

                //@Throws(Exception.constructor)
            
    public int32_t processInputKey(int32_t gameKeyCode);

    public bool isInForm(GPoint point);

                //@Throws(Exception.constructor)
            
    public int32_t paintItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public int32_t paintUnselectedItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

    int32_t getDiffX(ABCustomItem item);

    public int32_t getDx();

    public int32_t getDy();

    public setButtonBasicColor(BasicColor buttonBasicColor);

    BasicColor getButtonBasicColor();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H
