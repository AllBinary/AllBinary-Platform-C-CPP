
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLConfiguration.h"
#include "OpenGLFeatureFactory.h"

class OpenGLFeatureUtil
            : public Object
         {
        

    private: static const instance: OpenGLFeatureUtil = new OpenGLFeatureUtil();

    public static OpenGLFeatureUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil.instance;
    
}


    private: const anyThreed: bool;

public constructor (){

            super();
        
    openGLConfiguration: OpenGLConfiguration = OpenGLConfiguration.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    

    openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;;
    
this.anyThreed= openGLConfiguration!.isOpenGL() && (features.isFeature(openGLFeatureFactory!.OPENGL_2D_AND_3D) || features.isFeature(openGLFeatureFactory!.OPENGL_3D));
    
}


    public bool isAnyThreed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.anyThreed;
    
}


};

            

