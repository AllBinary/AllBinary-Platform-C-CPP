
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
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/GraphicsConfiguration.h>

      
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/awt/Transparency.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageUtil
            : public Object
         {
        

    private: static const instance: ImageUtil = new ImageUtil();

    public static ImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUtil.instance;
    
}


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: IIOIMAGE_POOL_NAME: string = "IIOIMAGE_POOL_NAME";

    private: const CREATE_BUFFERED_IMAGE: string = "createBufferedImage";

private constructor (){

            super();
        }


    GraphicsConfiguration getDefaultConfiguration(){

    ge: GraphicsEnvironment = GraphicsEnvironment.getLocalGraphicsEnvironment()!;;
    

    gd: GraphicsDevice = ge.getDefaultScreenDevice()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gd.getDefaultConfiguration();;
    
}


    public BufferedImage create(int32_t width, int32_t height){

    graphicsConfiguration: GraphicsConfiguration = this.getDefaultConfiguration()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsConfiguration!.createCompatibleImage(width, height, Transparency.TRANSLUCENT);;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<BufferedImage> createBufferedImageForResize(std::vector<BufferedImage> bufferedImageArray, int32_t percent, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<BufferedImage> = new Array(size);;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    

    newWidth: int32_t = static_cast<int32_t>((bufferedImage!.getWidth() *percent /100));;
    

    newHeight: int32_t = static_cast<int32_t>((bufferedImage!.getHeight() *percent /100));;
    
scaledBufferedImageArray[index]= this.createBufferedImage(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<BufferedImage> createBufferedImage2(std::vector<BufferedImage> bufferedImageArray, float percent, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<BufferedImage> = new Array(size);;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    

    newWidth: int32_t = static_cast<int32_t>((bufferedImage!.getWidth() *percent));;
    

    newHeight: int32_t = static_cast<int32_t>((bufferedImage!.getHeight() *percent));;
    
scaledBufferedImageArray[index]= this.createBufferedImage(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<BufferedImage> createBufferedImage3(std::vector<BufferedImage> bufferedImageArray, int32_t width, int32_t height, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<BufferedImage> = new Array(size);;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
scaledBufferedImageArray[index]= this.createBufferedImage(bufferedImageArray[index]!, width, height, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public BufferedImage createBufferedImageForSave(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createBufferedImage(bufferedImage, newWidth, newHeight, true);;
    
}


                //@Throws(Exception.constructor)
            
    public BufferedImage createBufferedImage(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight, bool scale){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createBufferedImageAllowTranslate(bufferedImage, newWidth, newHeight, scale, false);;
    
}


                //@Throws(Exception.constructor)
            
    public BufferedImage createBufferedImageAllowTranslate(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate){

    width: double = bufferedImage!.getWidth()!;;
    

    height: double = bufferedImage!.getHeight()!;;
    

    d_newWidth: double = newWidth;;
    

    d_newHeight: double = newHeight;;
    

    widthRatio: double = d_newWidth /width;;
    

    heightRatio: double = d_newHeight /height;;
    

    ratioX: double = 1.0;;
    

    ratioY: double = 1.0;;
    

                        if(scale)
                        
                                    {
                                    ratioX= widthRatio;
    
ratioY= heightRatio;
    

                                    }
                                

    affineTransform: AffineTransform = AffineTransform.getScaleInstance(ratioX, ratioY)!;;
    

                        if(!scale && allowTranslate)
                        
                                    {
                                    
    dx: double = (newWidth -width) /2;;
    

    dy: double = (newHeight -height) /2;;
    
affineTransform!.translate(dx, dy);
    

                                    }
                                

    newBufferedImage: BufferedImage = new BufferedImage(newWidth, newHeight, BufferedImage.TYPE_INT_ARGB_PRE);;
    

    graphics: Graphics2D = newBufferedImage!.createGraphics()!;;
    
graphics.drawRenderedImage(bufferedImage, affineTransform);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


                //@Throws(Exception.constructor)
            
    public BufferedImage createBufferedImageWithLargerCanvas(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight){

    width: double = bufferedImage!.getWidth()!;;
    

    height: double = bufferedImage!.getHeight()!;;
    

    d_newWidth: double = newWidth;;
    

    d_newHeight: double = newHeight;;
    

    widthRatio: double = d_newWidth /width;;
    

    heightRatio: double = d_newHeight /height;;
    

    dx2: int32_t = static_cast<int32_t>((newWidth -width));;
    

    dy2: int32_t = static_cast<int32_t>((newHeight -height));;
    

    dx: int32_t = static_cast<int32_t>(dx2) /2;;
    

    dy: int32_t = static_cast<int32_t>(dy2) /2;;
    

    dx4: int32_t = static_cast<int32_t>(dx2) /4;;
    

    dy4: int32_t = static_cast<int32_t>(dy2) /4;;
    

    newBufferedImage: BufferedImage = new BufferedImage(newWidth, newHeight, BufferedImage.TYPE_INT_ARGB_PRE);;
    

    graphics: Graphics2D = newBufferedImage!.createGraphics()!;;
    
graphics.drawImage(bufferedImage, dx4, dy4, 
                            nullptr);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    public BufferedImage convertToBufferedImage(java.awt.Image toolkitImage){

                        if(toolkitImage == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                

    bufferedImage: BufferedImage = new BufferedImage(toolkitImage!.getWidth(
                            nullptr), toolkitImage!.getHeight(
                            nullptr), BufferedImage.TYPE_INT_ARGB);;
    

    g2d: Graphics2D = bufferedImage!.createGraphics()!;;
    
g2d.drawImage(toolkitImage, 0, 0, 
                            nullptr);
    
g2d.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    public BufferedImage getBufferedImage(Image image){

    bufferedImage: BufferedImage;;
    

                        if(image.isMutable())
                        
                                    {
                                    
    j2seImage: J2SEMutableImage = image as J2SEMutableImage;;
    
bufferedImage= j2seImage!.getImage() as BufferedImage;
    

                                    }
                                
                        else {
                            
    j2seImage: J2SEImmutableImage = image as J2SEImmutableImage;;
    
bufferedImage= j2seImage!.getImage() as BufferedImage;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


    public string toString(BufferedImage bufferedImage){

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(" BufferedImage -");
    
stringBuffer!.append(commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(bufferedImage!.getWidth());
    
stringBuffer!.append(commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(bufferedImage!.getHeight());
    
stringBuffer!.append(" Type: ");
    
stringBuffer!.appendint(bufferedImage!.getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

