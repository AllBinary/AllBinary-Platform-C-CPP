
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
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

    private: static ImageUnifierUtil instance() { return ImageUnifierUtil(); }

    public: static ImageUnifierUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUnifierUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

private: ImageUnifierUtil(){
}


    public: GraphicsConfiguration getDefaultConfiguration(){

    GraphicsEnvironment ge = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    GraphicsDevice gd = ge.getDefaultScreenDevice();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gd.getDefaultConfiguration();;
    
}


    public: BufferedImage getImage(std::vector<BufferedImage> bufferedImageArray, ImageUnifierProperties imageUnifierProperties){

    BufferedImage newBufferedImage = this->imageUtil.create(imageUnifierProperties.getWidth(), imageUnifierProperties.getHeight());;
    

    CommonLabels commonLabels = CommonLabels::getInstance();;
    
this->logUtil.putF("Setting Image - " +commonLabels.WIDTH_LABEL +newBufferedImage.getWidth() +commonLabels.HEIGHT_LABEL +newBufferedImage.getHeight(), this, "getImage");
    

    Graphics2D g = newBufferedImage.createGraphics();;
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    int32_t x = imageUnifierProperties.getImageUnifierCell().getWidth().intValue() *columnIndex++;;
    

    int32_t y = imageUnifierProperties.getImageUnifierCell().getHeight().intValue() *rowIndex;;
    
this->logUtil.putF("Adding Image: " +index +" x: " +x +" y: " +y, this, "getImage");
    
g.drawImage(bufferedImageArray[index], x, y, imageUnifierProperties.getImageUnifierCell().getWidth().intValue(), imageUnifierProperties.getImageUnifierCell().getHeight().intValue(), 
                            nullptr);
    

    int32_t totalColumnsMinusOne = (imageUnifierProperties.getColumns().intValue() -1);;
    

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

            

