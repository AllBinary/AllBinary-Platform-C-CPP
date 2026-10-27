
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicColor;
class BasicColorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABStringComponent
            : public virtual Object
         {

    private: static ABStringComponent* NULL_STRING_COMPONENT_owner();
    public: static ABStringComponent* NULL_STRING_COMPONENT;

    public: BasicColor* getBackgroundBasicColor();

public: ABStringComponent(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: BasicColor* getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor* foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif

        #endif
    
