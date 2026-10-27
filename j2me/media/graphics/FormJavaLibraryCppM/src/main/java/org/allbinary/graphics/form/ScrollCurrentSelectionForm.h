
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
//#include "org/allbinary/graphics/form/VerticalFormProcessor.h"
//#include "org/allbinary/graphics/form/VerticalItemIndexDx.h"
//#include "org/allbinary/graphics/form/HorizontalFormProcessor.h"
//#include "org/allbinary/graphics/form/HorizontalItemIndexDx.h"
//#include "org/allbinary/graphics/form/TempHorizontalFormProcessor.h"
//#include "org/allbinary/graphics/form/TempHorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/FormType.h"

class ScrollCurrentSelectionForm: public ScrollSelectionForm, public UpdateMyFontInterface {

    private: bool moveForSmallScreen;

//inner= member=true isStatic=
class TempHorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: TempHorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
class HorizontalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: HorizontalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
class VerticalFormProcessor: public Processor {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: VerticalFormProcessor(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            
//inner= member=true isStatic=
class TempHorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: TempHorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class HorizontalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: HorizontalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class VerticalItemIndexDx: public ItemIndexDx {

    private: ScrollCurrentSelectionForm* scrollCurrentSelectionForm;

: VerticalItemIndexDx(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t getDx(int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

};

            
    protected: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    protected: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    private: Processor* processor = Processor::getInstance();

    private: ItemIndexDx* preItemIndexDx = ItemIndexDx::getInstance();

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

    protected: int32_t getDiffX(ABCustomItem* item);

    public: int32_t getDx();

    public: int32_t getDy();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
