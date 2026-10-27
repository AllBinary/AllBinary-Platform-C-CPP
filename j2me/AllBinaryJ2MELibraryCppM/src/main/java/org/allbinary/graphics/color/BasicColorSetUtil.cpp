
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"

class BasicColorSetUtil
            : public Object
         {

    private: static BasicColorSetUtil* instance() { static std::unique_ptr<BasicColorSetUtil> value(new BasicColorSetUtil()); return value.get(); }

    public: static BasicColorSetUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorSetUtil::instance();
    
}


protected: BasicColorSetUtil(){
}


    public: void setBasicColorP(Graphics* graphics, BasicColor* basicColor){
graphics->setColor(basicColor->intValue());
    
}


    public: void setBasicColorP3(Graphics* graphics, BasicColor* basicColor, int32_t value){
graphics->setColor(value);
    
}


};

            

