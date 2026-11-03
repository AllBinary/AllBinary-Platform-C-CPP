
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/filter/ImageFileFilter.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/File.h>

      
#include <javax/swing/filechooser/FileFilter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TWB - replace with file visitor version

ImageFileFilter::ImageFileFilter() {
        }
        
    auto ImageFileFilter::accept(File* f) -> bool{

                        if(f->isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

    std::string s = f->getName();;
    

    int32_t i = JavaString::lastIndexOf(s, '.');;
    

                        if(i > 0 && i < s.size() -1)
                        
                                    {
                                    
    std::string ext = JavaString::toLowerCase(s.substring(i +1));;
    

                        if(JavaObjects::equals(ext, "jpg") || JavaObjects::equals(ext, "jpeg"))
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ImageFileFilter::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Accepts .jpg and .jpeg files";
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_FILTER_IMAGEFILEFILTER_CPP
