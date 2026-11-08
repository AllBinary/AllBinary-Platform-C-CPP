
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class J2MEUtil;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class ABCustomItem;
class NullPaintable;
#include <org/allbinary/graphics/paint/Paintable.h>
class PreLogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
class ItemPaintableFactory;
class FormType;
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
//class MultipleScrollSelectionFormRectPaintable;
class FormTypeFactory;
//class MultipleScrollSelectionFormVerticalPaintable;
//class MultipleScrollSelectionFormHorizontalPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipleScrollSelectionHorizontalForm: public ScrollSelectionForm, public virtual UpdateMyFontInterface {
public: class MultipleScrollSelectionFormHorizontalPaintable;
public: class MultipleScrollSelectionFormVerticalPaintable;
public: class MultipleScrollSelectionFormRectPaintable;

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm* createForm(std::string title, std::vector<ABCustomItem*> items, Rectangle* rectangle, FormType* formType, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

//inner= member=true isStatic=
public: class MultipleScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {

    public: MultipleScrollSelectionHorizontalForm* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;

public: MultipleScrollSelectionFormHorizontalPaintable(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class MultipleScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {

    public: MultipleScrollSelectionHorizontalForm* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;

public: MultipleScrollSelectionFormVerticalPaintable(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class MultipleScrollSelectionFormRectPaintable: public Paintable {

    public: MultipleScrollSelectionHorizontalForm* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;

public: MultipleScrollSelectionFormRectPaintable(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

    public: void paint(Graphics* graphics);

};

            
    private: Paintable* rectPaintable;

    private: ItemIndexPaintable* multipleScrollSelectionHorizontalFormTypeItemIndexPaintable;

    private: const int32_t backgroundColor;

    private: MyFontProcessor* myFontProcessor;

    private: bool logged = false;

    private: int32_t fontHeight = 0;

public: MultipleScrollSelectionHorizontalForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    private: void fillRect(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType);

    public: void updateMeasurement(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    private: int32_t paintHorizontal(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    private: int32_t paintVertical(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    public: int32_t getStartIndex();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
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
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintableFactory.h")
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemIndexPaintable.h")
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif

        #endif
    
