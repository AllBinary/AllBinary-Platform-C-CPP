
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ImageTypeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/BasicArrayListD.h"

auto ImageTypeUtil::SINGLETON_owner() -> ImageTypeUtil* { static std::unique_ptr<ImageTypeUtil> value(new ImageTypeUtil()); return value.get(); }
ImageTypeUtil* ImageTypeUtil::SINGLETON = ImageTypeUtil::SINGLETON_owner();

ImageTypeUtil::ImageTypeUtil() : list(new BasicArrayListD()){
this->list->add(JPG);
    
this->list->add(GIF);
    
this->list->add(PNG);
    
}


    auto ImageTypeUtil::isSupported(std::string mediaFileType) -> bool{
mediaFileType= JavaString::toLowerCase(mediaFileType);
    




                        for (
    int32_t index = this->list->size() -1;index >= 0; index--)
        {

    std::string name = this->list->objectArray[index];;
    

                        if(mediaFileType.compare(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ImageTypeUtil::getInstance() -> ImageTypeUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageTypeUtil::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_CPP
