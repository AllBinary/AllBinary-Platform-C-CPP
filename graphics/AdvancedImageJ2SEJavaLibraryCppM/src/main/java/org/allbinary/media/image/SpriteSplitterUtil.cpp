
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageUnifierProperties.h"
#include "ImageUnifierCell.h"
#include "ImageUnifierUtil.h"
#include "ImageProcessorInput.h"
#include "ImageProcessedVisitor.h"

class SpriteSplitterUtil
            : public Object
         {
        

    private: static const instance: SpriteSplitterUtil = new SpriteSplitterUtil();

    public static SpriteSplitterUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpriteSplitterUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const ANIMATIONS_LABELS: std::vector<string> = 
                                                        [
                                                            "Row Total:","Column Total:","Column Total:","Row Total:","Column Total:","Row Total:"
                                                        ];

    public const DIRECTIONAL_ANIMATIONS: string = "Directional DLRU";

    public const HORIZONTAL_ANIMATIONS: string = "Horizontal Animations";

    public const HORIZONTAL_SPRITE: string = "Horizontal A=R=Y F=C=X";

    private: const ROW_NAME: std::vector<string> = 
                                                        [
                                                            "idle","walk","attack","defeat"
                                                        ];

    private: const _ROW: string = "_row";

                //@Throws(Exception.constructor)
            
    public process(ImageProcessorInput imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, string spriteType, ImageProcessedVisitor visitor){

    bufferedImage: BufferedImage;;
    

    generatedBufferedImageArray: std::vector<std::vector<BufferedImage>>;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {
bufferedImage= bufferedImageArray[index]!;
    
this.logUtil!.putF(spriteType, this, this.commonStrings!.RUN);
    

                        if(spriteType == this.HORIZONTAL_SPRITE)
                        
                                    {
                                    
    cellHeight: int32_t = bufferedImage!.getHeight() /totalAnimations;;
    

    cellWidth: int32_t = bufferedImage!.getWidth() /totalFrames;;
    

    columns: int32_t = totalFrames;;
    

    rows: int32_t = totalAnimations;;
    
generatedBufferedImageArray= new Array(rows).fill(null).map(() => new Array(columns).fill(0))
                                                            ;
    
this.logUtil!.putF("Processing Individual Cells columns: " +columns +" rows: " +rows, this, this.commonStrings!.RUN);
    
this.logUtil!.putF("Processing Individual Cells cellHeight: " +cellHeight +" cellWidth: " +cellWidth, this, this.commonStrings!.RUN);
    

    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    

    nameEnding: string = 
                null
            ;;
    

    x: int32_t = 0;;
    

    y: int32_t = 0;;
    




                        for (
    index2: int32_t = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    




                        for (
    index3: int32_t = 0;index3 < columns; index3++)
        {
x= cellWidth *index3;
    
generatedBufferedImageArray[index2]![index3]= bufferedImage!.getSubimage(x +widthReduction, y +heightReduction, cellWidth -(widthReduction *2), cellHeight -(heightReduction *2));
    

                        if(increaseWidth != 0 || increaseHeight != 0)
                        
                                    {
                                    generatedBufferedImageArray[index2]![index3]= imageUtil!.createBufferedImageAllowTranslate(generatedBufferedImageArray[index2]![index3]!, cellWidth +increaseWidth, cellHeight +increaseHeight, false, true);
    

                                    }
                                
nameEnding= new StringMaker().appendint(index2)!.append(this.commonSeps!.UNDERSCORE)!.appendint(index3)!.toString();
    
visitor.visit(generatedBufferedImageArray[index2]![index3]!, nameEnding, index);
    
}

}

this.logUtil!.putF("Processing Rows from Cells", this, this.commonStrings!.RUN);
    

    imageUnifierProperties: ImageUnifierProperties = new ImageUnifierProperties();;
    
imageUnifierProperties!.setRows(.valueOf());
    
imageUnifierProperties!.setColumns(columns.valueOf());
    

    imageUnifierCell: ImageUnifierCell = new ImageUnifierCell(Integer.valueOf(cellWidth -(2 *widthReduction))Integer.valueOf(cellHeight -(2 *heightReduction)));;
    
imageUnifierProperties!.setImageUnifierCell(imageUnifierCell);
    




                        for (
    index2: int32_t = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    

    tempBufferedImageArray: std::vector<BufferedImage> = new Array(columns);;
    




                        for (
    index3: int32_t = 0;index3 < columns; index3++)
        {
tempBufferedImageArray[index3]= generatedBufferedImageArray[index2]![index3]!;
    
nameEnding= new StringMaker().appendint(index2)!.append(this.commonSeps!.UNDERSCORE)!.appendint(1)!.append(this._ROW)!.toString();
    
}


    generatedBufferedImage: BufferedImage = ImageUnifierUtil.getInstance()!.getImage(tempBufferedImageArray, imageUnifierProperties)!;;
    
visitor.visit(generatedBufferedImage, nameEnding, index);
    
}


                                    }
                                
                             else 
                        if(spriteType == HORIZONTAL_ANIMATIONS)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(spriteType == this.DIRECTIONAL_ANIMATIONS)
                        
                                    {
                                    
    totalFrames2: int32_t = 4;;
    

    cellHeight: int32_t = bufferedImage!.getHeight() /totalFrames2;;
    

    cellWidth: int32_t = bufferedImage!.getWidth() /totalAnimations;;
    

    columns: int32_t = totalAnimations;;
    

    rows: int32_t = totalFrames2;;
    
generatedBufferedImageArray= new Array(rows).fill(null).map(() => new Array(columns).fill(0))
                                                            ;
    
this.logUtil!.putF("Processing Individual Cells for each Direction", this, this.commonStrings!.RUN);
    

    nameEnding: string = 
                null
            ;;
    

    x: int32_t = 0;;
    

    y: int32_t = 0;;
    




                        for (
    index2: int32_t = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    




                        for (
    index3: int32_t = 0;index3 < columns; index3++)
        {
x= cellWidth *index3;
    
generatedBufferedImageArray[index2]![index3]= bufferedImage!.getSubimage(x +widthReduction, y +heightReduction, cellWidth -(widthReduction *2), cellHeight -(heightReduction *2));
    

                        if(increaseWidth != 0 || increaseHeight != 0)
                        
                                    {
                                    generatedBufferedImageArray[index2]![index3]= ImageUtil.getInstance()!.createBufferedImageAllowTranslate(generatedBufferedImageArray[index2]![index3]!, cellWidth +increaseWidth, cellHeight +increaseHeight, false, true);
    

                                    }
                                
nameEnding= new StringMaker().append(this.commonStrings!.DIRECTION_NAME[index2]!)!.append(this.commonSeps!.UNDERSCORE)!.appendint(index3)!.toString();
    
visitor.visit(generatedBufferedImageArray[index2]![index3]!, nameEnding, index);
    
}

}


    imageUnifierProperties: ImageUnifierProperties = new ImageUnifierProperties();;
    
imageUnifierProperties!.setRows(.valueOf());
    
imageUnifierProperties!.setColumns(columns.valueOf());
    

    imageUnifierCell: ImageUnifierCell = new ImageUnifierCell(Integer.valueOf(cellWidth -(2 *widthReduction)) +increaseWidth, Integer.valueOf(cellHeight -(2 *heightReduction) +increaseHeight));;
    
imageUnifierProperties!.setImageUnifierCell(imageUnifierCell);
    
this.logUtil!.putF("Processing Rows from Cells for each Direction", this, this.commonStrings!.RUN);
    




                        for (
    index2: int32_t = 0;index2 < rows; index2++)
        {
y= cellHeight *index2;
    

    tempBufferedImageArray: std::vector<BufferedImage> = new Array(columns);;
    




                        for (
    index3: int32_t = 0;index3 < columns; index3++)
        {
tempBufferedImageArray[index3]= generatedBufferedImageArray[index2]![index3]!;
    
nameEnding= new StringMaker().append(this.commonStrings!.DIRECTION_NAME[index2]!)!.append(this.commonSeps!.UNDERSCORE)!.appendint(1)!.append(this._ROW)!.toString();
    
}


    generatedBufferedImage: BufferedImage = ImageUnifierUtil.getInstance()!.getImage(tempBufferedImageArray, imageUnifierProperties)!;;
    
visitor.visit(generatedBufferedImage, nameEnding, index);
    
}


                                    }
                                
}

}


};

            

