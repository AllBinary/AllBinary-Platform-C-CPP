
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/microemu/device/playn/PlaynImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageCompleteUtil
            : public Object
         {
        

    private: static const instance: ImageCompleteUtil = new ImageCompleteUtil();

    public static ImageCompleteUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCompleteUtil.instance;
    
}


    const ISREADY: string = "isReady";

                //@Throws(Exception.constructor)
            
    public waitForImage(Image image, string name){
}


    private: const COMPLETE: string = "Image loading complete for: ";

                //@Throws(Exception.constructor)
            
    public bool isReady(Image image, string name, TimeDelayHelper timeDelayHelper){

    playnImage: PlaynImage = image as PlaynImage;;
    

    playnCoreImage: playn.core.Image = playnImage!.getImage() as playn.core.Image;;
    

                        if(!playnCoreImage!.isReady() || playnCoreImage!.width() +playnCoreImage!.height() <= 0)
                        
                                    {
                                    this.handleTimeout(name);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!image.isReady())
                        
                                    {
                                    image.init(image.getImage());
    

                        if(!image.isReady())
                        
                                    {
                                    PreLogUtil.put("Waiting for Not Ready Image: " +image.getName(), this, this.ISREADY);
    

                                    }
                                

                                    }
                                

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.put(this.COMPLETE +image.getName(), this, commonStrings!.SUCCESS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public handleTimeout(string name){
}


                //@Throws(Exception.constructor)
            
    public waitForAll(){
}


};

            

