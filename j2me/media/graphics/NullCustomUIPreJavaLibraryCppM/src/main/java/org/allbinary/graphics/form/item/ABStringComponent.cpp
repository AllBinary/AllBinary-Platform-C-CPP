
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABStringComponent
            : public Object
         {

    public: static const ABStringComponent NULL_STRING_COMPONENT = ABStringComponent(BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE);

    public: BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::getInstance().WHITE;
    
}


public: ABStringComponent(BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
}


    public: BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::getInstance().WHITE;
    
}


    public: void setForegroundBasicColor(BasicColor foregroundBasicColor){
}


};

            

