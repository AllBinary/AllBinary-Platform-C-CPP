
        /* Generated Code Do Not Modify */
        



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

    public: BasicColor* getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::getInstance()->WHITE;
    
}


public: ABStringComponent(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor){
}


    public: BasicColor* getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::getInstance()->WHITE;
    
}


    public: void setForegroundBasicColor(BasicColor* foregroundBasicColor){
}


};

            

