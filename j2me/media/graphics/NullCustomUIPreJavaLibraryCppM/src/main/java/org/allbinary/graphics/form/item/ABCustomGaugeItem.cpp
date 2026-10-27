
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/ABCustomGaugeItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

auto ABCustomGaugeItem::NULL_GAUGE_ITEM_owner() -> ABCustomGaugeItem* { static std::unique_ptr<ABCustomGaugeItem> value(new ABCustomGaugeItem(StringUtil::getInstance()->EMPTY_STRING, 1, 0, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE)); return value.get(); }
ABCustomGaugeItem* ABCustomGaugeItem::NULL_GAUGE_ITEM = ABCustomGaugeItem::NULL_GAUGE_ITEM_owner();

ABCustomGaugeItem::ABCustomGaugeItem(std::string label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomItem(label, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_CPP
