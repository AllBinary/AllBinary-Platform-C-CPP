
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
class Graphics;
class BasicColor;
class ABCustomItem;
class LogUtil;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/CustomScreen.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABCustomForm: public CustomScreen {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

public: ABCustomForm(std::string title, std::vector<ABCustomItem*> items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: std::vector<ABCustomItem*> getAllitems();

    public: int32_t size();

    public: void setSelectedIndex(int32_t index);

    public: int32_t getSelectedIndex();

    public: void deleteAll();

    public: void delete_(int32_t itemNum);

    public: int32_t append(ABCustomItem* item);

    public: void insert(int32_t itemNum, ABCustomItem* item);

    public: void set(int32_t itemNum, ABCustomItem* item);

    public: ABCustomItem* get(int32_t itemNum);

    public: int32_t getWidth();

    public: void paint(Graphics* graphics);

    public: std::string getTitle();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/form/CustomScreen.h")
#include "org/allbinary/graphics/form/CustomScreen.h"
#endif

        #endif
    
