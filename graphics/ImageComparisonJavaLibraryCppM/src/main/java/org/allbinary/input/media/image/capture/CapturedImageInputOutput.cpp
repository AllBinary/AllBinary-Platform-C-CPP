
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CapturedBufferedImagesCacheSingleton.h"

class CapturedImageInputOutput
            : public Object
        : public ImageIOInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public save(Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    capturedBufferedImageCacheable: BufferedImageFrameCacheable = ((getInstance as AutomaticCacheInterface).get(frame) as BufferedImageFrameCacheable);;
    
this.logUtil!.putF(("Saving: " +capturedBufferedImageCacheable!.toString()), this, commonStrings!.SAVE);
    
this.save(capturedBufferedImageCacheable!.getBufferedImage(), frame);
    
}


    public save(BufferedImage bufferedImage, Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    

    filePathStringBuffer: StringMaker = new StringMaker();;
    
filePathStringBuffer!.append(ImageOutputData.SAVE_PATH);
    
filePathStringBuffer!.append(LongUtil.fillIn(frame.toString()));
    
filePathStringBuffer!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    

    filePath: string = filePathStringBuffer!.toString()!;;
    
this.logUtil!.putF(("Image File Path: " +filePath +imageUtil!.toString(bufferedImage)), this, commonStrings!.SAVE);
    

    imagePersistanceUtil: ImagePersistanceUtil = ImagePersistanceUtil.getInstance()!;;
    
imagePersistanceUtil!.saveWithImageIO(filePath, bufferedImage);
    
}


};

            

