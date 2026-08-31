
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

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLFeatureFactory.h"

class OpenGLOptions
            : public Object
         {
        

    public init(){

    openGLFeatureFactory: OpenGLFeatureFactory = OpenGLFeatureFactory.getInstance()!;;
    

                        if(Features.getInstance()!.isFeature(openGLFeatureFactory!.OPENGL_OPTIONS))
                        
                                    {
                                    
    openGLMultipleList: BasicArrayList = new BasicArrayListD();;
    
openGLMultipleList!.add(openGLFeatureFactory!.OPENGL);
    
GameFeatureChoiceGroups.getMultipleInstance()!.add("OpenGL (Complete Restart)", openGLMultipleList);
    

    openGLVersionSelectorMultipleList: BasicArrayList = new BasicArrayListD();;
    
openGLVersionSelectorMultipleList!.add(openGLFeatureFactory!.OPENGL_AUTO_SELECT);
    
openGLVersionSelectorMultipleList!.add(openGLFeatureFactory!.OPENGL_MINIMUM);
    
GameFeatureChoiceGroups.getExclusiveInstance()!.add("OpenGL Version Selector", openGLVersionSelectorMultipleList);
    

    openGLImageColorMultipleList: BasicArrayList = new BasicArrayListD();;
    
openGLImageColorMultipleList!.add(openGLFeatureFactory!.IMAGE_COLOR_DEPTH_4444);
    
openGLImageColorMultipleList!.add(openGLFeatureFactory!.IMAGE_COLOR_DEPTH_8888);
    
GameFeatureChoiceGroups.getExclusiveInstance()!.add("OpenGL Image Color RGBA", openGLImageColorMultipleList);
    

                                    }
                                
}


};

            

