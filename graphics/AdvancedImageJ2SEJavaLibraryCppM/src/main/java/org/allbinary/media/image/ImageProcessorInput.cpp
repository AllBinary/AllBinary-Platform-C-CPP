
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageProcessorInput
            : public Object
         {

    private: std::vector<BufferedImage> bufferedImageArray;

    private: std::vector<File> files;

public: ImageProcessorInput(std::vector<File> files, std::vector<BufferedImage> bufferedImageArray){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->bufferedImageArray= bufferedImageArray;
    
this->files= files;
    
}


    public: std::vector<BufferedImage> getBufferedImageArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImageArray;
    
}


    public: std::vector<File> getFiles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->files;
    
}


};

            

