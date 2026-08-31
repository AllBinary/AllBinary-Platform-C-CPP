
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Graphics2D.h"

class BufferedImageUtil2
            : public Object
         {
        

    private: static const instance: BufferedImageUtil2 = new BufferedImageUtil2();

    public static BufferedImageUtil2 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BufferedImageUtil2.instance;
    
}


    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    public BufferedImage createSpriteImage(std::vector<BufferedImage> bufferedImageArray){

    columns: int32_t = bufferedImageArray!.length
                ;;
    

    max: int32_t = columns;;
    

    rows: int32_t = 0;;
    

                        if(bufferedImageArray!.length < columns)
                        
                                    {
                                    columns= bufferedImageArray!.length;
    

                                    }
                                
rows= (bufferedImageArray!.length /columns);
    

                        if(bufferedImageArray!.length % columns != 0)
                        
                                    {
                                    rows++;
    

                                    }
                                

    bufferedImage: BufferedImage = this.imageUtil!.create(bufferedImageArray[0]!.getWidth(
                            nullptr) *columns, bufferedImageArray[0]!.getHeight(
                            nullptr) *rows)!;;
    

    g: Graphics2D = bufferedImage!.createGraphics()!;;
    

    columnIndex: int32_t = 0;;
    

    rowIndex: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {

                        if(index /max != 0 && index % max == 0)
                        
                                    {
                                    rowIndex++;
    
columnIndex= 0;
    

                                    }
                                
g.drawImage(bufferedImageArray[index]!, bufferedImageArray[index]!.getWidth(
                            nullptr) *columnIndex, bufferedImageArray[index]!.getHeight(
                            nullptr) *rowIndex, bufferedImageArray[index]!.getWidth(
                            nullptr), bufferedImageArray[index]!.getHeight(
                            nullptr), 
                            nullptr);
    
columnIndex++;
    
}

g.dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImage;
    
}


};

            

