
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        #include "org/osgi/framework/NullServiceReference.h"

class NullServiceReferenceFactory
            : public Object
         {

    private: static NullServiceReferenceFactory* instance() { static std::unique_ptr<NullServiceReferenceFactory> value(new NullServiceReferenceFactory()); return value.get(); }

    public: static NullServiceReferenceFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullServiceReferenceFactory::instance();
    
}


    public: NullServiceReference* NULL_SERVICE_REFERENCE = new NullServiceReference();

};

            

