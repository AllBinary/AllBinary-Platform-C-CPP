
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
#include <org/allbinary/canvas/Processor.h>
class Rectangle;
class BasicColor;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class ABCustomItem;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
class ItemPaintableFactory;
class FormTypeFactory;
//class VerticalFormProcessor;
//class VerticalItemIndexDx;
//class HorizontalFormProcessor;
//class HorizontalItemIndexDx;
//class TempHorizontalFormProcessor;
//class TempHorizontalItemIndexDx;
class FormType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScrollCurrentSelectionForm: public ScrollSelectionForm, public UpdateMyFontInterface {
public: class TempHorizontalFormProcessor;
public: class HorizontalFormProcessor;
public: class VerticalFormProcessor;
public: class TempHorizontalItemIndexDx;
public: class HorizontalItemIndexDx;
public: class VerticalItemIndexDx;

    private: bool moveForSmallScreen;

//inner= member=true isStatic=
public: class TempHorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: TempHorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
public: class HorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: HorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
public: class VerticalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: VerticalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
public: class TempHorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: TempHorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class HorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: HorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
public: class VerticalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

public: VerticalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
    /*protected*/ public: MyFontProcessor* updateMyFontProcessor;

    /*protected*/ public: MyFontProcessor* myFontProcessor;

    private: Processor* processor;

    private: ItemIndexDx* preItemIndexDx;

    private: int32_t dx= 0;

    private: int32_t dy= 0;

    private: int32_t maxWidth = 0;

public: ScrollCurrentSelectionForm(std::string title, std::vector<ABCustomItem*> items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle, FormType* formType);

    public: void updateMeasurement(Graphics* graphics);

    private: void processTempHorizontalForm();

    private: void processHorizontalForm();

    private: void processVerticalForm();

    private: int32_t getXTempHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    private: int32_t getXHorizontalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    private: int32_t getXVerticalForm(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

    /*protected*/ public: int32_t getDiffX(ABCustomItem* item);

    public: int32_t getDx();

    public: int32_t getDy();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
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
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemIndexDx.h")
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintableFactory.h")
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormTypeFactory.h")
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif

        #endif
    
