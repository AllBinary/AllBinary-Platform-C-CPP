
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
        
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/widgets/Canvas.h>

      
#include <org/eclipse/swt/widgets/Composite.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/eclipse/swt/events/PaintEvent.h>

      
#include <org/eclipse/swt/events/PaintListener.h>

      
#include <org/eclipse/swt/graphics/Transform.h>

      
#include <org/eclipse/swt/widgets/Display.h>

      
#include <org/microemu/app/BareMain.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Image.h"

class ImageUtil
            : public Object
         {
        

    private: static const instance: ImageUtil = new ImageUtil();

    public static ImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: IIOIMAGE_POOL_NAME: string = "IIOIMAGE_POOL_NAME";

    private: const CREATE_BUFFERED_IMAGE: string = "createBufferedImage";

private constructor (){

            super();
        
        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    
}

}


    public org.eclipse.swt.graphics.Image create(int32_t width, int32_t height){

    display: Display = BareMain.shell.getDisplay()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new org.eclipse.swt.graphics.Image(display, width, height);
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, int32_t percent, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<org.eclipse.swt.graphics.Image> = new Array(size);;
    

    bufferedImage: org.eclipse.swt.graphics.Image;;
    

    imageData: ImageData;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    
imageData= bufferedImage!.getImageData();
    

    newWidth: int32_t = static_cast<int32_t>((imageData!.width *percent /100));;
    

    newHeight: int32_t = static_cast<int32_t>((imageData!.height *percent /100));;
    
scaledBufferedImageArray[index]= this.createBufferedImage5(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage2(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, float percent, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<org.eclipse.swt.graphics.Image> = new Array(size);;
    

    bufferedImage: org.eclipse.swt.graphics.Image;;
    

    imageData: ImageData;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    
imageData= bufferedImage!.getImageData();
    

    newWidth: int32_t = static_cast<int32_t>((imageData!.width *percent));;
    

    newHeight: int32_t = static_cast<int32_t>((imageData!.height *percent));;
    
scaledBufferedImageArray[index]= this.createBufferedImage5(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<org.eclipse.swt.graphics.Image> createBufferedImage3(std::vector<org.eclipse.swt.graphics.Image> bufferedImageArray, int32_t width, int32_t height, bool scale){

    size: int32_t = bufferedImageArray!.length
                ;;
    

    scaledBufferedImageArray: std::vector<org.eclipse.swt.graphics.Image> = new Array(size);;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
scaledBufferedImageArray[index]= this.createBufferedImage5(bufferedImageArray[index]!, width, height, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage4(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createBufferedImage5(bufferedImage, newWidth, newHeight, true);;
    
}


                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage5(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight, bool scale){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createBufferedImage6(bufferedImage, newWidth, newHeight, scale, false);;
    
}


                //@Throws(Exception.constructor)
            
    public org.eclipse.swt.graphics.Image createBufferedImage6(org.eclipse.swt.graphics.Image bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate){

    imageData: ImageData = bufferedImage!.getImageData()!;;
    

    width: float = imageData!.width;;
    

    height: float = imageData!.height;;
    

    d_newWidth: float = newWidth;;
    

    d_newHeight: float = newHeight;;
    

    widthRatio: float = d_newWidth /width;;
    

    heightRatio: float = d_newHeight /height;;
    

    ratioX: float = 1.0;;
    

    ratioY: float = 1.0;;
    

                        if(scale)
                        
                                    {
                                    ratioX= widthRatio;
    
ratioY= heightRatio;
    

                                    }
                                
this.logUtil!.putF(new StringMaker().appendfloat(width)!.append(this.commonSeps!.FORWARD_SLASH)!.appendfloat(height)!.append(this.commonSeps!.COLON)!.appendint(newWidth)!.append(this.commonSeps!.FORWARD_SLASH)!.appendint(newHeight)!.append(this.commonSeps!.COLON)!.appendfloat(widthRatio)!.append(this.commonSeps!.FORWARD_SLASH)!.appendfloat(heightRatio)!.toString(), this, this.CREATE_BUFFERED_IMAGE);
    

    dx: float = 0;;
    

    dy: float = 0;;
    

                        if(!scale && allowTranslate)
                        
                                    {
                                    dx= (newWidth -width) /2;
    
dy= (newHeight -height) /2;
    
this.logUtil!.putF(new StringMaker().append("Translate dx: ")!.appendfloat(dx)!.append(" dy: ")!.appendfloat(dy)!.toString(), this, this.CREATE_BUFFERED_IMAGE);
    

                                    }
                                

    newBufferedImage: org.eclipse.swt.graphics.Image = new org.eclipse.swt.graphics.Image(BareMain.shell.getDisplay(), newWidth, newHeight);;
    

    gc: GC = new GC(newBufferedImage);;
    

    affineTransform: Transform = new Transform(gc.getDevice());;
    
affineTransform!.scale(ratioX, ratioY);
    
affineTransform!.translate(dx, dy);
    
gc.setTransform(affineTransform);
    
gc.setAntialias(SWT.ON);
    
gc.setInterpolation(SWT.HIGH);
    
gc.drawImage(bufferedImage, 0, 0, bufferedImage!.getBounds()!.width, bufferedImage!.getBounds()!.height, 0, 0, newWidth, newHeight);
    
gc.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    public Canvas drawTransformedImage(org.eclipse.swt.graphics.Image image, Composite parent, int32_t dx, int32_t dy, int32_t width, int32_t height){

    imageCanvas: Canvas = new Canvas(parent, SWT.NONE);;
    
imageCanvas!.addPaintListener(new class extends PaintListener
                                {
                                
    public paintControl(PaintEvent event){

    gc: GC = event.gc;;
    

    affineTransform: Transform = new Transform(gc.getDevice());;
    
affineTransform!.translate(dx, dy);
    
gc.setAntialias(SWT.ON);
    
gc.setInterpolation(SWT.HIGH);
    
gc.drawImage(image, 0, 0, image.getBounds()!.width, image.getBounds()!.height, 0, 0, width, height);
    
}

                                }
                            );
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageCanvas;
    
}


    public string toString(org.eclipse.swt.graphics.Image bufferedImage){

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    imageData: ImageData = bufferedImage!.getImageData()!;;
    
stringBuffer!.append(" org.eclipse.swt.graphics.Image: ");
    
stringBuffer!.append(commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(imageData!.width);
    
stringBuffer!.append(commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(imageData!.height);
    
stringBuffer!.append(" Type: ");
    
stringBuffer!.appendint(imageData!.type);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

