
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABStringComponent
            : public Object
         {

    public: static const ABStringComponent NULL_STRING_COMPONENT = ABStringComponent(BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE);

    public: BasicColor getBackgroundBasicColor();

public: ABStringComponent(BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: BasicColor getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
