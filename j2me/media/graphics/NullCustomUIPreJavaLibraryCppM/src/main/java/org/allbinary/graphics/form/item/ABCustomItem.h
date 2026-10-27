
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Graphics;
class Screen;
class BasicColor;
class BasicColorFactory;
class NullUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABCustomItem
            : public virtual Object
         {

    public: static Object* NULL_CUSTOM_ITEM;

    public: static ABCustomItem* getNullInstance();

/*protected*/ public: ABCustomItem(std::string label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void setOwner(Screen* owner);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintUnselected(Graphics* graphics, int32_t x, int32_t y);

    public: bool isFocusable();

    public: std::string getLabel();

    public: void setLabel(std::string label);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

    public: float getValue();

    public: void setValue(float value);

    public: int32_t getMinimumWidth();

    public: int32_t getMinimumHeight();

    public: void preMeasurement(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Screen.h>)
#include <javax/microedition/lcdui/Screen.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
