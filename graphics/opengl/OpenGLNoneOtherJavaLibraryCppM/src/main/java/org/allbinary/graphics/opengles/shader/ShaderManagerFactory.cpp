
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
        #include "org/allbinary/graphics/opengles/shader/ShaderManager.h"

class ShaderManagerFactory
            : public Object
         {

    private: static ShaderManagerFactory* instance() { static std::unique_ptr<ShaderManagerFactory> value(new ShaderManagerFactory()); return value.get(); }

    public: static ShaderManagerFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderManagerFactory::instance();
    
}


    public: ShaderManager* create(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderManager::getInstance();;
    
}


};

            

