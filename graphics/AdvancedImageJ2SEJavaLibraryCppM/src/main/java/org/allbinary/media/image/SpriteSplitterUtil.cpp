
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/SpriteSplitterUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageUnifierProperties.h"
#include "org/allbinary/media/image/ImageUnifierCell.h"
#include "org/allbinary/media/image/ImageUnifierUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"


SpriteSplitterUtil::SpriteSplitterUtil() : logUtil(LogUtil::getInstance()), commonSeps(CommonSeps::getInstance()), commonStrings(CommonStrings::getInstance()), ANIMATIONS_LABELS(
                                                        {
                                                            "Row Total:","Column Total:","Column Total:","Row Total:","Column Total:","Row Total:"
                                                        }), ROW_NAME(
                                                        {
                                                            "idle","walk","attack","defeat"
                                                        }) {
        }
        auto SpriteSplitterUtil::instance_owner() -> SpriteSplitterUtil* { static std::unique_ptr<SpriteSplitterUtil> value(new SpriteSplitterUtil()); return value.get(); }
SpriteSplitterUtil* SpriteSplitterUtil::instance = SpriteSplitterUtil::instance_owner();

    auto SpriteSplitterUtil::getInstance() -> SpriteSplitterUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SpriteSplitterUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto SpriteSplitterUtil::process(ImageProcessorInput* imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, std::string spriteType, ImageProcessedVisitor* visitor) -> void{

    BufferedImage* bufferedImage;;
    

    std::vector<std::vector<BufferedImage*>> generatedBufferedImageArray;;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
bufferedImage= bufferedImageArray[index];
    
this->logUtil->putF(spriteType, this, this->commonStrings->RUN);
    

                        if(spriteType == this->HORIZONTAL_SPRITE)
                        
                                    {
                                    
    int32_t cellHeight = bufferedImage->getHeight() /totalAnimations;;
    

    int32_t cellWidth = bufferedImage->getWidth() /totalFrames;;
    

    int32_t columns = totalFrames;;
    

    int32_t rows = totalAnimations;;
    
generatedBufferedImageArray= std::vector<std::vector<BufferedImage*>>(rows, std::vector<BufferedImage*>(columns));
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Processing Individual Cells columns: ") +JavaString::valueOf(columns)) +JavaString::valueOf(" rows: ")) +JavaString::valueOf(rows), this, this->commonStrings->RUN);
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Processing Individual Cells cellHeight: ") +JavaString::valueOf(cellHeight)) +JavaString::valueOf(" cellWidth: ")) +JavaString::valueOf(cellWidth), this, this->commonStrings->RUN);
    

    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    std::string nameEnding = 
                nullptr
            ;;
    

    int32_t x = 0;;
    

    int32_t y = 0;;
    




                        for (
    int32_t index2 = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    




                        for (
    int32_t index3 = 0;index3 < columns; index3++)
        {
x= cellWidth *index3;
    
generatedBufferedImageArray[index2][index3]= bufferedImage->getSubimage(x +widthReduction, y +heightReduction, cellWidth -(widthReduction *2), cellHeight -(heightReduction *2));
    

                        if(increaseWidth != 0 || increaseHeight != 0)
                        
                                    {
                                    generatedBufferedImageArray[index2][index3]= imageUtil->createBufferedImageAllowTranslate(generatedBufferedImageArray[index2][index3], cellWidth +increaseWidth, cellHeight +increaseHeight, false, true);
    

                                    }
                                
nameEnding= JavaString::valueOf((new StringMaker())->appendint(index2)->append(this->commonSeps->UNDERSCORE)->appendint(index3));
    
visitor->visit(generatedBufferedImageArray[index2][index3], nameEnding, index);
    
}

}

this->logUtil->putF("Processing Rows from Cells", this, this->commonStrings->RUN);
    

    ImageUnifierProperties* imageUnifierProperties = new ImageUnifierProperties();;
    
imageUnifierProperties->setRows(.valueOf());
    
imageUnifierProperties->setColumns(columns.valueOf());
    

    ImageUnifierCell* imageUnifierCell = new ImageUnifierCell(Integer.valueOf(cellWidth -(2 *widthReduction))Integer.valueOf(cellHeight -(2 *heightReduction)));;
    
imageUnifierProperties->setImageUnifierCell(imageUnifierCell);
    




                        for (
    int32_t index2 = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    

    std::vector<BufferedImage*> tempBufferedImageArray = std::vector<BufferedImage*>(columns);;
    




                        for (
    int32_t index3 = 0;index3 < columns; index3++)
        {
tempBufferedImageArray[index3]= generatedBufferedImageArray[index2][index3];
    
nameEnding= JavaString::valueOf((new StringMaker())->appendint(index2)->append(this->commonSeps->UNDERSCORE)->appendint(1)->append(this->_ROW));
    
}


    BufferedImage* generatedBufferedImage = ImageUnifierUtil::getInstance()->getImage(tempBufferedImageArray, imageUnifierProperties);;
    
visitor->visit(generatedBufferedImage, nameEnding, index);
    
}


                                    }
                                
                             else 
                        if(spriteType == HORIZONTAL_ANIMATIONS)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(spriteType == this->DIRECTIONAL_ANIMATIONS)
                        
                                    {
                                    
    int32_t totalFrames2 = 4;;
    

    int32_t cellHeight = bufferedImage->getHeight() /totalFrames2;;
    

    int32_t cellWidth = bufferedImage->getWidth() /totalAnimations;;
    

    int32_t columns = totalAnimations;;
    

    int32_t rows = totalFrames2;;
    
generatedBufferedImageArray= std::vector<std::vector<BufferedImage*>>(rows, std::vector<BufferedImage*>(columns));
    
this->logUtil->putF("Processing Individual Cells for each Direction", this, this->commonStrings->RUN);
    

    std::string nameEnding = 
                nullptr
            ;;
    

    int32_t x = 0;;
    

    int32_t y = 0;;
    




                        for (
    int32_t index2 = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    




                        for (
    int32_t index3 = 0;index3 < columns; index3++)
        {
x= cellWidth *index3;
    
generatedBufferedImageArray[index2][index3]= bufferedImage->getSubimage(x +widthReduction, y +heightReduction, cellWidth -(widthReduction *2), cellHeight -(heightReduction *2));
    

                        if(increaseWidth != 0 || increaseHeight != 0)
                        
                                    {
                                    generatedBufferedImageArray[index2][index3]= ImageUtil::getInstance()->createBufferedImageAllowTranslate(generatedBufferedImageArray[index2][index3], cellWidth +increaseWidth, cellHeight +increaseHeight, false, true);
    

                                    }
                                
nameEnding= JavaString::valueOf((new StringMaker())->append(this->commonStrings->DIRECTION_NAME[index2])->append(this->commonSeps->UNDERSCORE)->appendint(index3));
    
visitor->visit(generatedBufferedImageArray[index2][index3], nameEnding, index);
    
}

}


    ImageUnifierProperties* imageUnifierProperties = new ImageUnifierProperties();;
    
imageUnifierProperties->setRows(.valueOf());
    
imageUnifierProperties->setColumns(columns.valueOf());
    

    ImageUnifierCell* imageUnifierCell = new ImageUnifierCell(Integer.valueOf(cellWidth -(2 *widthReduction)) +increaseWidth, Integer.valueOf(cellHeight -(2 *heightReduction) +increaseHeight));;
    
imageUnifierProperties->setImageUnifierCell(imageUnifierCell);
    
this->logUtil->putF("Processing Rows from Cells for each Direction", this, this->commonStrings->RUN);
    




                        for (
    int32_t index2 = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    

    std::vector<BufferedImage*> tempBufferedImageArray = std::vector<BufferedImage*>(columns);;
    




                        for (
    int32_t index3 = 0;index3 < columns; index3++)
        {
tempBufferedImageArray[index3]= generatedBufferedImageArray[index2][index3];
    
nameEnding= JavaString::valueOf((new StringMaker())->append(this->commonStrings->DIRECTION_NAME[index2])->append(this->commonSeps->UNDERSCORE)->appendint(1)->append(this->_ROW));
    
}


    BufferedImage* generatedBufferedImage = ImageUnifierUtil::getInstance()->getImage(tempBufferedImageArray, imageUnifierProperties);;
    
visitor->visit(generatedBufferedImage, nameEnding, index);
    
}


                                    }
                                
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_CPP
