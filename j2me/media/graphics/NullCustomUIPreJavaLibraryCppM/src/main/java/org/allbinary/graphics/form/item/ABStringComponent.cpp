
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/ABStringComponent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ABStringComponent::NULL_STRING_COMPONENT_owner() -> ABStringComponent* { static std::unique_ptr<ABStringComponent> value(new ABStringComponent(BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE)); return value.get(); }
ABStringComponent* ABStringComponent::NULL_STRING_COMPONENT = ABStringComponent::NULL_STRING_COMPONENT_owner();

    auto ABStringComponent::getBackgroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicColorFactory::getInstance()->WHITE;
    
}


ABStringComponent::ABStringComponent(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor){
}


    auto ABStringComponent::getForegroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicColorFactory::getInstance()->WHITE;
    
}


    auto ABStringComponent::setForegroundBasicColor(BasicColor* foregroundBasicColor) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_CPP
