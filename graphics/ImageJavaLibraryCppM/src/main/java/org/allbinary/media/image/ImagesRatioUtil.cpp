
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/Point.h"
#include "org/allbinary/media/image/Graphics2D.h"

class ImagesRatioUtil
            : public Object
         {

    private: static ImagesRatioUtil* instance() { static std::unique_ptr<ImagesRatioUtil> value(new ImagesRatioUtil()); return value.get(); }

    public: static ImagesRatioUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImagesRatioUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ImagesRatioUtil(){
}


    private: ImageUtil* imageUtil = ImageUtil::getInstance();

    public: bool isEqual(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages){

    int32_t end = totalImages;;
    

                        if(bufferedImageArray.size() < totalImages)
                        end= bufferedImageArray.size();
                                

    double ratio = (bufferedImageArray[0].getWidth() /bufferedImageArray[0].getHeight());;
    




                        for (
    int32_t index = 1;index < end; index++)
        {

                        if(ratio != (bufferedImageArray[index].getWidth() /bufferedImageArray[index].getHeight()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: double getAverage(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages){

    double ratio = 0;;
    

    int32_t end = totalImages;;
    

                        if(bufferedImageArray.size() < totalImages)
                        end= bufferedImageArray.size();
                                




                        for (
    int32_t index = 0;index < end; index++)
        {
ratio += (bufferedImageArray[index].getWidth() /bufferedImageArray[index].getHeight());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (ratio /end);
    
}


                //@Throws(Exception.constructor)
            
    public: BufferedImage* fudge(BufferedImage* bufferedImage, double ratio){

    double imageRatio = (bufferedImage->getWidth() /bufferedImage->getHeight());;
    

    Point* point = new Point();;
    

    int32_t newHeight = bufferedImage->getHeight();;
    

    int32_t newWidth = bufferedImage->getWidth();;
    

                        if(ratio > imageRatio)
                        
                                    {
                                    newWidth= static_cast<int32_t>((bufferedImage->getHeight() *ratio));
    
point->x= (newWidth -bufferedImage->getWidth()) /2;
    

                                    }
                                
                        else {
                            newHeight= static_cast<int32_t>((bufferedImage->getWidth() /ratio));
    
point->y= (newHeight -bufferedImage->getHeight()) /2;
    

                        }
                            

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    
this->logUtil->putF(commonLabels->WIDTH_LABEL +bufferedImage->getWidth() +" newWidth: " +newWidth +commonLabels->HEIGHT_LABEL +bufferedImage->getHeight() +" newHeight: " +newHeight +" needed ratio: " +(newWidth /newHeight), this, "fudge");
    

    BufferedImage* newBufferedImage = this->imageUtil->create(newWidth, newHeight);;
    

    Graphics2D* g = newBufferedImage->createGraphics();;
    

                        if(point->x > 0)
                        
                                    {
                                    
    BufferedImage* firstColumnBufferedImage = bufferedImage->getSubimage(0, 0, 1, bufferedImage->getHeight());;
    

    BufferedImage* lastColumnBufferedImage = bufferedImage->getSubimage(bufferedImage->getWidth() -1, 0, 1, bufferedImage->getHeight());;
    
this->logUtil->putF("Draw some columns to fill in gap", this, "fudge");
    




                        for (
    int32_t index = 0;index < point->x; index++)
        {
g->drawImage(firstColumnBufferedImage, index, 0, 
                            nullptr);
    
g->drawImage(lastColumnBufferedImage, newWidth -index, 0, 
                            nullptr);
    
}


                                    }
                                

                        if(point->y > 0)
                        
                                    {
                                    
    BufferedImage* firstRowBufferedImage = bufferedImage->getSubimage(0, 0, bufferedImage->getWidth(), 1);;
    

    BufferedImage* lastRowBufferedImage = bufferedImage->getSubimage(0, bufferedImage->getHeight() -1, bufferedImage->getWidth(), 1);;
    
this->logUtil->putF("Draw some rows to fill in gap", this, "fudge");
    




                        for (
    int32_t index = 0;index < point->y; index++)
        {
g->drawImage(firstRowBufferedImage, 0, index, 
                            nullptr);
    
g->drawImage(lastRowBufferedImage, 0, newHeight -index, 
                            nullptr);
    
}


                                    }
                                
g->drawImage(bufferedImage, point->x, point->y, bufferedImage->getWidth(), bufferedImage->getHeight(), 
                            nullptr);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage*> fudge(std::vector<BufferedImage*> bufferedImageArray, int32_t totalImages, double ratio){

    int32_t end = totalImages;;
    

                        if(bufferedImageArray.size() < totalImages)
                        end= bufferedImageArray.size();
                                

    std::vector<BufferedImage*> fudgedBufferedImageArray = std::vector<BufferedImage*>(end);;
    




                        for (
    int32_t index = 0;index < end; index++)
        {
fudgedBufferedImageArray[index]= fudge(bufferedImageArray[index], ratio);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fudgedBufferedImageArray;
    
}


};

            

