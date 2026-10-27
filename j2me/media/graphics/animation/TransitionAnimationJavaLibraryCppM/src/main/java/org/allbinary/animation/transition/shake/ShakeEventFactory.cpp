
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/transition/shake/ShakeEvent.h"

class ShakeEventFactory
            : public Object
         {

    private: static ShakeEventFactory* instance() { static std::unique_ptr<ShakeEventFactory> value(new ShakeEventFactory()); return value.get(); }

    public: static ShakeEventFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShakeEventFactory::instance();
    
}


    public: ShakeEvent* MICRO = new ShakeEvent();

    public: ShakeEvent* SMALL = new ShakeEvent();

    public: ShakeEvent* MEDIUM = new ShakeEvent();

    public: ShakeEvent* LARGE = new ShakeEvent();

    public: void init(){
}


};

            

