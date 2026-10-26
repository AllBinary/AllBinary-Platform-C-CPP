
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Screen.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABCustomItem
            : public Object
         {

    public: static Object* NULL_CUSTOM_ITEM = NullUtil::getInstance().NULL_OBJECT;

    public: static ABCustomItem getNullInstance();

protected: ABCustomItem(std::string label, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: void setOwner(Screen owner);

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintUnselected(Graphics graphics, int32_t x, int32_t y);

    public: bool isFocusable();

    public: std::string getLabel();

    public: void setLabel(std::string label);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

    public: float getValue();

    public: void setValue(float value);

    public: int32_t getMinimumWidth();

    public: int32_t getMinimumHeight();

    public: void preMeasurement(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
