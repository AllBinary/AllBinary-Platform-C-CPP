
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
        
            #include "java/lang/Math.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/Image.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageJ2SEUtil.h"

class ImageJ2SERotationUtil
            : public Object
         {

    private: static ImageJ2SERotationUtil* instance() { static std::unique_ptr<ImageJ2SERotationUtil> value(new ImageJ2SERotationUtil()); return value.get(); }

    public: static ImageJ2SERotationUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2SERotationUtil::instance();
    
}


    private: ImageUtil* imageUtil = ImageUtil::getInstance();

    private: ImageJ2SEUtil* imageJ2SEUtil = ImageJ2SEUtil::getInstance();

private: ImageJ2SERotationUtil(){
}


    public: BufferedImage* getRotatedImage(Image* bufferedImage, int32_t totalAngle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRotatedImageRadians(bufferedImage, TWO_PIE *totalAngle /360);;
    
}


    public: BufferedImage* getRotatedImageRadians(Image* bufferedImage, double radians){

    BufferedImage* newBufferedImage = this->imageUtil->create(bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, newBufferedImage->createGraphics(), radians);;
    
}


    private: BufferedImage* drawRotatedImageRadians(Image* bufferedImage, BufferedImage* newBufferedImage, Graphics2D* g, double radians){
g->rotate(radians, newBufferedImage->getWidth(
                            nullptr) /2, newBufferedImage->getHeight(
                            nullptr) /2);
    
g->drawImage(bufferedImage, 0, 0, bufferedImage->getWidth(
                            nullptr), bufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    private: const double TWO_PIE = 2 *Math::PI;

    public: BufferedImage* rotateImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle){

    Graphics2D* g = newBufferedImage->createGraphics();;
    
g->setBackground(this->imageJ2SEUtil->TRANSPARENT_COLOR);
    
g->clearRect(0, 0, newBufferedImage->getWidth(), newBufferedImage->getHeight());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    public: BufferedImage* createRotatedImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle){

    Graphics2D* g = newBufferedImage->createGraphics();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drawRotatedImageRadians(bufferedImage, newBufferedImage, g, TWO_PIE *totalAngle /360);;
    
}


    public: std::vector<BufferedImage*> getRotatedImages(Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle){

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(numberOfFrames);;
    

    double arc = () *totalAngle /360;;
    

    int32_t size = bufferedImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    double radians = (arc /size) *index;;
    
bufferedImageArray[index]= this->getRotatedImageRadians(bufferedImage, radians);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


    public: BufferedImage* createSpriteImage(std::vector<BufferedImage*> bufferedImageArray){

    int32_t columns = 9;;
    

    int32_t rows = 0;;
    

    int32_t size = bufferedImageArray.size();;
    

                        if(size < columns)
                        
                                    {
                                    columns= size;
    

                                    }
                                
rows= (size /columns);
    

                        if(size % columns != 0)
                        
                                    {
                                    rows++;
    

                                    }
                                

    BufferedImage* firstBufferedImage = bufferedImageArray[0];;
    

    BufferedImage* bufferedImage = this->imageUtil->create(firstBufferedImage->getWidth(
                            nullptr) *columns, firstBufferedImage->getHeight(
                            nullptr) *rows);;
    

    Graphics2D* g = bufferedImage->createGraphics();;
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    

    BufferedImage* nextBufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(index /9 != 0 && index % 9 == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
nextBufferedImage= bufferedImageArray[index];
    
g->drawImage(nextBufferedImage, nextBufferedImage->getWidth(
                            nullptr) *columnIndex, nextBufferedImage->getHeight(
                            nullptr) *rowIndex, nextBufferedImage->getWidth(
                            nullptr), nextBufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
columnIndex++;
    
}

g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


};

            

