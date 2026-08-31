
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
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Point.h"
#include "Graphics2D.h"

class ImagesRatioUtil
            : public Object
         {
        

    private: static const instance: ImagesRatioUtil = new ImagesRatioUtil();

    public static ImagesRatioUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImagesRatioUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    public bool isEqual(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages){

    end: int32_t = totalImages;;
    

                        if(bufferedImageArray!.length < totalImages)
                        end= bufferedImageArray!.length

    ratio: double = (bufferedImageArray[0]!.getWidth() /bufferedImageArray[0]!.getHeight());;
    




                        for (
    index: int32_t = 1;index < end; index++)
        {

                        if(ratio != (bufferedImageArray[index]!.getWidth() /bufferedImageArray[index]!.getHeight()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public double getAverage(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages){

    ratio: double = 0;;
    

    end: int32_t = totalImages;;
    

                        if(bufferedImageArray!.length < totalImages)
                        end= bufferedImageArray!.length




                        for (
    index: int32_t = 0;index < end; index++)
        {
ratio += (bufferedImageArray[index]!.getWidth() /bufferedImageArray[index]!.getHeight());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (ratio /end);
    
}


                //@Throws(Exception.constructor)
            
    public BufferedImage fudge(BufferedImage bufferedImage, double ratio){

    imageRatio: double = (bufferedImage!.getWidth() /bufferedImage!.getHeight());;
    

    point: Point = new Point();;
    

    newHeight: int32_t = bufferedImage!.getHeight()!;;
    

    newWidth: int32_t = bufferedImage!.getWidth()!;;
    

                        if(ratio > imageRatio)
                        
                                    {
                                    newWidth= static_cast<int32_t>((bufferedImage!.getHeight() *ratio));
    
point.x= (newWidth -bufferedImage!.getWidth()) /2;
    

                                    }
                                
                        else {
                            newHeight= static_cast<int32_t>((bufferedImage!.getWidth() /ratio));
    
point.y= (newHeight -bufferedImage!.getHeight()) /2;
    

                        }
                            

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    
this.logUtil!.putF(commonLabels!.WIDTH_LABEL +bufferedImage!.getWidth() +" newWidth: " +newWidth +commonLabels!.HEIGHT_LABEL +bufferedImage!.getHeight() +" newHeight: " +newHeight +" needed ratio: " +(newWidth /newHeight), this, "fudge");
    

    newBufferedImage: BufferedImage = this.imageUtil!.create(newWidth, newHeight)!;;
    

    g: Graphics2D = newBufferedImage!.createGraphics()!;;
    

                        if(point.x > 0)
                        
                                    {
                                    
    firstColumnBufferedImage: BufferedImage = bufferedImage!.getSubimage(0, 0, 1, bufferedImage!.getHeight())!;;
    

    lastColumnBufferedImage: BufferedImage = bufferedImage!.getSubimage(bufferedImage!.getWidth() -1, 0, 1, bufferedImage!.getHeight())!;;
    
this.logUtil!.putF("Draw some columns to fill in gap", this, "fudge");
    




                        for (
    index: int32_t = 0;index < point.x; index++)
        {
g.drawImage(firstColumnBufferedImage, index, 0, 
                            nullptr);
    
g.drawImage(lastColumnBufferedImage, newWidth -index, 0, 
                            nullptr);
    
}


                                    }
                                

                        if(point.y > 0)
                        
                                    {
                                    
    firstRowBufferedImage: BufferedImage = bufferedImage!.getSubimage(0, 0, bufferedImage!.getWidth(), 1)!;;
    

    lastRowBufferedImage: BufferedImage = bufferedImage!.getSubimage(0, bufferedImage!.getHeight() -1, bufferedImage!.getWidth(), 1)!;;
    
this.logUtil!.putF("Draw some rows to fill in gap", this, "fudge");
    




                        for (
    index: int32_t = 0;index < point.y; index++)
        {
g.drawImage(firstRowBufferedImage, 0, index, 
                            nullptr);
    
g.drawImage(lastRowBufferedImage, 0, newHeight -index, 
                            nullptr);
    
}


                                    }
                                
g.drawImage(bufferedImage, point.x, point.y, bufferedImage!.getWidth(), bufferedImage!.getHeight(), 
                            nullptr);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<BufferedImage> fudge(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages, double ratio){

    end: int32_t = totalImages;;
    

                        if(bufferedImageArray!.length < totalImages)
                        end= bufferedImageArray!.length

    fudgedBufferedImageArray: std::vector<BufferedImage> = new Array(end);;
    




                        for (
    index: int32_t = 0;index < end; index++)
        {
fudgedBufferedImageArray[index]= fudge(bufferedImageArray[index]!, ratio);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fudgedBufferedImageArray;
    
}


};

            

