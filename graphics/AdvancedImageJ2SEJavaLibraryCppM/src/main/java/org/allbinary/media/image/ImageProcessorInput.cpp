
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageProcessorInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageProcessorInput::ImageProcessorInput(std::vector<File*> files, std::vector<BufferedImage*> bufferedImageArray){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->bufferedImageArray= bufferedImageArray;
    
this->files= files;
    
}


    auto ImageProcessorInput::getBufferedImageArray() -> std::vector<BufferedImage*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bufferedImageArray;
    
}


    auto ImageProcessorInput::getFiles() -> std::vector<File*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->files;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPROCESSORINPUT_CPP
