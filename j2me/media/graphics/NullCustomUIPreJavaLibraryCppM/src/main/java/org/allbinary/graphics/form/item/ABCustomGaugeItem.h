
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicColor;
class BasicColorFactory;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABCustomGaugeItem: public ABCustomItem {

    private: static ABCustomGaugeItem* NULL_GAUGE_ITEM_owner();
    public: static ABCustomGaugeItem* NULL_GAUGE_ITEM;

public: ABCustomGaugeItem(std::string label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

        #endif
    
