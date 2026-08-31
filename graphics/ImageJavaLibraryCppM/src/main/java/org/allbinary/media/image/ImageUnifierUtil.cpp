
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
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "GraphicsEnvironment.h"
#include "GraphicsDevice.h"
#include "GraphicsConfiguration.h"
#include "Graphics2D.h"
#include "ImageUnifierProperties.h"

class ImageUnifierUtil
            : public Object
         {
        

    private: static const instance: ImageUnifierUtil = new ImageUnifierUtil();

    public static ImageUnifierUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUnifierUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

private constructor (){

            super();
        }


    public GraphicsConfiguration getDefaultConfiguration(){

    ge: GraphicsEnvironment = GraphicsEnvironment.getLocalGraphicsEnvironment()!;;
    

    gd: GraphicsDevice = ge.getDefaultScreenDevice()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gd.getDefaultConfiguration();;
    
}


    public BufferedImage getImage(std::vector<BufferedImage> bufferedImageArray, ImageUnifierProperties imageUnifierProperties){

    newBufferedImage: BufferedImage = this.imageUtil!.create(imageUnifierProperties!.getWidth(), imageUnifierProperties!.getHeight())!;;
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    
this.logUtil!.putF("Setting Image - " +commonLabels!.WIDTH_LABEL +newBufferedImage!.getWidth() +commonLabels!.HEIGHT_LABEL +newBufferedImage!.getHeight(), this, "getImage");
    

    g: Graphics2D = newBufferedImage!.createGraphics()!;;
    

    columnIndex: int32_t = 0;;
    

    rowIndex: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {

    x: int32_t = imageUnifierProperties!.getImageUnifierCell()!.getWidth()!.intValue() *columnIndex++;;
    

    y: int32_t = imageUnifierProperties!.getImageUnifierCell()!.getHeight()!.intValue() *rowIndex;;
    
this.logUtil!.putF("Adding Image: " +index +" x: " +x +" y: " +y, this, "getImage");
    
g.drawImage(bufferedImageArray[index]!, x, y, imageUnifierProperties!.getImageUnifierCell()!.getWidth()!.intValue(), imageUnifierProperties!.getImageUnifierCell()!.getHeight()!.intValue(), 
                            nullptr);
    

    totalColumnsMinusOne: int32_t = (imageUnifierProperties!.getColumns()!.intValue() -1);;
    

                        if(columnIndex > totalColumnsMinusOne)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
}

g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


};

            

