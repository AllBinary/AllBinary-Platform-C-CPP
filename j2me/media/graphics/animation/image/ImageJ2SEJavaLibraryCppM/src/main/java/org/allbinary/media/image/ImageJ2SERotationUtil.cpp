
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
        
            #include "../../../../java/lang/Math.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/Image.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageJ2SEUtil.h"

class ImageJ2SERotationUtil
            : public Object
         {
        

    private: static const instance: ImageJ2SERotationUtil = new ImageJ2SERotationUtil();

    public static ImageJ2SERotationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2SERotationUtil.instance;
    
}


    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    private: const imageJ2SEUtil: ImageJ2SEUtil = ImageJ2SEUtil.getInstance()!;

private constructor (){

            super();
        }


    public BufferedImage getRotatedImage(Image bufferedImage, int32_t totalAngle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRotatedImageRadians(bufferedImage, TWO_PIE *totalAngle /360);;
    
}


    public BufferedImage getRotatedImageRadians(Image bufferedImage, double radians){

    newBufferedImage: BufferedImage = this.imageUtil!.create(bufferedImage!.getWidth(
                            nullptr), bufferedImage!.getHeight(
                            nullptr))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drawRotatedImageRadians(bufferedImage, newBufferedImage, newBufferedImage!.createGraphics(), radians);;
    
}


    BufferedImage drawRotatedImageRadians(Image bufferedImage, BufferedImage newBufferedImage, Graphics2D g, double radians){
g.rotate(radians, newBufferedImage!.getWidth(
                            nullptr) /2, newBufferedImage!.getHeight(
                            nullptr) /2);
    
g.drawImage(bufferedImage, 0, 0, bufferedImage!.getWidth(
                            nullptr), bufferedImage!.getHeight(
                            nullptr), 
                            nullptr);
    
g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    private: const TWO_PIE: double = 2 *Math.PI;

    public BufferedImage rotateImage(Image bufferedImage, BufferedImage newBufferedImage, int32_t totalAngle){

    g: Graphics2D = newBufferedImage!.createGraphics()!;;
    
g.setBackground(this.imageJ2SEUtil!.TRANSPARENT_COLOR);
    
g.clearRect(0, 0, newBufferedImage!.getWidth(), newBufferedImage!.getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    public BufferedImage createRotatedImage(Image bufferedImage, BufferedImage newBufferedImage, int32_t totalAngle){

    g: Graphics2D = newBufferedImage!.createGraphics()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    public std::vector<BufferedImage> getRotatedImages(Image bufferedImage, int32_t numberOfFrames, int32_t totalAngle){

    bufferedImageArray: std::vector<BufferedImage> = new Array(numberOfFrames);;
    

    arc: double = () *totalAngle /360;;
    

    size: int32_t = bufferedImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    radians: double = (arc /size) *index;;
    
bufferedImageArray[index]= this.getRotatedImageRadians(bufferedImage, radians);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


    public BufferedImage createSpriteImage(std::vector<BufferedImage> bufferedImageArray){

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
                                

    firstBufferedImage: BufferedImage = bufferedImageArray[0]!;;
    

    bufferedImage: BufferedImage = this.imageUtil!.create(firstBufferedImage!.getWidth(
                            nullptr) *columns, firstBufferedImage!.getHeight(
                            nullptr) *rows)!;;
    

    g: Graphics2D = bufferedImage!.createGraphics()!;;
    

    columnIndex: int32_t = 0;;
    

    rowIndex: int32_t = 0;;
    

    nextBufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(index /9 != 0 && index % 9 == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
nextBufferedImage= bufferedImageArray[index]!;
    
g.drawImage(nextBufferedImage, nextBufferedImage!.getWidth(
                            nullptr) *columnIndex, nextBufferedImage!.getHeight(
                            nullptr) *rowIndex, nextBufferedImage!.getWidth(
                            nullptr), nextBufferedImage!.getHeight(
                            nullptr), 
                            nullptr);
    
columnIndex++;
    
}

g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


};

            

