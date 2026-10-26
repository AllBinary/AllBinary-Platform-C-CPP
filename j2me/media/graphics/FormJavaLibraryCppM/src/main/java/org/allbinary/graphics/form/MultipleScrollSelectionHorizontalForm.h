
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollSelectionForm.h"
#include "ItemPaintableFactory.h"
#include "FormType.h"
#include "ItemIndexPaintable.h"
#include "FormTypeFactory.h"
//#include "MultipleScrollSelectionFormVerticalPaintable.h"
//#include "MultipleScrollSelectionFormHorizontalPaintable.h"

class MultipleScrollSelectionHorizontalForm: public ScrollSelectionForm, public UpdateMyFontInterface {

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm createForm(std::string title, std::vector<ABCustomItem> items, Rectangle rectangle, FormType formType, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

//inner= member=true isStatic=
class MultipleScrollSelectionFormHorizontalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm;

: MultipleScrollSelectionFormHorizontalPaintable(MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
//inner= member=true isStatic=
class MultipleScrollSelectionFormVerticalPaintable: public ItemIndexPaintable {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm;

: MultipleScrollSelectionFormVerticalPaintable(MultipleScrollSelectionHorizontalForm multipleScrollSelectionForm);

                //@Throws(Exception.constructor)
            
    public: int32_t paint(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

};

            
    private: Paintable rectPaintable = NullPaintable::getInstance();

    private: ItemIndexPaintable multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = ItemIndexPaintable::getInstance();

    private: const int32_t backgroundColor = BasicColorFactory::getInstance().TRANSPARENT_GREY.intValue();

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: bool logged = false;

    private: int32_t fontHeight = 0;

public: MultipleScrollSelectionHorizontalForm(std::string title, std::vector<ABCustomItem> items, ItemPaintableFactory formPaintableFactory, int32_t border, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    private: void fillRect(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle rectangle, FormType formType);

    public: void updateMeasurement(Graphics graphics);

                //@Throws(Exception.constructor)
            
    private: int32_t paintHorizontal(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    private: int32_t paintVertical(Graphics graphics, int32_t index, ABCustomItem item, int32_t dx, int32_t dy);

    public: int32_t getStartIndex();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONHORIZONTALFORM_H
