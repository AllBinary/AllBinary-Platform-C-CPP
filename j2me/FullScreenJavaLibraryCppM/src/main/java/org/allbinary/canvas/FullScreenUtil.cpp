
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
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RunnableCanvas.h"

class FullScreenUtil
            : public Object
         {
        

    private: static const instance: FullScreenUtil = new FullScreenUtil();

    public static FullScreenUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenUtil.instance;
    
}


                //@Throws(Exception.constructor)
            
    public initOnRun(Canvas fullScreenInterface, CommandListener commandListener){
fullScreenInterface = fullScreenInterfacefullScreenInterface as RunnableCanvas
fullScreenInterface.
                    waitOnNotify(0);
    

                        if(commandListener != 
                                    null
                                )
                        
                                    {
                                    this.init(fullScreenInterface);
    

                                    }
                                
}


    public init(Canvas fullScreenInterface){

    mainFeatureFactory: MainFeatureFactory = MainFeatureFactory.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(mainFeatureFactory!.FULL_SCREEN))
                        
                                    {
                                    fullScreenInterface!.setFullScreenMode(true);
    

                                    }
                                
                        else {
                            fullScreenInterface!.setFullScreenMode(false);
    

                        }
                            
}


    public bool isScreenChange(bool isFullScreen){

    mainFeatureFactory: MainFeatureFactory = MainFeatureFactory.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    

                        if(features.isFeature(mainFeatureFactory!.FULL_SCREEN) != isFullScreen)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isScreenChangeCanvas(Canvas fullScreenInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isScreenChange(fullScreenInterface!.isFullScreenMode());;
    
}


};

            

