
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABCustomItem.h"

class ABCustomGaugeItem: public ABCustomItem {

    public: static const ABCustomGaugeItem NULL_GAUGE_ITEM = ABCustomGaugeItem(StringUtil::getInstance().EMPTY_STRING, 1, 0, BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE);

public: ABCustomGaugeItem(std::string label, int32_t maxValue, int32_t initialValue, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(label, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

