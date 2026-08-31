
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

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESGraphicsFactory.h"

class OpenGLESGraphicsCompositeFactory
            : public Object
         {
        

    private: static const instance: OpenGLESGraphicsCompositeFactory = new OpenGLESGraphicsCompositeFactory();

    public static OpenGLESGraphicsCompositeFactory getInstance();

    private: openGLESGraphicsFactory: OpenGLESGraphicsFactory = new OpenGLESGraphicsFactory();

    public set(OpenGLESGraphicsFactory openGLESGraphicsFactory);

    public OpenGLESGraphicsFactory get();

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
