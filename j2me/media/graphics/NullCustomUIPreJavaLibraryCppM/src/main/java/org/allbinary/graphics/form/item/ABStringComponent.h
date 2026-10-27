
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABStringComponent
            : public Object
         {

    public: static ABStringComponent* NULL_STRING_COMPONENT() { static std::unique_ptr<ABStringComponent> value(new ABStringComponent(BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE)); return value.get(); }

    public: BasicColor* getBackgroundBasicColor();

public: ABStringComponent(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: BasicColor* getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor* foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
