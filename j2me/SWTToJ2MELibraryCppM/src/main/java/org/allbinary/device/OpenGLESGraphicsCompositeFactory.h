
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESGraphicsFactory.h"

class OpenGLESGraphicsCompositeFactory
            : public Object
         {

    private: static OpenGLESGraphicsCompositeFactory* instance() { static std::unique_ptr<OpenGLESGraphicsCompositeFactory> value(new OpenGLESGraphicsCompositeFactory()); return value.get(); }

    public: static OpenGLESGraphicsCompositeFactory* getInstance();

    private: OpenGLESGraphicsFactory* openGLESGraphicsFactory = new OpenGLESGraphicsFactory();

    public: void set(OpenGLESGraphicsFactory* openGLESGraphicsFactory);

    public: OpenGLESGraphicsFactory* get();

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
