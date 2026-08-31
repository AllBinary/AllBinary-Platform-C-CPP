
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameStatisticsFactory.h"

class SpecialMessageUtil
            : public Object
         {
        

    private: static const SINGLETON: SpecialMessageUtil = new SpecialMessageUtil();

    public static SpecialMessageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialMessageUtil.SINGLETON;
    
}


    public string get(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(Memory.getInfo());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(GameStatisticsFactory.getInstance()!.toString());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(" Option: ");
    

                        if(Features.getInstance()!.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL_AUTO_SELECT))
                        
                                    {
                                    stringBuffer!.append(OpenGLFeatureFactory.getInstance()!.OPENGL_AUTO_SELECT.getName());
    

                                    }
                                
                        else {
                            stringBuffer!.append(OpenGLFeatureFactory.getInstance()!.OPENGL_MINIMUM.getName());
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

