
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

class ABCustomGaugeItem: public ABCustomItem {

    public: static ABCustomGaugeItem* NULL_GAUGE_ITEM() { static std::unique_ptr<ABCustomGaugeItem> value(new ABCustomGaugeItem(StringUtil::getInstance()->EMPTY_STRING, 1, 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE)); return value.get(); }

public: ABCustomGaugeItem(std::string label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
