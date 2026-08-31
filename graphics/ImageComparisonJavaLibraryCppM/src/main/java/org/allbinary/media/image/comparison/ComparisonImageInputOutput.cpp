
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResultCacheSingleton.h"
#include "ImageComparisonResultFrameCacheable.h"
#include "ImageComparisonResult.h"
#include "ChangedPixelsUtil.h"

class ComparisonImageInputOutput
            : public Object
        : public ImageIOInterface {
        

    private: static const ROOT_NAME: string = "_Changed_";

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public save(Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(frame > 0)
                        
                                    {
                                    
    imageComparisonResultFrameCacheable: ImageComparisonResultFrameCacheable = (getInstance as AutomaticCacheInterface).get(frame) as ImageComparisonResultFrameCacheable;;
    

                        if(imageComparisonResultFrameCacheable != 
                                    null
                                )
                        
                                    {
                                    
    imageComparisonResult: ImageComparisonResult = imageComparisonResultFrameCacheable!.getImageComparisonResult()!;;
    
this.save(imageComparisonResult, imageComparisonResultFrameCacheable!.getFrame());
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Comparison Results Not Available for Output: " +frame, this, commonStrings!.SAVE);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("No Comparison Results: for first frame: " +frame, this, commonStrings!.SAVE);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public save(ImageComparisonResult imageComparisonResult, Long frame){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    filePathStringBuffer: StringMaker = new StringMaker();;
    
filePathStringBuffer!.append(ImageOutputData.SAVE_PATH);
    
filePathStringBuffer!.append(LongUtil.fillIn(frame.toString()));
    
filePathStringBuffer!.append(ComparisonImageInputOutput.ROOT_NAME);
    

    filePathStringBuffer1: StringMaker = new StringMaker();;
    
filePathStringBuffer1!.append(filePathStringBuffer!.toString());
    
filePathStringBuffer1!.append("_1");
    
filePathStringBuffer1!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    

    filePath1: string = filePathStringBuffer1!.toString()!;;
    

    filePathStringBuffer2: StringMaker = new StringMaker();;
    
filePathStringBuffer2!.append(filePathStringBuffer!.toString());
    
filePathStringBuffer2!.append("_2");
    
filePathStringBuffer2!.append(MediaDataFactory.getInstance()!.JPG.getExtension());
    

    filePath2: string = filePathStringBuffer2!.toString()!;;
    

    bufferedImageCacheables: std::vector<BufferedImageCacheable> = ChangedPixelsUtil.generateBufferedImageChacheables(imageComparisonResult)!;;
    
this.logUtil!.putF("Comparison Image File Path 1: " +filePath1, this, commonStrings!.SAVE);
    
this.logUtil!.putF("Comparison Image File Path 2: " +filePath2, this, commonStrings!.SAVE);
    

    bufferedImageArray: std::vector<BufferedImage> = new Array(2);;
    
bufferedImageArray[0]= bufferedImageCacheables[0]!.getBufferedImage();
    
bufferedImageArray[1]= bufferedImageCacheables[1]!.getBufferedImage();
    

    imagePersistanceUtil: ImagePersistanceUtil = ImagePersistanceUtil.getInstance()!;;
    
imagePersistanceUtil!.saveWithImageIO(filePath1, bufferedImageArray[0]!);
    
imagePersistanceUtil!.saveWithImageIO(filePath2, bufferedImageArray[1]!);
    
}


};

            

