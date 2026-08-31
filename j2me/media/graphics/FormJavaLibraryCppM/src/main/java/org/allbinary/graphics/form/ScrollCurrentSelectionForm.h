
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollSelectionForm.h"
#include "ItemIndexDx.h"
#include "ItemPaintableFactory.h"
#include "FormTypeFactory.h"
//#include "VerticalFormProcessor.h"
//#include "VerticalItemIndexDx.h"
//#include "HorizontalFormProcessor.h"
//#include "HorizontalItemIndexDx.h"
//#include "TempHorizontalFormProcessor.h"
//#include "TempHorizontalItemIndexDx.h"
#include "FormType.h"

class ScrollCurrentSelectionForm: public ScrollSelectionForm: public UpdateMyFontInterface {
        

    private: const moveForSmallScreen: bool;

//inner= member=true isStatic=
class TempHorizontalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public process();

};

            
//inner= member=true isStatic=
class HorizontalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public process();

};

            
//inner= member=true isStatic=
class VerticalFormProcessor: public Processor {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public process();

};

            
//inner= member=true isStatic=
class TempHorizontalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class HorizontalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class VerticalItemIndexDx: public ItemIndexDx {
        

    private: const scrollCurrentSelectionForm: ScrollCurrentSelectionForm;

 constructor (ScrollCurrentSelectionForm scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public int32_t getDx(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: processor: Processor = Processor.getInstance()!;

    private: preItemIndexDx: ItemIndexDx = ItemIndexDx.getInstance()!;

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

    private: maxWidth: int32_t = 0;

public constructor (string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle, FormType formType);

    public updateMeasurement(Graphics graphics);

    processTempHorizontalForm();

    processHorizontalForm();

    processVerticalForm();

    int32_t getXTempHorizontalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    int32_t getXHorizontalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    int32_t getXVerticalForm(int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    int32_t getDiffX(ABCustomItem item);

    public int32_t getDx();

    public int32_t getDy();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
