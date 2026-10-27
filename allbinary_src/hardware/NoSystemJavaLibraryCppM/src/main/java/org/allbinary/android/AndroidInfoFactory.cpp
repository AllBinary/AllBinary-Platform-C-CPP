
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidInfoFactory
            : public Object
         {

    private: static AndroidInfoFactory* instance() { static std::unique_ptr<AndroidInfoFactory> value(new AndroidInfoFactory()); return value.get(); }

    public: static AndroidInfoFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidInfoFactory::instance();
    
}


    private: const int32_t version = 8;

    public: int32_t getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->version;
    
}


};

            

