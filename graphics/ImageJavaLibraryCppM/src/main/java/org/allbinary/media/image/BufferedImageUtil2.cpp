
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/BufferedImageUtil2.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/Graphics2D.h"


BufferedImageUtil2::BufferedImageUtil2() : imageUtil(ImageUtil::getInstance()) {
        }
        auto BufferedImageUtil2::instance_owner() -> BufferedImageUtil2* { static std::unique_ptr<BufferedImageUtil2> value(new BufferedImageUtil2()); return value.get(); }
BufferedImageUtil2* BufferedImageUtil2::instance = BufferedImageUtil2::instance_owner();

    auto BufferedImageUtil2::getInstance() -> BufferedImageUtil2*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BufferedImageUtil2::instance;
    
}


    auto BufferedImageUtil2::createSpriteImage(std::vector<BufferedImage*> bufferedImageArray) -> BufferedImage*{

    int32_t columns = bufferedImageArray.size();;
    

    int32_t max = columns;;
    

    int32_t rows = 0;;
    

                        if(bufferedImageArray.size() < columns)
                        
                                    {
                                    columns= bufferedImageArray.size();
    

                                    }
                                
rows= (bufferedImageArray.size() /columns);
    

                        if(bufferedImageArray.size() % columns != 0)
                        
                                    {
                                    rows++;
    

                                    }
                                

    BufferedImage* bufferedImage = this->imageUtil->create(bufferedImageArray[0]->getWidth(
                            nullptr) *columns, bufferedImageArray[0]->getHeight(
                            nullptr) *rows);;
    

    Graphics2D* g = bufferedImage->createGraphics();;
    

    int32_t columnIndex = 0;;
    

    int32_t rowIndex = 0;;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

                        if(index /max != 0 && index % max == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
g->drawImage(bufferedImageArray[index], bufferedImageArray[index]->getWidth(
                            nullptr) *columnIndex, bufferedImageArray[index]->getHeight(
                            nullptr) *rowIndex, bufferedImageArray[index]->getWidth(
                            nullptr), bufferedImageArray[index]->getHeight(
                            nullptr), 
                            nullptr);
    
columnIndex++;
    
}

g->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bufferedImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_BUFFEREDIMAGEUTIL2_CPP
