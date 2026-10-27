
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class Graphics;
class GPoint;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class ABCustomItem;
class NullUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class RectangleCollisionUtil;
class CommonLabels;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/PaintableForm.h"
class ItemPaintableFactory;
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
class ItemPaintable;
class FormTypeFactory;
//class ScrollSelectionFormTempHorizontalPaintable;
//class ScrollSelectionFormTempHorizontalDx;
//class ScrollSelectionFormVerticalPaintable;
//class ScrollSelectionFormVericalDx;
//class ScrollSelectionFormHorizontalPaintable;
//class ScrollSelectionFormHorizontalDx;
class FormType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScrollSelectionForm: public PaintableForm {
public: class ScrollSelectionFormHorizontalPaintable;
public: class ScrollSelectionFormVerticalPaintable;
public: class ScrollSelectionFormTempHorizontalPaintable;
public: class ScrollSelectionFormHorizontalDx;
public: class ScrollSelectionFormVericalDx;
public: class ScrollSelectionFormTempHorizontalDx;

    private: static PaintableForm* createForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    private: static Object* NULL_SCROLL_SELECTION_FORM;

    public: static ScrollSelectionForm* getNullScrollSelectionForm();

    private: static Object* NULL_SCROLL_SELECTION_HORIZONTAL_FORM;

    public: static ScrollSelectionForm* getNullScrollSelectionFormHorizontal();

    private: static inline const std::string INSIDE_FORM = " inside form";

    private: static inline const std::string IS_IN_FORM = "isInForm";

    private: static inline const std::string GET_SELECTED_INDEX = "getSelectedIndexForPoint";

//inner= member=true isStatic=
public: class ScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class ScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormVerticalPaintable(ScrollSelectionForm* scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class ScrollSelectionFormTempHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormTempHorizontalPaintable(ScrollSelectionForm* scrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class ScrollSelectionFormHorizontalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class ScrollSelectionFormVericalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormVericalDx(ScrollSelectionForm* multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class ScrollSelectionFormTempHorizontalDx: public ItemIndexDx {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: ScrollSelectionForm* scrollSelectionForm;

public: ScrollSelectionFormTempHorizontalDx(ScrollSelectionForm* multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
    private: RectangleCollisionUtil* rectangleCollisionUtil;

    /*protected*/ public: int32_t border;

    /*protected*/ public: int32_t halfBorder;

    private: BasicColor* buttonBasicColor;

    /*protected*/ public: ItemIndexPaintable* scrollSelectionFormFormTypeItemIndexPaintable;

    private: ItemIndexDx* formTypeItemIndexDx;

    /*protected*/ public: ItemPaintable* paintable;

    private: int32_t adjustedExtraBorder;

public: ScrollSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType);

    public: int32_t paintItemHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

    public: int32_t paintItemVertical(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

    public: int32_t paintItemTempHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

    public: int32_t getSelectedIndexForPointHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    public: int32_t getSelectedIndexForPointVerticalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    public: int32_t getSelectedIndexForPointTempHorizontalDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    public: int32_t append(ABCustomItem* item);

                //@Throws(Exception.constructor)
            
    public: ABCustomItem* getSelectedItem(GPoint* point);

                //@Throws(Exception.constructor)
            
    public: int32_t getItemIndex(ABCustomItem* item);

    public: int32_t getStartIndex();

                //@Throws(Exception.constructor)
            
    public: int32_t getSelectedIndexForPoint(GPoint* point);

                //@Throws(Exception.constructor)
            
    public: int32_t processInputKey(int32_t gameKeyCode);

    public: bool isInForm(GPoint* point);

                //@Throws(Exception.constructor)
            
    public: int32_t paintItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: int32_t paintUnselectedItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

    /*protected*/ public: int32_t getDiffX(ABCustomItem* item);

    public: int32_t getDx();

    public: int32_t getDy();

    public: void setButtonBasicColor(BasicColor* buttonBasicColor);

    private: BasicColor* getButtonBasicColor();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/RectangleCollisionUtil.h>)
#include <org/allbinary/math/RectangleCollisionUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/form/PaintableForm.h")
#include "org/allbinary/graphics/form/PaintableForm.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintableFactory.h")
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemIndexPaintable.h")
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemIndexDx.h")
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintable.h")
#include "org/allbinary/graphics/form/ItemPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif

        #endif
    
