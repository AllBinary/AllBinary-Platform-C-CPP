
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

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Image.h"

class ImageSwtRotationUtil
            : public Object
         {
        

    private: static const instance: ImageSwtRotationUtil = new ImageSwtRotationUtil();

    public static ImageSwtRotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageSwtRotationUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    private: const gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;

    private: const features: Features = Features.getInstance()!;

    private: const NO_COPY: string = "SWT should not copy images after initial loading as the alpha is not honored";

private constructor (){

            super();
        }


    public org.eclipse.swt.graphics.Image getRotatedImage(org.eclipse.swt.graphics.Image bufferedImage, int32_t totalAngle){

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    org.eclipse.swt.graphics.Image getRotatedImage2(org.eclipse.swt.graphics.Image bufferedImage, org.eclipse.swt.graphics.Image newBufferedImage, GC gc, float angle){

                        if(!this.features.isFeature(this.gameFeatureFactory!.POST_IMAGE_LOADING_MODIFICATION))
                        
                                    {
                                    this.logUtil!.putF(this.NO_COPY, this, this.commonStrings!.CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    public org.eclipse.swt.graphics.Image rotateImage(org.eclipse.swt.graphics.Image originalSwtImage, org.eclipse.swt.graphics.Image newSwtImage, GC gc, int32_t totalAngle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRotatedImage2(originalSwtImage, newSwtImage, gc, totalAngle);;
    
}


    public org.eclipse.swt.graphics.Image getRotatedImageSWT(org.eclipse.swt.graphics.Image bufferedImage, org.eclipse.swt.graphics.Image newSwtImage, GC gc, int32_t totalAngle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRotatedImage2(bufferedImage, newSwtImage, gc, totalAngle);;
    
}


    public std::vector<org.eclipse.swt.graphics.Image> getRotatedImages(org.eclipse.swt.graphics.Image bufferedImage, int32_t numberOfFrames, int32_t totalAngle){

    bufferedImageArray: std::vector<org.eclipse.swt.graphics.Image> = new Array(numberOfFrames);;
    

    angle: int32_t= 0;;
    

    size: int32_t = bufferedImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
angle= (totalAngle /size) *index;
    
bufferedImageArray[index]= this.getRotatedImage(bufferedImage, angle);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


    public org.eclipse.swt.graphics.Image createSpriteImage(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray){

    columns: int32_t = 9;;
    

    rows: int32_t = 0;;
    

    size: int32_t = bufferedImageArray!.length
                ;;
    

                        if(size < columns)
                        
                                    {
                                    columns= size;
    

                                    }
                                
rows= (size /columns);
    

                        if(size % columns != 0)
                        
                                    {
                                    rows++;
    

                                    }
                                

    firstBufferedImage: org.eclipse.swt.graphics.Image = bufferedImageArray[0]!;;
    

    imageData: ImageData = firstBufferedImage!.getImageData()!;;
    

    bufferedImage: org.eclipse.swt.graphics.Image = this.imageUtil!.create(imageData!.width *columns, imageData!.height *rows)!;;
    

    gc: GC = new GC(bufferedImage);;
    
gc.setAntialias(SWT.ON);
    
gc.setInterpolation(SWT.HIGH);
    

    columnIndex: int32_t = 0;;
    

    rowIndex: int32_t = 0;;
    

    nextBufferedImage: org.eclipse.swt.graphics.Image;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(index /9 != 0 && index % 9 == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
nextBufferedImage= bufferedImageArray[index]!;
    
imageData= nextBufferedImage!.getImageData();
    
gc.drawImage(bufferedImage, 0, 0, bufferedImage!.getBounds()!.width, bufferedImage!.getBounds()!.height, imageData!.width *columnIndex, imageData!.height *rowIndex, imageData!.width, imageData!.height);
    
columnIndex++;
    
}

gc.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


};

            

